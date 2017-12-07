using System;
using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Transform sword;
    
    // Movement Variables
    public float speed = 3f;
    public float turnSpeed = 10f;

    // Jump Variables
    public float jumpDist = 3.0f;
    float verticalVelocity;
    public float gravity = 20f;
    
    // Input
    private Vector2 input;
    private float angle;
    
    // Checking variables
    private bool isAttacking;
    private bool isHittable;
    private bool alive;
    private bool block;

    //Dash Variables
    public float maxDashTime = 1.0f;
    public float dashSpeed = 8.0f;
    public float dashStoppingSpeed = 0.1f;
    private bool dashAnimation = false;
    private float currentDashTime;


    // Game Objects References
    GameObject menu;
    Quaternion targetRotation;
    Transform cam, character;
    Animator anim;
    CharacterController player;
    PlayerStats stats;
    GameObject trailsFX;

    /* Initializing values and getting references */
    void Start()
    {
        // Setting References
        cam = Camera.main.transform;
        anim = GetComponent<Animator>();
        character = GetComponent<Transform>();
        player = character.GetComponent<CharacterController>();
        stats = GetComponent<PlayerStats>();
        trailsFX = GameObject.Find("Trails");
        menu = GameObject.Find("PauseMenu");

        // Hide menu
        menu.SetActive(false);

        // Set default values
        isHittable = true;
        alive = true;
        block = false;
        currentDashTime = maxDashTime;

        // Hide dash particles
        trailsFX.SetActive(false);
    }

    // Returns Player's stats intance.
    public PlayerStats GetStats()
    {
        return stats;
    }

    // Return attacking status of the player.
    public bool AttackStatus()
    {
        return isAttacking;
    }

    // Returns whether the player is hittable or not. (Game mechanic)
    public bool HittableStatus()
    {
        return isHittable;
    }

    // Returns whether the player is alive or not.
    public bool IsAlive()
    {
        return alive;
    }

    // Strats invincibility co - routine.
    void Hit()
    {
        StartCoroutine(InvincibilityFrames());
    }

    void Update()
    {
        // Only allow player to act if it is alive
        if (alive)
        {
            // Check whether it can move or not due to previous action
            if (!GetBlockingState())
            {
                GetInput();
                Animate();
                Move();
            }
            // Apply Gravity to player
            ApplyGravity();

        }

    }

    private void ApplyGravity()
    {
        /* Is grounded returns whether the player is in contact with the ground or not. */
        if (player.isGrounded == true)
        {   
            // Push player downwards
            verticalVelocity = -gravity * Time.deltaTime;
            // Allow jumping when pressing Y on the gamepad (xbox)
            if (Input.GetButtonDown("Y"))
            {
                verticalVelocity = jumpDist;
            }
        }
        else
        {
            // Push player towards the ground
            verticalVelocity -= gravity * Time.deltaTime;
        }
    }

    void Animate()
    {
        //Pass values to animator
        anim.SetFloat("inputH", input.x);
        anim.SetFloat("inputV", input.y);
        anim.SetBool("dash", dashAnimation);

    }

    /* Takes user input and execute actions accordingly */
    void GetInput()
    {
        // Don't allow user to move while attacking
        if (!isAttacking)
        {
            input.x = Input.GetAxis("Horizontal");
            input.y = Input.GetAxis("Vertical");
        }
        else
        {
            input.x = 0;
            input.y = 0;
        }

        if (Math.Abs(Input.GetAxis("RT")) > 0 || Input.GetKey(KeyCode.LeftShift))
        {
            if (Input.GetButtonDown("Y") || Input.GetKey(KeyCode.E))
            {
                anim.Play("PowerUp", 0);
                stats.Heal(20);
                BlockInput(1.75f);
            }

            if (Input.GetButtonDown("A") || Input.GetMouseButton(1))
            {

                anim.Play("CircularSlash", 0);
                StartCoroutine(Attack(.9f, 1.2f));
                BlockInput(2.1f);

            }

            if (Input.GetButtonDown("B") || Input.GetKey(KeyCode.Q))
            {
                anim.Play("Jump-Attack", 0);
                StartCoroutine(Attack(1.1f, .6f));
                BlockInput(2.3f);
            }
        }
        else
        {
            if (Input.GetButtonDown("B"))
            {
                anim.Play("Dash", 0);
                currentDashTime = 0.0f;
                StartCoroutine(Dash(true));
                BlockInput(.2f);

            }

            if (Input.GetButtonDown("A") || Input.GetMouseButton(1))
            {
                anim.Play("Horizontal Slash", 0);
                StartCoroutine(Attack(.3f, .95f));
                BlockInput(1.5f);
            }

            if (Input.GetButtonDown("Start"))
            {
                Debug.Log("Pause");
                if (Time.timeScale > 0)
                {
                    menu.SetActive(true);
                    Time.timeScale = 0;
                    
                }     
            }
        }
    }

    // Calculate angle in which the player should face to.
    void CalculateDirection()
    {
        angle = Mathf.Atan2(input.x, input.y);
        angle = Mathf.Rad2Deg * angle;
        angle += cam.eulerAngles.y;

    }
    
    // rotate Y axis player to face correct direction.
    void Rotate()
    {
        targetRotation = Quaternion.Euler(0, angle, 0);
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, turnSpeed * Time.deltaTime);
    }

    /* Move player's character based on input */
    private void Move()
    {
        Vector3 movement = new Vector3(0, verticalVelocity * Time.deltaTime, 0);
        if (!(Mathf.Abs(input.x) < 0.1 && Mathf.Abs(input.y) < 0.1))
        {
            //Claculate direction to face to.
            CalculateDirection();
            //Rotate transform.
            Rotate();
            // Move character forward in the given direction.
            movement += transform.forward * speed * Time.deltaTime;
        }
        // Tell character controller component to move
        player.Move(movement);

    }

    /* On collision trigger (if player gets collided by something) */
    private void OnTriggerEnter(Collider other)
    {
        // Check if the player is still alive
        if (alive)
        {
            // If the colliding object is an enemy sword
            if (other.gameObject.name == "EnemySword")
            {
                // Check if character is hittable
                if (HittableStatus())
                {
                    //Character takes damage
                    stats.TakeDamage(15);
                    // If player dies, change alive value.
                    if (stats.currentHealth <= 0)
                    {
                        alive = false;
                    }
                }
            }
        }

    }

    /* Attacking coroutine will set the attack time to a given time to match animation. */
    IEnumerator Attack(float startAttak, float finishAttack)
    {
        yield return new WaitForSeconds(startAttak);
        isAttacking = true;
        yield return new WaitForSeconds(finishAttack);
        isAttacking = false;

    }

    /* Turn the character invincible for 1 second */
    IEnumerator InvincibilityFrames()
    {
        isHittable = false;
        yield return new WaitForSeconds(1f);
        isHittable = true;

    }

    IEnumerator BlockInputCoroutine(float time)
    {
        block = true;
        yield return new WaitForSeconds(time);
        block = false;
    }
    /* Dashing Co - routine */
    IEnumerator Dash(bool dashing)
    {
        Vector3 movement = new Vector3(0, verticalVelocity * Time.deltaTime, 0);
        while (dashing)
        {
            if (currentDashTime < maxDashTime)
            {
                movement += transform.forward * dashSpeed * Time.deltaTime;
                currentDashTime += dashStoppingSpeed;
                dashAnimation = true;
                trailsFX.SetActive(true);
                player.Move(movement);
            }
            else
            {
                trailsFX.SetActive(false);
                dashing = false;
                dashAnimation = false;
                break;
            }
            yield return new WaitForFixedUpdate();
        }
    }

    //BlockingFunctionality

    bool GetBlockingState()
    {
        return block;
    }

    void BlockInput(float time)
    {
        StartCoroutine(BlockInputCoroutine(time));
    }



}

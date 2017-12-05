using System;
using System.Collections;
using UnityEngine;

public class PlayerController : MonoBehaviour
{

    public Transform sword;
    public float speed = 3f;
    public float turnSpeed = 10f;


    public float jumpDist = 3.0f;
    float verticalVelocity;
    public float gravity = 20f;
    private Vector2 input;
    private float angle;
    private bool isAttacking;
    private bool isHittable;
    private bool alive;
    private bool block;

    //Testing Dash
    public float maxDashTime = 1.0f;
    public float dashSpeed = 8.0f;
    public float dashStoppingSpeed = 0.1f;
    private bool dashAnimation = false;
    private float currentDashTime;



    GameObject menu;
    Quaternion targetRotation;
    Transform cam, character;
    Animator anim;
    CharacterController player;
    PlayerStats stats;
    GameObject trailsFX;

    void Start()
    {
        cam = Camera.main.transform;
        anim = GetComponent<Animator>();
        character = GetComponent<Transform>();
        player = character.GetComponent<CharacterController>();
        stats = GetComponent<PlayerStats>();
        trailsFX = GameObject.Find("Trails");
        menu = GameObject.Find("PauseMenu");

        menu.SetActive(false);
        isHittable = true;
        alive = true;
        block = false;
        currentDashTime = maxDashTime;
        trailsFX.SetActive(false);
    }

    public PlayerStats GetStats()
    {
        return stats;
    }

    public bool AttackStatus()
    {
        return isAttacking;
    }

    public bool HittableStatus()
    {
        return isHittable;
    }

    public bool IsAlive()
    {
        return alive;
    }

    void Hit()
    {
        StartCoroutine(InvincibilityFrames());
    }

    void Update()
    {
        if (alive)
        {

            if (!GetBlockingState())
            {
                GetInput();
                Animate();
                Move();
            }
            ApplyGravity();

        }

    }

    private void ApplyGravity()
    {

        if (player.isGrounded == true)
        {
            verticalVelocity = -gravity * Time.deltaTime;
            if (Input.GetButtonDown("Y"))
            {
                verticalVelocity = jumpDist;
            }
        }
        else
        {
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

    void GetInput()
    {
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

        if (Math.Abs(Input.GetAxis("RT")) > 0)
        {
            if (Input.GetButtonDown("Y"))
            {
                anim.Play("PowerUp", 0);
                BlockInput(1.75f);
            }

            if (Input.GetButtonDown("A"))
            {

                anim.Play("CircularSlash", 0);
                StartCoroutine(Attack(.9f, 1.2f));
                BlockInput(2.1f);

            }

            if (Input.GetButtonDown("B"))
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

    void CalculateDirection()
    {
        angle = Mathf.Atan2(input.x, input.y);
        angle = Mathf.Rad2Deg * angle;
        angle += cam.eulerAngles.y;

    }

    void Rotate()
    {
        targetRotation = Quaternion.Euler(0, angle, 0);
        transform.rotation = Quaternion.Slerp(transform.rotation, targetRotation, turnSpeed * Time.deltaTime);
    }

    private void Move()
    {
        Vector3 movement = new Vector3(0, verticalVelocity * Time.deltaTime, 0);
        if (!(Mathf.Abs(input.x) < 0.1 && Mathf.Abs(input.y) < 0.1))
        {
            //Claculate direction to face to.
            CalculateDirection();
            //Rotate transform
            Rotate();
            movement += transform.forward * speed * Time.deltaTime;
        }
        player.Move(movement);

    }

    private void SeatheSword()
    {
        sword.gameObject.SetActive(!sword.gameObject.activeSelf);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (alive)
        {
            if (other.gameObject.name == "EnemySword")
            {
                if (HittableStatus())
                {
                    Debug.Log("Hit!!");
                    stats.TakeDamage(15);
                    if (stats.currentHealth <= 0)
                    {
                        alive = false;
                    }
                }
            }
        }


    }

    IEnumerator Attack(float startAttak, float finishAttack)
    {
        yield return new WaitForSeconds(startAttak);
        isAttacking = true;
        Debug.Log(isAttacking);
        yield return new WaitForSeconds(finishAttack);
        isAttacking = false;
        Debug.Log(isAttacking);

    }

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

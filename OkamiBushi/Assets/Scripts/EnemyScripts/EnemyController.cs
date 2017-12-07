using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

// Basic enemy AI controller
public class EnemyController : MonoBehaviour
{
    
    public float sightRadius = 10f;

    Transform target, crystal, player;
    Rigidbody rbody;
    NavMeshAgent agent;
    EnemyStats stats;
    Animator anim;

    private bool isHittable;
    private bool isAttacking;
    private bool alive;
    private bool block;


    // Use this for initialization
    void Start()
    {

        crystal = CrystalManager.instance.crystal.transform;
        agent = GetComponent<NavMeshAgent>();
        player = PlayerManager.instance.player.transform;
        stats = GetComponent<EnemyStats>();
        anim = GetComponent<Animator>();
        rbody = GetComponent<Rigidbody>();

        isHittable = true;
        isAttacking = false;
        alive = true;

    }

    // Update is called once per frame
    void Update()
    {

        if (alive)
        {
            if (!GetBlockingState())
            {
                SetTarget();
                SetDestination();

                SetAction();
            }
        }
    }

    // If player is not in sight distance swith target to crystal
    void SetTarget()
    {
        float distance = Vector3.Distance(player.position, transform.position);

        if (!PlayerManager.instance.player.GetComponent<PlayerController>().IsAlive())
        {
            target = crystal;
            agent.stoppingDistance = 2f;
        }
        if (distance <= sightRadius)
        {
            target = player;
            agent.stoppingDistance = 2f;
        }
        else
        {
            target = crystal;
        }
    }

    // Set destination to target
    void SetDestination()
    {
        FaceTarget(target);
        Vector3 tempPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
        agent.SetDestination(tempPosition);
    }

    //  Detect distance to target and attack if proceeds
    void SetAction()
    {
        float distance = Vector3.Distance(target.position, transform.position);
        if (distance <= agent.stoppingDistance)
        {
            if (!isAttacking && isHittable)
            {
                //Attack Target
                anim.Play("SwordAttack");
                StartCoroutine(Attack(.5f, 1.5f));
                BlockInput(1.5f);
            }

        }

    }

    // Face model to target direction
    void FaceTarget(Transform target)
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0f, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
    }

    // Display radius in Unity Editor
    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, sightRadius);
    }

    //If hit by HitPoint (Component on the player's sword) take damage.
    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "HitPoint")
        {
            if (alive)
            {
                PlayerController pc = PlayerManager.instance.player.GetComponent<PlayerController>();
                if (pc.AttackStatus() && isHittable)
                {
                    stats.TakeDamage(PlayerManager.instance.player.GetComponent<PlayerStats>().damage.getValue());
                    // If it is still alive play spin animation else die and play death animation
                    if (stats.currentHealth > 0)
                    {
                        isAttacking = false;
                        anim.Play("spin1", 0);
                        StartCoroutine(BlockInputCoroutine(1.5f));
                    }
                    else
                    {
                        isAttacking = false;
                        anim.Play("Death", 0);
                        alive = false;
                    }

                }
            }

        }
    }
    // Returns attacking status of enemy
    public bool AttackStatus()
    {
        return isAttacking;
    }

    // Enemy becomes invincible for 1 second
    IEnumerator InvincibilityFrames()
    {
        isHittable = false;
        yield return new WaitForSeconds(1f);
        isHittable = true;

    }
    // Attack  co -routine
    IEnumerator Attack(float startAttak, float finishAttack)
    {
        yield return new WaitForSeconds(startAttak);
        isAttacking = true;
        yield return new WaitForSeconds(finishAttack);
        isAttacking = false;

    }

    //BlockingFunctionality

    public bool GetBlockingState()
    {
        return block;
    }

    public void BlockInput(float time)
    {
        StartCoroutine(BlockInputCoroutine(time));
    }

    
    IEnumerator BlockInputCoroutine(float time)
    {
        block = true;
        yield return new WaitForSeconds(time);
        block = false;
    }

}

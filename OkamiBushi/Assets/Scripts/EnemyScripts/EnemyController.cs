﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class EnemyController : MonoBehaviour {

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
	void Start () {

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
	void Update () {
        
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


    void SetTarget()
    {
        float distance = Vector3.Distance(player.position, transform.position);

        if (!PlayerManager.instance.player.GetComponent<AvatarController>().IsAlive())
        {
            target = crystal;
        }
        if (distance <= sightRadius)
        {
            target = player;
        }
        else
        {
            target = crystal;
        }
    }

    void SetDestination()
    {
        FaceTarget(target);
        Vector3 tempPosition = new Vector3(target.position.x, transform.position.y, target.position.z);
        agent.SetDestination(tempPosition);
    }

    void SetAction()
    {
        float distance = Vector3.Distance(target.position, transform.position);
        if (distance <= agent.stoppingDistance)
        {
            if (!isAttacking && isHittable)
            {
                //Attack Target
                anim.Play("SwordAttack");
                StartCoroutine(Attack(.5f,1.5f));
                BlockInput(1f);
            }

        }

    }

    void FaceTarget(Transform target)
    {
        Vector3 direction = (target.position - transform.position).normalized;
        Quaternion lookRotation = Quaternion.LookRotation(new Vector3(direction.x, 0f, direction.z));
        transform.rotation = Quaternion.Slerp(transform.rotation, lookRotation, Time.deltaTime * 5f);
    }

    void OnDrawGizmosSelected()
    {
        Gizmos.color = Color.red;
        Gizmos.DrawWireSphere(transform.position, sightRadius);
    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.gameObject.name == "HitPoint")
        {
            if(alive){
                AvatarController pc = PlayerManager.instance.player.GetComponent<AvatarController>();
                if (pc.AttackStatus() && isHittable)
                {
                    Debug.Log("Hit by Humongous Sword");
                    stats.TakeDamage(PlayerManager.instance.player.GetComponent<PlayerStats>().damage.getValue());
                    if(stats.currentHealth > 0)
                    {
                        anim.Play("spin1", 0);
                        StartCoroutine(BlockInputCoroutine(1.5f));
                    } else {
                        anim.Play("Death", 0);
                        alive = false;
                    }
                    
                }
            }
            
        }
    }

    public bool AttackStatus()
    {
        return isAttacking;
    }

    IEnumerator InvincibilityFrames()
    {
        isHittable = false;
        yield return new WaitForSeconds(1f);
        isHittable = true;

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

    IEnumerator BlockInputCoroutine(float time)
    {
        block = true;
        yield return new WaitForSeconds(time);
        block = false;
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

}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStats : CharacterStats {

    public override void Die()
    {
        base.Die();
        Animator anim = GetComponent<Animator>();
        anim.Play("Death", 0);
        GameController.instance.countEnemy();
        StartCoroutine(Despawn());

    }

    IEnumerator Despawn()
    {
        yield return new WaitForSeconds(10f);
        Destroy(gameObject);
    }
}

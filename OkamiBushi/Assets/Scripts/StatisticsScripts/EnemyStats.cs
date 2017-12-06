using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStats : CharacterStats {
    // Overriding die method
    public override void Die()
    {
        base.Die();
        // Call death animation
        Animator anim = GetComponent<Animator>();
        anim.Play("Death", 0);
        // Update score
        GameController.instance.countEnemy();
        // Start despawning co-routine
        StartCoroutine(Despawn());

    }
    // Destroy game object abter 10 seconds
    IEnumerator Despawn()
    {
        yield return new WaitForSeconds(10f);
        Destroy(gameObject);
    }
}

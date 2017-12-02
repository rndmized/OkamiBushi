using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : CharacterStats {

    public override void Die()
    {
        base.Die();
        //play death animation - destroy gameobject - drop booster
        //Destroy(gameObject);
        Animator anim = GetComponent<Animator>();
        anim.Play("Death", 0);
    }


}

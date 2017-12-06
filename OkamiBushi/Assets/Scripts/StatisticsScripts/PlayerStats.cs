using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerStats : CharacterStats {

    // Override die method
    public override void Die()
    {
        base.Die();
        Animator anim = GetComponent<Animator>();
        anim.Play("Death", 0);
    }


}

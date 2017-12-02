﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyStats : CharacterStats {

    public override void Die()
    {
        base.Die();
        Animator anim = GetComponent<Animator>();
        anim.Play("Death", 0);
    }
}

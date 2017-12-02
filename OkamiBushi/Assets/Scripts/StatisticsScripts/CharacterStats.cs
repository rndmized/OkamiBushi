using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CharacterStats : MonoBehaviour {

    public int maxHealth;
    public int currentHealth { get; private set; }

    public Stat damage;
    public Stat armor;

    void Awake()
    {
        currentHealth = maxHealth;
    }

    public void TakeDamage(int damage)
    {

        damage -= armor.getValue();
        damage = Mathf.Clamp(damage,0,maxHealth);
        currentHealth -= damage;

        if (currentHealth <= 0)
        {
            Die();
        }

    }

    public virtual void Die()
    {
        //Insert death method here
    }
}

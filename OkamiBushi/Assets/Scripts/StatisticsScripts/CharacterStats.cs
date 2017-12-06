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
    // Character takes an amount of damage
    public void TakeDamage(int damage)
    {
        //Apply modifiers if applicable.
        damage -= armor.getValue();
        // Limit to values in between 0 and max health.
        damage = Mathf.Clamp(damage,0,maxHealth);
        currentHealth -= damage;

        if (currentHealth <= 0)
        {
            Die();
        }

    }
    
    // Will be overriden
    public virtual void Die()
    {
        //Insert death method here
    }
}

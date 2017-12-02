using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalController : MonoBehaviour
{

    CrystalStats stats;

    // Use this for initialization
    void Start()
    {

        stats = GetComponent<CrystalStats>();

    }

    private void OnTriggerEnter(Collider other)
    {
        Debug.Log("Colliding with: " + other.gameObject.name);
        if (other.gameObject.name == "EnemySword")
        {
            stats.TakeDamage(15);
            //Debug.Log("Current Health: " + stats.currentHealth);
        }

    }

    public CrystalStats GetStats()
    {
        return stats;
    }
}


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
        /* Detect if the crystal is being hit by an enemy sword. */
        if (other.gameObject.name == "EnemySword")
        {
            stats.TakeDamage(15);
        }

    }

    public CrystalStats GetStats()
    {
        return stats;
    }
}


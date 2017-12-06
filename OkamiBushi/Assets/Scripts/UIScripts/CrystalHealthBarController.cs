using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
/* Controls Crystal healt and displays it in the UI */
public class CrystalHealthBarController : MonoBehaviour {

    CrystalController crystal;
    public Image health;


    // Use this for initialization
    void Start()
    {
        crystal = CrystalManager.instance.crystal.GetComponent<CrystalController>();
        health.fillAmount = 1;

    }

    // Update is called once per frame
    void Update()
    {
        float currentHealth = crystal.GetStats().currentHealth;
        float hp = currentHealth * 100f / crystal.GetStats().maxHealth;
        hp /= 100f;
        health.fillAmount = hp;
    }
}

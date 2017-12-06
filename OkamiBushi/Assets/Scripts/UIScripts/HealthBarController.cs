using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* Display player health on UI */
public class HealthBarController : MonoBehaviour {

    PlayerController player;
    public Image health;


	// Use this for initialization
	void Start () {
        player = PlayerManager.instance.player.GetComponent<PlayerController>();
        health.fillAmount = 1;
	}
	
	// Update is called once per frame
	void Update () {

        float currentHealth = player.GetStats().currentHealth;
        float hp = currentHealth * 100f / player.GetStats().maxHealth;
        hp /= 100f;
        health.fillAmount = hp;
    }
}

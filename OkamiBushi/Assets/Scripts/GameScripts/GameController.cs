using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameController : MonoBehaviour {

    public static GameController instance;

    public int enemyCount;

    void Awake()
    {
        instance = this;
    }

    void Start()
    {
        enemyCount = 0;
    }


    public void countEnemy()
    {
        enemyCount++;
    }

    public int getEnemyKillCount()
    {
        return enemyCount*175;
    }

 
	
	// Update is called once per frame
	void Update () {

		if ((PlayerManager.instance.player.GetComponent<PlayerController>().GetStats().currentHealth <= 0) || CrystalManager.instance.crystal.GetComponent<CrystalController>().GetStats().currentHealth <= 0)
        {

        }
	}
}

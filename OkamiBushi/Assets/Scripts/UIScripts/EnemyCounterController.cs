using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class EnemyCounterController : MonoBehaviour {

    public Text enemyCounter;
   
	
	// Update is called once per frame
	void Update () {

        enemyCounter.text = GameController.instance.getEnemyKillCount().ToString();
		
	}
}

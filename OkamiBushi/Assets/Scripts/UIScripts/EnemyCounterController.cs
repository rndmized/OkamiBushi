using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

/* Displays score on the UI */
public class EnemyCounterController : MonoBehaviour {

    public Text enemyCounter;
   
	// Update is called once per frame
	void Update () {
        enemyCounter.text = ScoreController.score.ToString();
	}
}

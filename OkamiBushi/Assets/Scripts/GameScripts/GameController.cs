using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameController : MonoBehaviour {

    public static GameController instance;
    public GameObject gameOver;

    public int enemyCount;

    void Awake()
    {
        instance = this;
    }

    // Initialise values
    void Start()
    {
        Time.timeScale = 1;
        enemyCount = 0;
        gameOver = GameObject.FindGameObjectWithTag("GameOver");
        gameOver.SetActive(false);

    }

    // Increments enemy count.
    public void countEnemy()
    {
        enemyCount++;
    }

    // return score value of enemy count.
    public int getEnemyKillCount()
    {
        return enemyCount*175;
    }

 
	
	// Update is called once per frame
	void Update () {
        // Udate score controller
        ScoreController.score = getEnemyKillCount();
        // Detect if defeat conditions are met to finish the game
		if ((PlayerManager.instance.player.GetComponent<PlayerController>().GetStats().currentHealth <= 0) || CrystalManager.instance.crystal.GetComponent<CrystalController>().GetStats().currentHealth <= 0)
        {
            gameOver.SetActive(true);
            StartCoroutine(GameOver());
            Time.timeScale = 0.2f;
        }
	}

    // Display Game Over Overlay, wait for 1 in-game second (5 seconds in real-time) and navigate to Score scene.
    IEnumerator GameOver()
    {
        yield return new WaitForSeconds(1);
        SceneManager.LoadScene("ScoreScene");
    }
}

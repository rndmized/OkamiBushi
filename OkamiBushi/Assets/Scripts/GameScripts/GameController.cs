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

    void Start()
    {
        Time.timeScale = 1;
        enemyCount = 0;
        gameOver = GameObject.FindGameObjectWithTag("GameOver");
        gameOver.SetActive(false);

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

        ScoreController.score = getEnemyKillCount();

		if ((PlayerManager.instance.player.GetComponent<PlayerController>().GetStats().currentHealth <= 0) || CrystalManager.instance.crystal.GetComponent<CrystalController>().GetStats().currentHealth <= 0)
        {
            gameOver.SetActive(true);
            StartCoroutine(GameOver());
            Time.timeScale = 0.2f;
        }
	}


    IEnumerator GameOver()
    {
        yield return new WaitForSeconds(1);
        SceneManager.LoadScene("ScoreScene");
    }
}

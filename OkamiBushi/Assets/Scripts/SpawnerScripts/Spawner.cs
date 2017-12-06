using System.Collections;
using System.Collections.Generic;
using UnityEngine;
/* Intantiate GameObjects of a given tipe for a definite amount of time */
public class Spawner : MonoBehaviour {

    // Game object to spawn reference
    public GameObject enemy;
    // Spawning variables
    public Vector3 spawnPoint;
    public float spawnTimes;
    public int startTimer;
    // Loop controller
    public bool stop;

    // Initialise values 
    private void Start()
    {
        stop = false;
        StartCoroutine(Spawn());
        
    }

    private void Update()
    {   
        /* Testing spawning */
        /*if (Input.GetKeyDown(KeyCode.T))
        {
            stop = false;
            StartCoroutine(Spawn());
        }*/
    }
    // Co - routine once started will keep spawning game objects referenced.
    IEnumerator Spawn()
    {
        yield return new WaitForSeconds(startTimer);
        while (!stop)
        {
            Instantiate(enemy,transform.TransformPoint(0,0,0), gameObject.transform.rotation);
            yield return new WaitForSeconds(spawnTimes);
        }
    }


}

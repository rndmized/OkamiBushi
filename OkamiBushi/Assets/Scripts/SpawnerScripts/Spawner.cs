using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Spawner : MonoBehaviour {

    public GameObject enemy;
    public Vector3 spawnPoint;
    public float spawnTimes;
    public int startTimer;

    public bool stop;

    private void Start()
    {
        stop = false;
        StartCoroutine(Spawn());
        
    }

    private void Update()
    {

        if (Input.GetKeyDown(KeyCode.T))
        {
            stop = false;
            StartCoroutine(Spawn());
        }
    }

    IEnumerator Spawn()
    {

        yield return new WaitForSeconds(startTimer);
        while (!stop)
        {
            Instantiate(enemy,transform.TransformPoint(0,0,0), gameObject.transform.rotation);
            yield return new WaitForSeconds(spawnTimes);
            //stop = true;
        }
    }


}

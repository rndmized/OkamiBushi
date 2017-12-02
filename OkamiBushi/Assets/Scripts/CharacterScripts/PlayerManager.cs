using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class PlayerManager : MonoBehaviour {


    public static PlayerManager instance;

    void Awake()
    {
        instance = this;
    }

    public GameObject player;

}

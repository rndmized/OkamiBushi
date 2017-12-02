using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrystalManager : MonoBehaviour {

    public static CrystalManager instance;

    void Awake()
    {
        instance = this;
    }

    public GameObject crystal;
}

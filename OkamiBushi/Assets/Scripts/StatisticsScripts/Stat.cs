using System.Collections;
using System.Collections.Generic;
using UnityEngine;

/* Base Stats class for damage and armor. It is designed to hold modifiers however it is not really used as such yet. */
[System.Serializable]
public class Stat {

    [SerializeField]
    private int baseValue;


    private List<int> modifiers = new List<int>();


    public int getValue()
    {
        int finalValue = baseValue;
        modifiers.ForEach(x => finalValue += x);
        return finalValue;
    }

    public void AddModifier(int modifier)
    {
        if (modifier != 0)
        {
            modifiers.Add(modifier);
        }

    }

    public void RemoveModifier(int modifier)
    {
        if (modifier != 0)
        {
            modifiers.Remove(modifier);
        }

    }


}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System;

public class APIScoreUploader : MonoBehaviour
{
    string username;
    Score score;

    private void Start()
    {
        score = new Score();
    }
    

    public void UploadScore()
    {
        score.playerName = GameObject.FindGameObjectWithTag("DefaultButton").GetComponentInChildren<Text>().text;
        score.score = ScoreController.score;
        // Adding a layer of validation
        if (GameObject.FindGameObjectWithTag("DefaultButton").GetComponentInChildren<Text>().text.Length <= 2 || GameObject.FindGameObjectWithTag("DefaultButton").GetComponentInChildren<Text>().text.Length > 15 )
        {
            GameObject.FindGameObjectWithTag("DefaultButton").GetComponentInChildren<Text>().text = "";
        }
        else
        {
            if(ScoreController.score != 0)
            {
                StartCoroutine(Upload());
            }
             
        }
        
        
    }

    IEnumerator Upload()
    {
        // Create appropriate structure to send scores over the network
        Dictionary<string, string> formFields = new Dictionary<string, string>();
        formFields.Add("playerName", score.playerName);
        formFields.Add("score", score.score.ToString());
        // Create http post request
        UnityWebRequest www = UnityWebRequest.Post("http://rndmized.pythonanywhere.com/score", formFields);

        // Await for response
        yield return www.SendWebRequest();
        // Log error, if no error return to main menu.
        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
            Debug.Log("Form upload complete!");
            SceneManager.LoadScene("TitleScreenScene");
        }
    }

}

// Inner class to send over the networ with score values.
[Serializable]
public class Score
{
    public int score;
    public string playerName;
}

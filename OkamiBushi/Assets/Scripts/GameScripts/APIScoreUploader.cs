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
        StartCoroutine(Upload());
        
    }

    IEnumerator Upload()
    {
        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("score=" + ScoreController.score));
        formData.Add(new MultipartFormDataSection("name=" + username));

        //UnityWebRequest www = UnityWebRequest.Post("http://rndmized.pythonanywhere.com/score", "string");

        var json = JsonUtility.ToJson(score);
        Debug.Log(json);

        Dictionary<string, string> formFields = new Dictionary<string, string>();
        formFields.Add("playerName", score.playerName);
        formFields.Add("score", score.score.ToString());

        UnityWebRequest www = UnityWebRequest.Post("http://rndmized.pythonanywhere.com/score", formFields);

        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log(www.downloadHandler.text);
            Debug.Log("Form upload complete!");
            //SceneManager.LoadScene("TitleScreenScene");
        }
    }

}

[Serializable]
public class Score
{
    public int score;
    public string playerName;
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Networking;

public class APIScoreUploader : MonoBehaviour
{


    public void UploadScore()
    {
        StartCoroutine(Upload());
    }

    IEnumerator Upload()
    {
        List<IMultipartFormSection> formData = new List<IMultipartFormSection>();
        formData.Add(new MultipartFormDataSection("score="+ ScoreController.score));
        formData.Add(new MultipartFormDataSection("name=" + ScoreController.score));

        UnityWebRequest www = UnityWebRequest.Post("http://rndmized.pythonanywhere.com/score", "string");
        yield return www.SendWebRequest();

        if (www.isNetworkError || www.isHttpError)
        {
            Debug.Log(www.error);
        }
        else
        {
            Debug.Log("Form upload complete!");
            Debug.Log(www.responseCode);
        }
    }

}

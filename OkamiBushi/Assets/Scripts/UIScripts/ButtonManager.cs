using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ButtonManager : MonoBehaviour {

    private void Start()
    {
        GameObject myEventSystem = GameObject.Find("EventSystem");
        myEventSystem.GetComponent<UnityEngine.EventSystems.EventSystem>().SetSelectedGameObject(GameObject.FindGameObjectWithTag("DefaultButton"));
    }

    public void NewGameButton(string newGameLevel)
    {
        SceneManager.LoadScene(newGameLevel);
    }

    public void ExitButton()
    {
        Application.Quit();
    }

    public void Continue()
    {
        Time.timeScale = 1;
        GameObject.Find("PauseMenu").SetActive(false);

    }

    public void ReturnToMenu(string currentScene)
    {
        SceneManager.UnloadSceneAsync(currentScene);
        SceneManager.LoadScene("TitleScreenScene");
    }


}

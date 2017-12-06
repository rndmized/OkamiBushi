using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

// Contains a collection of functions for button actions
public class ButtonManager : MonoBehaviour {

    // Select default focus
    private void Start()
    {
        GameObject myEventSystem = GameObject.Find("EventSystem");
        myEventSystem.GetComponent<UnityEngine.EventSystems.EventSystem>().SetSelectedGameObject(GameObject.FindGameObjectWithTag("DefaultButton"));
    }

    // Navigate to new scene
    public void NewGameButton(string newGameLevel)
    {
        SceneManager.LoadScene(newGameLevel);
    }

    // Exit Application
    public void ExitButton()
    {
        Application.Quit();
    }

    // resume normal time, hide Pause Menu
    public void Continue()
    {
        Time.timeScale = 1;
        GameObject.Find("PauseMenu").SetActive(false);

    }

    // returns to main menu unloading currentScene
    public void ReturnToMenu(string currentScene)
    {
        SceneManager.UnloadSceneAsync(currentScene);
        SceneManager.LoadScene("TitleScreenScene");
    }


}

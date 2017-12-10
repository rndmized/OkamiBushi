# Okami Bushi
<p align="center">
<img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/dullahan_logo.png" width="350">
</p>
Unity Project (UWP) for Mobile Application Development III Module (4th Year, Bsc (Hons) in Software Development) 

## Download It Here!

* **Latest Build**: [Alpha-1.0](https://tinyurl.com/yaeh24yn)

Previous builds (Development tests):

* [Pre-Alpha-0.1](https://tinyurl.com/y8xgjwbh) 
* [Pre-Alpha-0.2](https://tinyurl.com/ydgbslc2)
* [Pre-Alpha-0.3](https://tinyurl.com/y7rls4zu)
* [Pre-Alpha-0.4](https://tinyurl.com/y7sdk46p)
* [Pre-Alpha-0.5](https://tinyurl.com/yauc7fuv)

## Intorduction

**Okami Bushi** is a 3D Action game in 3rd person isometric view. The player has to defend the crystal against a
horde of monsters that want to destroy it by killing them before they break it. The enemies will have the
crystal as primary target but will be attracted by the player if he is in range. Every enemy killed will add to the score. If the crystal is destroyed or the player dies the game will be over and th player will have the chance to upload his score along with his nickname to the leaderboard!

<p align="center">
<img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/CaptureMain.PNG" width="300"><img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/Capture.PNG" width="300"><img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/CaptureScore.PNG" width="300">
</p>

The leaderboard can be accessed [here](http://rndmized.pythonanywhere.com/)

## How to play

Even though the game is designed to be played with a controller (xbox360), keyboard and mouse can be used too. The following are the mappings for both keyboard/mouse and controller:

<p align="center">
<img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/OkamiBushiControllerMap.png" width="500">
</p>

| Key      |  Action |
| ---      | ---       |
| WASD         |  Movement  |
| Space         |  Jump  |
| RMB  |  Attack  |
| E         |  Dash **(Disabled)** | 
| Esc       |  Pause Menu |
| Shift-Q   |  Attack 2  |
| Shift-E   |  Self-Heal  |
| Shift-RMB         |  Jump Attack  |

* **RMB** stands for Right-Mouse Button

## Architecture

The client is built using the Unity Engine, using C# as language, in the UWP framework.

The server is a flask API where the score can be uploaded. It also can be queried to obtain the top 100 scores. Scores will be available at the Okami Bushi's website (Served by flask itself).
Scores and users are stored in a simple SQL database through the server.

## Repo Structure

The following is how this repository is structured:

* **OkamiBushi**: Contains the Unity Project.
    * **Assets**: Contains scripts, Animation controllers, game sceenes and Graphics and models.
* **UWP**:  Contains the UWP project compiled by Unity.


## Tools

* [Unity](https://unity3d.com/) 2017.3.0f1 (64-bit)
* Visual Studio 2017 [Community Edition](https://www.visualstudio.com/downloads/)
* Animations: Adobe's [Mixamo](https://www.mixamo.com/).
* [Blender](https://www.blender.org/) for 3D modeling.
* [Photoshop](http://www.adobe.com/ie/products/photoshop.html) for 2D textures and images.

## Deployment

The server is currently deployed in the cloud using [PythonAnywhere](https://www.pythonanywhere.com). The client side is compiled and ready to install in the appropiate link above. The database is deployed in [PythonAnywhere](https://www.pythonanywhere.com) too.

Due to the size of the models and animations, graphic assets are not present in this repository. They can be found [here](https://tinyurl.com/y73rqogw). Make sure to copy them in the GFX folder in Assets to run / open the project in unity.


## Authors

* **Albert Rando** - *Design and Development* - [rndmized](https://github.com/rndmized)

## License

This project is licensed under the MIT License - see the [LICENSE.md](https://github.com/rndmized/BEM-App/blob/master/LICENSE) file for details

## Acknowledgments, References and Assets

* Mayan temple asset for scenario: http://devassets.com/assets/mayan-temple/
* Dokebimusa for player model: https://www.assetstore.unity3d.com/en/#!/content/4921
* Dungeon Skeletons Demo for Enemies: https://www.assetstore.unity3d.com/en/#!/content/71087
* Medieval Town Exteriors for props: https://www.assetstore.unity3d.com/en/#!/content/27026
* Pro Builder Basic to build mesh-able structures: https://www.assetstore.unity3d.com/en/#!/content/11919
* Toon Fantasy Sword for player's sword: https://www.assetstore.unity3d.com/en/#!/content/65573
* Score Screen Frame: https://scottpurdy.deviantart.com/art/Border-Art-02-338569070
* Background image: https://opengameart.org/content/environment


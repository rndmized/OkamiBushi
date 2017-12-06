# Okami Bushi
<p align="center">
<img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/dullahan_logo.png" width="350">
</p>
Unity Project (UWP) for Mobile Application Development III Module (4th Year, Bsc (Hons) in Software Development) 

## Download It Here!

* **Latest Build**: [Alpha-1.0]()

Previous builds (Development tests):

* [Pre-Alpha-0.1]() 
* [Pre-Alpha-0.2]()
* [Pre-Alpha-0.3]()
* [Pre-Alpha-0.4]()
* [Pre-Alpha-0.5]()

## Intorduction

**Okami Bushi** is a 3D Action game in 3rd person isometric view. The player has to defend the crystal against a
horde of monsters that want to destroy it by killing them before they break it. The enemies will have the
crystal as primary target but will be attracted by the player if he is in range. Every enemy killed will add to the score. If the crystal is destroyed or the player dies the game will be over and th player will have the chance to upload his score along with his nickname to the leaderboard!

<img src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/CaptureMain.PNG" width="350">
<src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/Capture.PNG" width="350">
<src="https://github.com/rndmized/OkamiBushi/blob/master/docs/Assets/CaptureScore.PNG" width="350">
</p>

The leaderboard can be accessed [here](http://rndmized.pythonanywhere.com/)

## How to play

Even though the game is designed to be played with a controller (xbox360), keyboard and mouse can be used too. The following are the mappings for both keyboard/mouse and controller:


## Architecture

The client is built using the Unity Engine, using C# as language, in the UWP framework.

The server is a flask API where the score can be uploaded. It also can be queried to obtain the top 100 scores. Scores will be available at the Okami Bushi's website (Served by flask itself).
Scores and users are stored in a simple SQL database through the server.

## Deployment

The server is currently deployed in the cloud using [PythonAnywhere](https://www.pythonanywhere.com). The client side is compiled and ready to install in the appropiate link above. The database is deployed in [PythonAnywhere](https://www.pythonanywhere.com) too.

Due to the size of the models and animations, graphic assets are not present in this repository. They can be found [SoonTM](). Make sure to copy them in the GFX folder in Assets to run / open the project in unity.


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

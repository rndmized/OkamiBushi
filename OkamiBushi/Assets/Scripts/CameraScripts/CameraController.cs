using UnityEngine;


/* Simple script to handle camera behaviour */
public class CameraController : MonoBehaviour
{

    /* Get references for player, camera and center point from Unity editor */
    public Transform playerCam, character, centerPoint;

    /* Determine camera position */
    public float posX, posY;
    public float posYPosition = 1f;

    void Update()
    {

        //Limit and set camera rotation based on center point.
        posY = Mathf.Clamp(posY, 1f, 60f);
        playerCam.LookAt(centerPoint);

        /* Calculate local rotation for the center point */
        centerPoint.localRotation = Quaternion.Euler(posY, poX, 0);
        /* Move the center point along with the player */
        centerPoint.position = new Vector3(character.position.x, character.position.y + posYPosition, character.position.z);

    }
}

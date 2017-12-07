using UnityEngine;


/* Simple script to handle camera behaviour */
public class CameraController : MonoBehaviour
{


    /* Get references for player, camera and center point from Unity editor */
    public Transform playerCam, character, centerPoint;

    public float zoom;
    public float zoomSpeed = 2;

    public float zoomMin = -2f;
    public float zoomMax = -10f;

    public float rotationSpeed = 5f;


    void Start()
    {

    }

    /* Determine camera position */
    public float posX, posY;
    public float posYPosition = 1f;

    void Update()
    {

        //Getting Zoom Variation from Input 
        zoom += Input.GetAxis("Mouse ScrollWheel") * zoomSpeed;

        //Limit Zoom Scope 
        if (zoom > zoomMin)
            zoom = zoomMin;

        if (zoom < zoomMax)
            zoom = zoomMax;

        //Set Camera distance on z axis to new zoom. (closer to the payer) 
        playerCam.transform.localPosition = new Vector3(0, 0, zoom);


        //Limit and set camera rotation based on center point. 

        posY = Mathf.Clamp(posY, 1f, 60f);
        playerCam.LookAt(centerPoint);


        /* Calculate local rotation for the center point */
        centerPoint.localRotation = Quaternion.Euler(posY, posX, 0);
        /* Move the center point along with the player */
        centerPoint.position = new Vector3(character.position.x, character.position.y + posYPosition, character.position.z);

    }
}

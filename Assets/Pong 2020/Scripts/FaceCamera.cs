/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

FaceCamera.cs faces direction of Main Camera.

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class FaceCamera : MonoBehaviour {
  
    void Update(){
		//face the direction of the main camera
        transform.LookAt(2 * Camera.main.transform.position - transform.position);
    }
}

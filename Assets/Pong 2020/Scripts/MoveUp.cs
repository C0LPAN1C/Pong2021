/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

MoveUp.cs moves gameObject up @ speed

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveUp : MonoBehaviour {
    
	//move up using this speed
	public float speed;
	
	void Update(){
		transform.Translate(Vector3.up * Time.deltaTime * speed);
	}
}

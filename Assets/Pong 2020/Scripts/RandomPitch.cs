/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

RandomPitch.cs plays audio as pitch based on a range

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

//makes sounds more interesting by changing the pitch a bit every time
public class RandomPitch : MonoBehaviour {
	
    public float min;
	public float max;
	
	AudioSource source;
	
	void Start(){
		//get audio source
		source = GetComponent<AudioSource>();
	}
	
	public void Set(){
		//set random pitch
		source.pitch = Random.Range(min, max);
	}
}

/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

Lifetime.cs destroys Object once time elapsed (float)

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Lifetime : MonoBehaviour {
	
	public float lifetime;
    void Update()
    {
        
    }
    void Start(){
		//destroy object after the lifetime length (in seconds)
        Destroy(gameObject, lifetime);
    }
}

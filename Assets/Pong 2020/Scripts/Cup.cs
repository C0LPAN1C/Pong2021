/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

Cup.cs is for the Tournament Cup

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Cup : MonoBehaviour {
	
	//cup objects
	public GameObject[] cups;
    
    void Awake(){
		//disable all cups and activate the one that belongs to this tournament
        foreach(GameObject cup in cups){
			cup.SetActive(false);
		}
		
		int cupIndex = PlayerPrefs.GetInt("Tournament") % cups.Length;
		
		cups[cupIndex].SetActive(true);
    }
}

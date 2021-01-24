/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

MatchInfo.cs contains various Match Information in Class

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MatchInfo : MonoBehaviour {
	
	//simple info about the last match
	//info is sent from the game scene to the dance scene
    public bool won;
	public string scoreText;
	public float opponentSkill;
}

/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

RotateReferee.cs makes spectators look at Ball

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class RotateReferee : MonoBehaviour {
    private void Start()
    {
		LookAtPlayer();
    }

    void Update(){
		//keep looking at the ball the whole time
		LookAtBall();
	}

	void LookAtPlayer()
	{
		//get the active ball
		Player[] balls = GameObject.FindObjectsOfType<Player>();
		Transform ball = null;

		for (int i = 0; i < balls.Length; i++)
		{
			ball = balls[i].transform;
		}

		if (ball == null)
			return;

		//only use x and z position and rotate towards the ball position
		Vector3 ballPos = ball.position;
		ballPos.y = transform.position.y;

		transform.LookAt(ballPos);
	}

	void LookAtBall(){
		//get the active ball
		Ball[] balls = GameObject.FindObjectsOfType<Ball>();
        if (balls.Length < 1)
        {
			Vector3 triggerPos = GameObject.Find("Court triggers").transform.position;
			triggerPos.y = transform.position.y;
			transform.LookAt(triggerPos);
		}
		Transform ball = null;
		
		for(int i = 0; i < balls.Length; i++){
			if(!balls[i].inactive)
				ball = balls[i].transform;
		}
		
		if(ball == null)
			return;
		
		//only use x and z position and rotate towards the ball position
		Vector3 ballPos = ball.position;
		ballPos.y = transform.position.y;
		
		transform.LookAt(ballPos);
	}
}

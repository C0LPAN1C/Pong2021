/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

NPCAnimator.cs animates the NPCs depending on loyalty

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class NPCAnimator : MonoBehaviour
{
    float repeatTimeSeconds = 1f;
    public bool homeTeam = false;
    public float howOftenSeconds = 20f; 
    public AnimationClip[] CheerAnimations;
    public AnimationClip[] BooAnimations;
    public AnimationClip[] VictoryAnimations;
    public AnimationClip[] LossAnimations;

    // Play Animation
    public void PlayAnimation(string animation)
    {
        GetComponent<Animation>().CrossFade(animation);
    }

    // Start is called before the first frame update
    public void Cheer()
    {
        GetComponent<Animation>().clip = (CheerAnimations[Random.Range(0, CheerAnimations.Length)]);
        GetComponent<Animation>().CrossFade(GetComponent<Animation>().clip.name);
    }

    // Start is called before the first frame update
    public void Boo()
    {
        GetComponent<Animation>().clip = (CheerAnimations[Random.Range(0, BooAnimations.Length)]);
        GetComponent<Animation>().CrossFade(GetComponent<Animation>().clip.name);
    }

    // Start is called before the first frame update
    public void Victory()
    {
        GetComponent<Animation>().clip = (CheerAnimations[Random.Range(0, VictoryAnimations.Length)]);
        GetComponent<Animation>().CrossFade(GetComponent<Animation>().clip.name);
    }

    // Start is called before the first frame update
    public void Loss()
    {
        GetComponent<Animation>().clip = (CheerAnimations[Random.Range(0, LossAnimations.Length)]);
        GetComponent<Animation>().CrossFade(GetComponent<Animation>().clip.name);
    }

    private void Awake()
    {
        howOftenSeconds = Random.Range(howOftenSeconds / 2, howOftenSeconds * 2);
    }

    // Start is called before the first frame update
    void Start()
    {
        if (homeTeam)
            Cheer();
        else
            Boo();
    }

    // Update is called once per frame
    void Update()
    {
        //print(repeatTimeSeconds +  " v " + Time.time);
        if (!GetComponent<Animation>().isPlaying && (repeatTimeSeconds <= Time.time))
        {
            repeatTimeSeconds = Time.time + howOftenSeconds;
            Cheer();
        }
    }
}

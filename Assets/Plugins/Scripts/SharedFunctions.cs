/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

SharedFunctions.cs Are various Shared Functions 
in C#.

*/

using UnityEngine;
using UnityEngine.UI;
using System;
using System.Net;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SceneManagement;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;
using System.Threading;
using System.Xml;
using Prime31;


public class SharedFunctions
{
	public float _time;
	public Text TimeText;
	public Text LevelText;
	public Text ScoreText;
    public Text KillText;
    public static byte[] persistentData;
#if UNITY_STANDALONE_OSX
//        public OSXDialogResult result;
#endif
#if UNITY_ || UNITY_STANDALONE_OSX
    //public static GKTurnBasedMatch match;
    //public static List<GKTurnBasedMatch> list;
    public string multipeerId;
    public string otherpeerId;
    public string otherpeername;
    public byte[] multipeerdata;
#endif
    public int timerMode = 0;
    public bool runAdvertiser = false;
    public bool quickmatchblocker = false;
    public bool shouldMove = true;
    public string buttonResult;
    public string googleUsername;
    public string appleUsername;
    public static byte[] gmatchData;
    public static string error;
    public static string testValue = "amit";
    public static Texture2D GKProfilePicture;
    public static Texture2D GPProfilePicture;
    public static List<object> players;
    public bool playMusic = true;
    public string[] urls;
    public string[] names;
    public string refreshMessage = "Couldn't refresh match at this time. Retrying momentarily.";
    public string loginFailedMessage = "Couldn't sign in. Will retry again momentarily.";
    public string loginSucceededMessage = "Silently signed in. Welcome";
    public string sendingDataMessage = "You sucessfully submiited a move.";
    public string newGameMessage = "You have successfully started a new game.";
    public string inviteMessage = "You have recieved an invitation from a player. Do you want to accept?";
    public string altGameMessage = "You have receieved a move from a different game! Change Game?";
    public string restartGameMessage = "Are you sure you want to restart this game? You will switch colors!";
    public string restartSimulationMessage = "Do you wish to restart Simulation?";
    public string quitGameMessage = "Are you sure you want to quit and return to the main menu?";
    public string matchCompleteMessage = "Game complete. Please return to main menu.";
    public string moveNotSentMessage = "Move couldn’t be sent at this time. Please check network connectivity.";
    public string gameNotCreatedMessage = "Error creating new game. Please check network connectivity.";
    public string receivedMoveMessage = "Received a new move from opponent.";
    public string switchingMessage = "Switching game to a different one in progress. Current progress wil be saved.";
    public string matchNullMessage = "Current match is not loaded properly, network connectivity may be the root cause. Please return to the main menu and try again.";
    public string gameEndedMessage = "Game has ended.";
    public string resultsNotRecordedMessage = "Game can't be recorded at this time.";
    public string cancelGameSuccessMessage = "Your game is cancelled. Please return to the main menu.";
    public string cancelGameFailedMessage = "Can’t cancel game at this time. Please try again later.";
    public string moveNotReceived = "Move can’t be received this time. Please check network connectivity.";
    /* Leaderboard and Achievement messages */
    public string checkmateMessage = "Congratulations! You have your first checkmate.";
    public string promoMessage = "Congratulations! You’ve gotten your first promotion.";
    public string castleMessage = "Congratulations! You’ve castled for the first time.";
    public string foolsmateMessage = "Congratulations! You’ve gotten your first Fool's mate.";
    public string scholarsmateMessage = "Congratulations! You’ve gotten your first Scholar's mate.";
    public string stalemateMessage = "Congratulations! You’ve gotten your first stalemate.";
    public string tenCheckmatesMessage = "Congratulations! You’ve gotten 10 checkmates.";
    public string hundredCheckmatesMessage = "Congratulations! You’ve gotten 100 checkmates.";
    public string thousandCheckmatesMessage = "Congratulations! You’ve gotten 1000 checkmates.";
    public string checkMessage = "Congratulations! You’ve gotten first check.";
    public string enpassantMessage = "Congratulations! You’ve gotten first pawn enpassant.";
    public string leaderboardWins = "Congratulations! You've won.";
    public string rematchGameMessage = "Do you wish to rematch your opponent?";
	public string gameTitle = "Shadow Boxer";
	public string gameSubTitle = "The Ultimate Street Fighting Game where the action never ends.";
	public string ToastHighScore = "You have gotten a high score, ";
	public string ToastBeatLevel = "You have beaten, ";
	public string ToastBeatGame = "You have beaten all levels in Shadow Boxer.";
	public bool dbm = false;
	public int _kills = 0;
	public int _score = 0;
	public int _points = 0;
	public bool _shouldIncrement = false;
	public float _fscore = 0.0f;
    // Singleton Lazy initialize ->
	private static SharedFunctions _instance = null;
	public static SharedFunctions GetInstance
    {
        get
        {
            if (_instance == null)
            {
				_instance = new SharedFunctions();
            }
            return _instance;
        }
    }
#if UNITY_ || UNITY_STANDALONE_OSX
    /*public GKTurnBasedMatch getMatch()
    {
        return match;
    }*/
    public static string getPlayerId()
    {
#if UNITY_IOS
		// if (match != null)
		//     return match.currentParticipant.player.playerId;
		// else
		//     return null;
#endif
#if UNITY_STANDALONE_OSX
		/*
            if (match!=null) 
                return match.currentParticipant.playerId;
            else*/
                return null;
#endif
		return null;
    }
#if UNITY_IOS
    public static string getPlayersName()
    {
		//if (match == null)
		//    return "unknown";
		//else if (match.currentParticipant.player.displayName != null)
		//    return match.currentParticipant.player.displayName;
		//else
		//return "Unknown";
		return "Unknown";
    }
#endif
    public static string getMatchId()
    {
		//if (match != null)
		//    return match.matchId;
		//else
		//return null;
		return null;
    }
#endif

    public void sendAlert(string message, string posButton, string negButton)
    {
#if UNITY_IOS
        var buttons = new string[] { posButton, negButton };
	    EtceteraBinding.showAlertWithTitleMessageAndButtons(gameTitle, message, buttons);
#elif UNITY_ANDROID
	EtceteraAndroid.showAlert( gameTitle, message, posButton, negButton );
#elif UNITY_STANDALONE_OSX
        /*
	OSXDialogResult result = OSXDialog.Create(gameTitle, message);
                    switch(result)
                    {
                    case OSXDialogResult.YES:
                        buttonResult = "yes";
                        Debug.Log ("Yes button pressed");
                        break;
                    case OSXDialogResult.NO:
                        buttonResult = "no";
                        Debug.Log ("No button pressed");
                        break;
                    }*/
#endif

    }

    public void sendAlert(string message, string posButton)
    {
#if UNITY_IOS
        var buttons = new string[] { posButton };
	EtceteraBinding.showAlertWithTitleMessageAndButtons(gameTitle, message, buttons);
#elif UNITY_ANDROID
	EtceteraAndroid.showAlert( gameTitle, message, posButton );
#elif UNITY_STANDALONE_OSX
	//OSXMessage.Create (gameTitle, message);
#endif
    }

    public void setTestValue(string thisVal)
    {
        testValue = thisVal;
    }

    public static void setAppleProfilePic(Texture2D pic)
    {
        GKProfilePicture = pic;
    }

    public static void setGoogleProfilePic(Texture2D pic)
    {
        GPProfilePicture = pic;
    }

    public Texture2D getGKProfilePicture()
    {
        return GKProfilePicture;
    }

    public Texture2D getGPProfilePicture()
    {
        return GPProfilePicture;
    }

    public string getTestValue()
    {
        return testValue;
    }
    public byte[] getData()
    {
        return persistentData;
    }

    public void setData(byte[] thisVal)
    {
        persistentData = thisVal;
    }
  
	public void InitText( Text TimeText_, Text LevelText_, Text ScoreText_, Text KillText_)
    {
        TimeText = TimeText_;
		LevelText = LevelText_;
		ScoreText = ScoreText_;
        KillText = KillText_;
    }

	public string getLevel()
	{
		return SceneManager.GetActiveScene().name;
	}

    public int getScore()
    {
        return _score;
	}

    public int getPoints()
    {
        return _points;
	}

    public int getKills()
    {
        return _kills;
    }


    public void saveKills()
    {
        PlayerPrefs.SetInt("total_kills", _kills);
    }

    public void setScore(int sc)
    {
		_score = sc;
    }

    public float getTime()
    {
		return _time;
    }
   
    public void setTime(float t)
    {
		_time = t;
    }
    
    public void addScore(int points)
    {
		if (points > 0)
	        _points += points;
		_shouldIncrement = true;
	}   

    public void incrementKills()
    {
        _kills++;
	}   

    public void incrementScore()
    {
        _score++;
        if (_points > 0)
            _points--;
        if (_points <= 0)
            _shouldIncrement = false;
    }   
    
	public void incrementScore(int i)
    {
        _score += i;
        if (_points - i > 0)
            _points-= i;
        if (_points - i <= 0)
            _shouldIncrement = false;
    } 
}
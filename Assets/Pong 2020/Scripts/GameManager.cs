/*
*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************

GameManager.cs is the managing Component of Game

*/

using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using UnityEngine;

//color scheme consisting of a floor, background and court color
[System.Serializable]



public class ColorScheme
{
	public Color floor;
	public Color background;
	public Color court;
}

public class GameManager : MonoBehaviour {
	public enum GameType
	{
		MAX_POINTS_DEBUG = 0,
		MAX_POINTS_SHORT = 1,
		MAX_POINTS_NORMAL = 2,
		MAX_POINTS_LONG = 3
	}

	public enum GameDifficulty
	{
		NEWBIE = 0,
		EASY = 1,
		NORMAL = 2,
		HARD = 3,
		INSANE = 4,
	}

	public static class GameDifficultyMultpx
	{
		public const float Newbie = 0.875f;
		public const float Easy = 1.000f;
		public const float Normal = 1.125f;
		public const float Hard = 1.25f;
		public const float Insane = 1.375f;
	}

	int MAX_SERVE_POINTS = 2;
	const int FRAME_RATE = 60;
    const int WIN_BY = 2;
	const string GAME_OVR_SCENE = "Dance scene";
	const string MAIN_MENU_SCENE = "Game scene";
	const string LEADERBOARD_SCENE = "Leaderboard";

	[Header("Game Info")]
	public int level = 1;
	public AudioSource levelMusic;
	public GameType gameType = GameType.MAX_POINTS_NORMAL;
	public GameDifficulty gameDifficulty = GameDifficulty.EASY;
	public bool playerServeOnly;

	[Header("Game Objects")]
	public Animator transition;
	public Animator cameraZoom;
	public GameObject canvas;
	public VisitorSpawner visitors;
	public CameraMovement cameraMovement;
	
	public GameObject ball;
	public Player player;
	public Opponent opponent;
	public Transform spawnPos;
	public Transform opponentSpawnPos;
	public Animator countDown;
	public Transform scoreCamTarget;
	public GameObject[] confetti;
	public GameObject[] tables;

	[Header("Text Labels")]
	public Text playerPointsLabel;
	public Text opponentPointsLabel;
	public Text difficultLevelLabel;
	public Text difficultLevelButtonLabel;
	public Text gameTypeButtonLabel;
	public Text gameTypeLabel;

	[Header("Animators")]
	public Animator playerPointsAnim;
	public Animator opponentPointsAnim;
	public Animator matchPoint;
	
	public Color streakColor;
	public Color streakGoneColor;
	public ColorScheme[] colorSchemes;
	public Material floor;
	public Material stadium;
	public Material court;

	[Header("Game Audio Info")]
	public AudioSource scorePointAudio;
	public AudioSource losePointAudio;
	public AudioSource matchPointAudio;
	public AudioSource clickAudio;

	public GameObject audioLine;
	public GameObject vibrateLine;

	[Header("Various Panel Animators")]
	public Animator pausePanel;
	public Animator settingsPanel;
	public Animator graphicsPanel;
	public Animator audioPanel;
	public Animator charactersPanel;
	public Animator mainMenuPanel;

	public GameObject characterAvailableIcon;
	
	[Header("Bonus scene only")]
	public bool bonus;
	public Animator bonuspopup;
	public Text bonuspopupLabel;
	public Text diamondsLabel;
	public Animator diamondLabelAnim;
	public GameObject bar;
	public int maxBonusTargets;

	//haptic feedback setting can be found in the settings menu in game
	bool useHapticFeedback;

    [Header("Points")]
	public int servePoints = 0;
	int playerPoints;
	int opponentPoints;
	
	Ball ballScript;
	
	bool resetting;
	bool playerServe = true;
	
	[HideInInspector]
	public int bonusDiamonds;

    
	void Awake()
    {
		if (PlayerPrefs.GetString("new", "new") == "new")
		{
			MessagesText.ShowToast("Welcome to Pong 2020!");
		}
		RandomizeTable();
		canvas.SetActive(true);
		Application.targetFrameRate = 60;
	}

	public void RandomizeTable()
	{
		Destroy(GameObject.FindGameObjectWithTag(("Table")));
		Instantiate(tables[Random.Range(0, tables.Length)]);
		MessagesText.ShowToast("Randomizing Table...");
	}

	int GetTotalPoints(GameType type)
	{
        switch (type)
		{
			case GameType.MAX_POINTS_SHORT:
				return 5;
			case GameType.MAX_POINTS_LONG:
				return 21;
			case GameType.MAX_POINTS_DEBUG:
				return 3;
			case GameType.MAX_POINTS_NORMAL:
			default:
				return 11;
		}
    }

    void SetGameType(GameType type, bool show)
    {
		switch (type)
		{
			case GameType.MAX_POINTS_SHORT:
                gameTypeLabel.text = gameTypeButtonLabel.text = "SHORT (5)";
                MAX_SERVE_POINTS = 2;
				if (bar)
				{
					bar.SetActive(true);
				}
				break;
			case GameType.MAX_POINTS_LONG:
				gameTypeLabel.text = gameTypeButtonLabel.text = "LONG (21)";
                MAX_SERVE_POINTS = 2;
				if (bar)
				{
					bar.SetActive(true);
				}
				break;
			case GameType.MAX_POINTS_DEBUG:
                if (bar)
                {
					bar.SetActive(false);
                }
				gameTypeLabel.text = gameTypeButtonLabel.text = "DEBUG (3)";
                MAX_SERVE_POINTS = 1;
                break;
			case GameType.MAX_POINTS_NORMAL:
			default:
				gameTypeLabel.text = gameTypeButtonLabel.text = "NORMAL (11)";
                MAX_SERVE_POINTS = 2;
				if (bar)
				{
					bar.SetActive(true);
				}
				break;
		}
		if (show)
		{
			MessagesText.ShowToast(gameTypeButtonLabel.text + " SET");
		}
		PlayerPrefs.SetInt("gameType", (int)type);
		gameType = type;
	}

    void SetDifficulty(GameDifficulty difficulty, bool show)
    {
        switch (difficulty)
		{
			case GameDifficulty.EASY:
				{
					opponent.SetDifficulty(GameDifficultyMultpx.Easy);
					player.SetDifficulty(GameDifficultyMultpx.Easy);
					print("EASY Mode");
					if (show)
                        MessagesText.ShowToast("EASY MODE");
					difficultLevelButtonLabel.text = difficultLevelLabel.text = "EASY";
					break;
				}
			case GameDifficulty.NORMAL:
			    {
					opponent.SetDifficulty(GameDifficultyMultpx.Normal);
					player.SetDifficulty(GameDifficultyMultpx.Normal);
					print("NORMAL Mode");
					if (show)
                        MessagesText.ShowToast("NORMAL MODE");
					difficultLevelButtonLabel.text = difficultLevelLabel.text = "NORMAL";
					break;
				}
			case GameDifficulty.HARD:
				{
					opponent.SetDifficulty(GameDifficultyMultpx.Hard);
					player.SetDifficulty(GameDifficultyMultpx.Hard);
					print("HARD Mode");
					if (show)
                        MessagesText.ShowToast("HARD MODE");
					difficultLevelButtonLabel.text = difficultLevelLabel.text = "HARD";
					break;
				}
			case GameDifficulty.INSANE:
				{
					opponent.SetDifficulty(GameDifficultyMultpx.Insane);
					player.SetDifficulty(GameDifficultyMultpx.Insane);
					print("INSANE Mode");
					if (show)
                        MessagesText.ShowToast("INSANE MODE");
					difficultLevelButtonLabel.text = difficultLevelLabel.text = "INSANE";
					break;
				}

			case GameDifficulty.NEWBIE:
			default:
				{                 
					opponent.SetDifficulty(GameDifficultyMultpx.Newbie);
					player.SetDifficulty(GameDifficultyMultpx.Newbie);
					print("NEWBIE Mode");
					if (show)
                        MessagesText.ShowToast("NEWBIE MODE");
					difficultLevelButtonLabel.text = difficultLevelLabel.text = "NEWBIE";
					break;
				}
        }
		PlayerPrefs.SetInt("gameDifficulty", (int)difficulty);
		gameDifficulty = difficulty;
	}

	void Start(){
		//initialize colors, player, confetti and audio
		foreach(GameObject conf in confetti){
			conf.SetActive(false);
		}
        if (!bar)
        {
			bar = GameObject.Find("Bar");
        }
		playerServe = true;
		servePoints = 0;
		SetColorScheme();
		player.SetBar(true);
		
		SetAudio(false);
		SetDifficulty((GameDifficulty) PlayerPrefs.GetInt("gameDifficulty", (int) gameDifficulty), false);
		SetGameType((GameType) PlayerPrefs.GetInt("gameType", (int) gameType), false);

		if (bonus){
			diamondsLabel.gameObject.SetActive(false);
		}
		else{
			characterAvailableIcon.SetActive(PlayerPrefs.GetInt("Diamonds") >= 20);
		}
	}
	
	void SetColorScheme(){
		//assign the colors from a randomly picked color scheme
		int random = Random.Range(0, colorSchemes.Length);
		
		floor.color = colorSchemes[random].floor;
		stadium.color = colorSchemes[random].background;
		court.color = colorSchemes[random].court;
	}
	
	//make the match info object, assign match info and continue to the dance scene
	public IEnumerator Done(bool wonMatch){
		transition.SetTrigger("transition");
		cameraZoom.SetTrigger("zoom");
		
		yield return new WaitForSeconds(1f/4f);
			
		GameObject matchInfo = new GameObject();
		MatchInfo info = matchInfo.AddComponent<MatchInfo>();
		
		info.won = wonMatch;
		info.scoreText = playerPoints + " - " + opponentPoints;
		
		DontDestroyOnLoad(matchInfo);
		
		SceneManager.LoadScene(GAME_OVR_SCENE);
	}

	//load the level
	public IEnumerator LoadLevel(string name)
	{
		transition.SetTrigger("transition");
		cameraZoom.SetTrigger("zoom");

		yield return new WaitForSeconds(1f / 4f);

		SceneManager.LoadScene(name);
	}

	//create and assign a new ball
	public void Serve(){
		GameObject newBall = Instantiate(ball, spawnPos.position, ball.transform.rotation);
		
		player.ball = newBall.transform;
		opponent.ball = newBall.transform;
		
		ballScript = newBall.GetComponent<Ball>();
	}
	
	//when the court is triggered, check who hit the ball last and based on that either lose or win a point
	public void CourtTriggered(bool net){
		if(net){
			if(ballScript.GetLastHit()){
				LosePoint();
			}
			else{
				WinPoint();
			}
		}
		else{
			if(ballScript.GetLastHit()){
				WinPoint();
			}
			else{
				LosePoint();
			}
		}
	}
	
	//with a fire ball, always win a point (and shake the camera for a nice effect)
	public void FireBall(){
		WinPoint();
		
		StartCoroutine(cameraMovement.Shake(0.2f, 1.2f));
	}
	
	//lose point when the ball doesn't make it over the net
	public void Out(){
		LosePoint();
	}
	
	//add a point to the opponent score
	void LosePoint(){
		opponentPoints++;
		
		if(!resetting)
			StartCoroutine(CheckAndReset(false));
	}
	
	//add a point to the player score
	void WinPoint(){
		playerPoints++;
		
		if(!resetting)
			StartCoroutine(CheckAndReset(true));
	}
	
	//handles full scoring, zooming, confetti, and reset mechanism
	IEnumerator CheckAndReset(bool wonPoint){
		resetting = true;
		
		if(bonus){
			StartCoroutine(BonusDone());
			
			yield break;
		}
		
		Vector3 playerPos = player.transform.position;
		playerPos.x = 0;
		player.SetTarget(playerPos);
		player.rangeCircle.SetBool("Show", false);
		
		Vector3 opponentPos = opponent.transform.position;
		opponentPos.x = 0;
		opponent.SetTarget(opponentPos);
		
		player.ComboDone(null);
		
		if(ballScript != null && !ballScript.inactive)
			ballScript.inactive = true;
		
		yield return new WaitForSeconds(0.75f);
		
		cameraMovement.SwitchTargetTemp(scoreCamTarget, 1.5f, 0.5f);
		
		yield return new WaitForSeconds(0.5f);
		
		if(wonPoint){
			visitors.Cheer();
			
			foreach(GameObject conf in confetti){
				conf.SetActive(true);
				
				yield return new WaitForSeconds(0.15f);
			}
			
			playerPointsAnim.SetTrigger("Effect");
			scorePointAudio.Play();
		}
		else{
			visitors.Disbelief();
			opponentPointsAnim.SetTrigger("Effect");
			losePointAudio.Play();
		}
		
		yield return new WaitForSeconds(1f/6f);
		
		opponentPointsLabel.text = "" + opponentPoints;
		playerPointsLabel.text = "" + playerPoints;

        if (GameObject.FindObjectOfType<PowerupBallSpawner>())
		    GameObject.FindObjectOfType<PowerupBallSpawner>().RandomSpawn();
		
		yield return new WaitForSeconds(0.25f);
		
		if(playerPoints >= GetTotalPoints(gameType) &&
            (playerPoints - opponentPoints >= WIN_BY))
		{
			StartCoroutine(Done(true));
		}
		else if(opponentPoints >= GetTotalPoints(gameType) &&
            (opponentPoints - playerPoints >= WIN_BY))
		{
			StartCoroutine(Done(false));
		}
		else if (playerPoints >= GetTotalPoints(gameType) - 1 &&
                ((playerPoints - opponentPoints >= WIN_BY - 1)) ||
                opponentPoints >= GetTotalPoints(gameType) - 1 &&
                (opponentPoints - playerPoints >= WIN_BY - 1))
        {
			yield return new WaitForSeconds(0.5f);
			
			matchPoint.SetTrigger("Show");
			matchPointAudio.Play();
			
			yield return new WaitForSeconds(0.5f);
		}
		
		yield return new WaitForSeconds(1f);
		
		foreach(GameObject conf in confetti){
			conf.SetActive(false);
		}
		servePoints++;

		if(!playerServeOnly){
			if (servePoints == MAX_SERVE_POINTS)
			{
				playerServe = !playerServe;
				servePoints = 0;
			}
			if (playerServe){
				player.SetBar(true);
			}
			else{
				StartCoroutine(OpponentServe());
			}
		}
		else
        {
			player.SetBar(true);
		}
		
		yield return new WaitForSeconds(1f);
		
		resetting = false;
	}
	
	//after the bonus is done, show the popup, wait, and load the game scene
	IEnumerator BonusDone(){
		PlayerPrefs.SetInt("Diamonds", PlayerPrefs.GetInt("Diamonds") + bonusDiamonds);
		bonuspopupLabel.text = "+" + bonusDiamonds;
		
		if(PlayerPrefs.GetInt("Bonus max") < maxBonusTargets - 3)
			PlayerPrefs.SetInt("Bonus max", PlayerPrefs.GetInt("Bonus max") + 1);
		
		bonuspopup.SetTrigger("Play");
		
		yield return new WaitForSeconds(1f);
		
		transition.SetTrigger("transition");
		
		yield return new WaitForSeconds(1f/4f);
		
		SceneManager.LoadScene(0);
	}
	
	//opponent serves first hit
	IEnumerator OpponentServe(){
		countDown.SetTrigger("Countdown");
		
		yield return new WaitForSeconds(2f);
		
		StartCoroutine(opponent.JustHit());
		
		opponent.anim.SetTrigger("Serve");
		
		yield return new WaitForSeconds(0.28f);
		
		Serve();
		opponent.HitBall(true, opponentSpawnPos);
	}

    //pause the game by freezing everything
    public void Pause()
    {
        pausePanel.SetBool("Show", !pausePanel.GetBool("Show"));
		StartCoroutine(Freeze(pausePanel.GetBool("Show")));
	}

	//Show Main Menu
	public void MainMenu()
	{
		Pause();
		StartCoroutine(LoadLevel(MAIN_MENU_SCENE));
	}

	//Change Difficulty
	public void ChangeDifficultyInc()
	{
		if (gameDifficulty == GameDifficulty.INSANE)
		{
			gameDifficulty = 0;
		}
        else
        {
			gameDifficulty++;
	    }
		SetDifficulty(gameDifficulty, true);
	}

	public void ChangeDifficultyDec()
	{
		if (gameDifficulty == 0)
		{
			gameDifficulty = GameDifficulty.INSANE;
		}
		else
		{
			gameDifficulty--;
		}
        SetDifficulty(gameDifficulty, true);
	}

    public void ChangeGameInc()
    {
		if (gameType == GameType.MAX_POINTS_LONG)
		{
			gameType = 0;
		}
		else
		{
			gameType++;
		}

		SetGameType(gameType, true);
	}

	//Show GameCenter and Leaderboards, etc
	public void GameCenter()
	{
		//PlayerPrefs.DeleteAll();
		Pause();
	    StartCoroutine(LoadLevel(LEADERBOARD_SCENE));
	}


	//Randomize Table Button
	public void ChangeTableButton()
	{
		//PlayerPrefs.DeleteAll();
		RandomizeTable();
		//Pause();
		//StartCoroutine(LoadLevel(LEADERBOARD_SCENE));
	}

	//Restart the Game
	public void Restart()
	{
		Pause();
		StartCoroutine(LoadLevel(MAIN_MENU_SCENE));
	}

	//Forfeit the Game
	public void Forfeit()
	{
		Pause();
		StartCoroutine(Done(false));
	}


	//Forfeit the Game
	public void ShowSettings()
	{
		Pause();
		StartCoroutine(Done(false));
	}

	//Purge the Game Settings
	public void PurgeSavedSsettings()
	{
		PlayerPrefs.DeleteAll();
		Pause();
	}

	//freeze everything by changing the timescale
	IEnumerator Freeze(bool freeze){
		if(freeze){
			yield return new WaitForSeconds(1f/3f);
			Time.timeScale = 0;
		}
		else{
			Time.timeScale = 1;
		}
	}
	
	//handles the haptic setting (button in the game settings menu)
	//for the haptic implementation, I would recommend the Nice Vibrations asset
	//I couldn't add it to the asset, as it's a paid package
	public void SetHaptic(bool change){
		int haptic = PlayerPrefs.GetInt("Haptic");
		
		if(change){
			haptic = haptic == 0 ? 1 : 0;
			
			PlayerPrefs.SetInt("Haptic", haptic);
		}
		
		vibrateLine.SetActive(haptic == 1);
		
		useHapticFeedback = haptic == 0;
	}
	
	//handles the audio button
	public void SetAudio(bool change){
		int audio = PlayerPrefs.GetInt("Audio");
		
		if(change){
			audio = audio == 0 ? 1 : 0;
			
			PlayerPrefs.SetInt("Audio", audio);
		}
		
		audioLine.SetActive(audio == 1);
		
		AudioListener.volume = audio == 0 ? 1 : 0;
	}
	
	//load the character selection scene
	public void CharacterSelection(){
		SceneManager.LoadScene("Player shop");
	}
	
	//add diamonds to the total bonus collected and update the display label
	public void AddBonus(){
		bonusDiamonds++;
		
		scorePointAudio.Play();
		
		if(!diamondsLabel.gameObject.activeSelf)
			diamondsLabel.gameObject.SetActive(true);
		
		int max = 3 + PlayerPrefs.GetInt("Bonus max");
		
		if(bonusDiamonds >= max){
			resetting = true;
			diamondsLabel.gameObject.SetActive(false);
			
			StartCoroutine(BonusDone());
		}
		else{
			StartCoroutine(UpdateDiamondLabel());
		}
	}
	
	//update the diamonds label
	IEnumerator UpdateDiamondLabel(){
		diamondLabelAnim.SetTrigger("Play");
		
		yield return new WaitForSeconds(1f/6f);
		
		diamondsLabel.text = "" + bonusDiamonds;
	}
}

/*

*********************************************
*           Pong 2020                       *
*           by Apollo SOFTWARE              *
*           February 17, 2020               *
*           © Copyright 2020                *
*                                           *
*********************************************


MessageText.cs various comms. and messaging
functions & type def, data types, and definitions
in. Also TTS, pitch, volume for TTS, etc in C#.

*/

using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Prime31;

/*

Languages for TTS

Language: ar-SA, Name: Maged
Language: cs-CZ, Name: Zuzana
Language: da-DK, Name: Sara
Language: de-DE, Name: Anna
Language: el-GR, Name: Melina
Language: en-AU, Name: Karen
Language: en-GB, Name: Daniel
Language: en-IE, Name: Moira
Language: en-US, Name: Samantha
Language: en-ZA, Name: Tessa
Language: es-ES, Name: Monica
Language: es-MX, Name: Paulina
Language: fi-FI, Name: Satu
Language: fr-CA, Name: Amelie
Language: fr-FR, Name: Thomas
Language: he-IL, Name: Carmit
Language: hi-IN, Name: Lekha
Language: hu-HU, Name: Mariska
Language: id-ID, Name: Damayanti
Language: it-IT, Name: Alice
Language: ja-JP, Name: Kyoko
Language: ko-KR, Name: Yuna
Language: nl-BE, Name: Ellen
Language: nl-NL, Name: Xander
Language: no-NO, Name: Nora
Language: pl-PL, Name: Zosia
Language: pt-BR, Name: Luciana
Language: pt-PT, Name: Joana
Language: ro-RO, Name: Ioana
Language: ru-RU, Name: Milena
Language: sk-SK, Name: Laura
Language: sv-SE, Name: Alva
Language: th-TH, Name: Kanya
Language: tr-TR, Name: Yelda
Language: zh-CN, Name: Ting-Ting
Language: zh-HK, Name: Sin-Ji
Language: zh-TW, Name: Mei-Jia

*/

[System.Serializable]
public class MessagesText
{
    const float     DEFAULT_VOLUME = 1.0f;
    const float     DEFAULT_RATE = 0.5f; 
    const float     DEFAULT_PITCH = 1.0f;
    const string    DEFAULT_LANGUAGE = "en-US"; //Samantha voice

    public string message;
	public float duration;
	public bool shouldClear;
	public bool shouldFade;
	public bool shouldFlash;
	public bool shouldShow;
	public Color color;
	private static float volume_ = DEFAULT_VOLUME;
	private static float rate_ = DEFAULT_RATE;
	private static float pitch_ = DEFAULT_PITCH;
	private static string language_ = DEFAULT_LANGUAGE;

	// Singleton Lazy initialize ->
	private static MessagesText _instance = null;
	public static MessagesText GetInstance
	{
		get
		{
			if (_instance == null)
			{
				_instance = new MessagesText();
			}
			return _instance;
		}
	}

    public static void ShowAlert(string title, string strMessage, string btnDismiss)
	{	
#if UNITY_IOS
		EtceteraBinding.showAlertWithTitleMessageAndButtons(title, strMessage, new string[] { btnDismiss });
#endif
#if UNITY_ANDROID
		EtceteraAndroid.showAlert(title, strMessage, btnDismiss);
#endif
		Debug.Log("ShowAlert: " + strMessage);
	}

	public static void ShowToast(string strMessage)
	{
#if UNITY_IOS
		EtceteraBinding.showToast(strMessage);
#endif
#if UNITY_ANDROID
		EtceteraAndroid.showToast(strMessage,true);
#endif
		Debug.Log("ShowToast: " + strMessage);
	}

	public static void ShowToast(string strMessage, float timeMS)
	{
#if UNITY_IOS
        EtceteraBinding.showToast(strMessage);
#endif
#if UNITY_ANDROID
		EtceteraAndroid.showToast(strMessage, false);
#endif
    }

    public static void VoiceSpeak(string strMessage)
    {
#if UNITY_IOS
        EtceteraBinding.setLanguage(getLanguage());
        EtceteraBinding.setPitch(getPitch());
        EtceteraBinding.setSpeechRate(getRate());
        EtceteraBinding.setVolume(getVolume());
        EtceteraBinding.speak(strMessage);
#endif
#if UNITY_ANDROID
        EtceteraAndroid.setLanguage(getLanguage());
        EtceteraAndroid.setPitch(getPitch());
        EtceteraAndroid.setSpeechRate(getRate());
        EtceteraAndroid.setVolume(getVolume());
        EtceteraAndroid.speak(strMessage);
#endif
        Debug.Log("VoiceSpeak: " + strMessage);
	}
	public static void VoiceSpeak(string strMessage, string language)
    {
#if UNITY_IOS
		EtceteraBinding.setLanguage(language);
        EtceteraBinding.setPitch(getPitch());
        EtceteraBinding.setSpeechRate(getRate());
        EtceteraBinding.setVolume(getVolume());
        EtceteraBinding.speak(strMessage);
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setLanguage(language);
        EtceteraAndroid.setPitch(getPitch());
        EtceteraAndroid.setSpeechRate(getRate());
        EtceteraAndroid.setVolume(getVolume());
        EtceteraAndroid.speak(strMessage);
#endif
        Debug.Log("VoiceSpeak: " + strMessage);
    }

	public static void VoiceSpeak(string strMessage, float pitch, float rate)
    {
#if UNITY_IOS
		EtceteraBinding.setPitch(pitch);
		EtceteraBinding.setSpeechRate(rate);
		EtceteraBinding.speak(strMessage);
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setPitch(pitch);
		EtceteraAndroid.setSpeechRate(rate);
        EtceteraAndroid.speak(strMessage);
#endif
    }

	public static float getRate()
	{
		return rate_;
	}

    public static float getPitch()
	{
		return pitch_;
	}

    public static string getLanguage()
    {
        return language_;
	}
    
    public static float getVolume()
    {
		return volume_;
    }

	public static void setRate(float rate)
	{   
		rate_ = rate;
#if UNITY_IOS
		EtceteraBinding.setSpeechRate(getRate());
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setSpeechRate(getRate());
#endif
	}

    public static void setPitch(float pitch)
    {
		pitch_ = pitch;
#if UNITY_IOS
		EtceteraBinding.setPitch(getPitch());
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setPitch(getPitch());
#endif
	}

    public static void setLanguage(string language)
    {
        language_ = language;
#if UNITY_IOS      
		EtceteraBinding.setLanguage(getLanguage());
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setLanguage(getLanguage());
#endif
	}

    public static void setVolume(float volume)
    {
		volume_ = volume;
#if UNITY_IOS
		EtceteraBinding.setVolume(getVolume());
#endif
#if UNITY_ANDROID
		EtceteraAndroid.setVolume(getVolume());
#endif
	}
    
    // init Message Text with a string

    void MessageText(string m)
    {
        message = m;
	}
    
    // set Message text to ""

    void MessageText()
    {
		message = "";
    }
}

using UnityEngine;
using System;
using System.Collections.Generic;
using System.Collections;
using Prime31;



namespace Prime31
{
	public class EtceteraManager : AbstractManager
	{
#if UNITY_IOS

		// Fired whenever toast is fired
        public static event Action didShowToastEventSucceeded;

        // Fired whenever speak tts is fired
        public static event Action didSpeakEventSucceeded;

		// Fired whenever any full screen view controller is dismissed
		public static event Action dismissingViewControllerEvent;
	
		// Fired when the user cancels the image picker
		public static event Action imagePickerCancelledEvent;
	
		// Fired when the user selects or takes a photo
		public static event Action<string> imagePickerChoseImageEvent;
	
		// Fired when an image is saved to the album
		public static event Action saveImageToPhotoAlbumSucceededEvent;
	
		// Fired when an image fails to be saved to the album
		public static event Action<string> saveImageToPhotoAlbumFailedEvent;
	
		// Fired when the user touches a button on the alert view
		public static event Action<string> alertButtonClickedEvent;
	
		// Fired when the user touches the cancel button on a prompt
		public static event Action promptCancelledEvent;
	
		// Fired when the user finishes entering text in the prompt
		public static event Action<string> singleFieldPromptTextEnteredEvent;
	
		// Fired when the user finishes entering text in a two field prompt
		public static event Action<string, string> twoFieldPromptTextEnteredEvent;
	
		// Fired when remote notifications are successfully registered for
		public static event Action<string> remoteRegistrationSucceededEvent;
	
		// Fired when remote notification registration fails
		public static event Action<string> remoteRegistrationFailedEvent;
	
		// Fired when Urban Airship registration succeeds
		public static event Action urbanAirshipRegistrationSucceededEvent;
	
		// Fired when Urban Airship registration fails
		public static event Action<string> urbanAirshipRegistrationFailedEvent;
	
		// Fired when Push.IO registration completes. If the parameter is null then there was no error. Non-null will contain an error message
		public static event Action<string> pushIORegistrationCompletedEvent;
	
		// Fired when a remote notification is received
		public static event Action<IDictionary> remoteNotificationReceivedEvent;
	
		// Fired when a remote notification launched your game
		public static event Action<IDictionary> remoteNotificationReceivedAtLaunchEvent;
	
		// Fired when a local notification is received
		public static event Action<IDictionary> localNotificationWasReceivedEvent;
	
		// Fired when a local notification is received at launch
		public static event Action<IDictionary> localNotificationWasReceivedAtLaunchEvent;
	
		// Fired when the mail composer is dismissed
		public static event Action<string> mailComposerFinishedEvent;
	
		// Fired when the SMS composer is dismissed
		public static event Action<string> smsComposerFinishedEvent;
	
	
		public static string deviceToken { get; private set; }
		public static string pushIOApiKey;
		public static string[] pushIOCategories;
	
	
	    static EtceteraManager()
	    {
			AbstractManager.initialize( typeof( EtceteraManager ) );
			#pragma warning disable 0168
			var uselessVar = typeof( UnityEngine.iOS.RemoteNotification );
			#pragma warning restore 0168
	    }
	
	
		public void didShowToastEvent()
        {
            Debug.Log("Did show toast.");
            if (didShowToastEventSucceeded != null)
                didShowToastEventSucceeded();
        }

        public void didSpeakEvent()
        {
            Debug.Log("Did speak utterance.");
            if (didSpeakEventSucceeded != null)
                didSpeakEventSucceeded();
        }

		void dismissingViewController()
		{
			if( dismissingViewControllerEvent != null )
				dismissingViewControllerEvent();
		}
	
	
		#region Image picker
	
		void imagePickerDidCancel( string empty )
		{
			if( imagePickerCancelledEvent != null )
				imagePickerCancelledEvent();
		}
	
	
		void imageSavedToDocuments( string filePath )
		{
			if( imagePickerChoseImageEvent != null )
				imagePickerChoseImageEvent( filePath );
		}
	
	
		void saveImageToPhotoAlbumFailed( string error )
		{
			saveImageToPhotoAlbumFailedEvent.fire( error );
		}
	
	
		void saveImageToPhotoAlbumSucceeded( string empty )
		{
			saveImageToPhotoAlbumSucceededEvent.fire();
		}
	
	
		// Loads up a Texture2D with the image at the given path
		public static IEnumerator textureFromFileAtPath( string filePath, Action<Texture2D> del, Action<string> errorDel )
		{
			using( WWW www = new WWW( filePath ) )
			{
				yield return www;
	
				if( !string.IsNullOrEmpty( www.error ) )
				{
					if( errorDel != null )
						errorDel( www.error );
				}
	
				// Assign the texture to a local variable to avoid leaking it (Unity bug)
				Texture2D tex = www.texture;
	
				if( tex != null )
					del( tex );
				else
					errorDel( "www.texture was null. Texture not loaded" );
			}
		}
	
		#endregion;
	
	
		#region Alert and Prompt
	
		void alertViewClickedButton( string buttonTitle )
		{
			if( alertButtonClickedEvent != null )
				alertButtonClickedEvent( buttonTitle );
		}
	
	
		void alertPromptCancelled( string empty )
		{
			if( promptCancelledEvent != null )
				promptCancelledEvent();
		}
	
	
		void alertPromptEnteredText( string text )
		{
			// Was this one prompt or 2?
			string[] promptText = text.Split( new string[] {"|||"}, StringSplitOptions.None );
			if( promptText.Length == 1 )
			{
				if( singleFieldPromptTextEnteredEvent != null )
					singleFieldPromptTextEnteredEvent( promptText[0] );
			}
	
			if( promptText.Length == 2 )
			{
				if( twoFieldPromptTextEnteredEvent != null )
					twoFieldPromptTextEnteredEvent( promptText[0], promptText[1] );
			}
		}
	
		#endregion;
	
	
		#region Remote Notifications
	
		void remoteRegistrationDidSucceed( string deviceToken )
		{
			EtceteraManager.deviceToken = deviceToken;
			if( remoteRegistrationSucceededEvent != null )
				remoteRegistrationSucceededEvent( deviceToken );
	
			// if we have Push.IO data perform registration
			if( pushIOApiKey != null )
				StartCoroutine( registerDeviceWithPushIO() );
		}
	
	
		private IEnumerator registerDeviceWithPushIO()
		{
			var url = string.Format( "https://api.push.io/r/{0}?di={1}&dt={2}", pushIOApiKey, SystemInfo.deviceUniqueIdentifier, deviceToken );
	
			// add categories if we have them
			if( pushIOCategories != null && pushIOCategories.Length > 0 )
				url += "&c=" + string.Join( ",", pushIOCategories );
	
			using( var www = new WWW( url ) )
			{
				yield return www;
	
				if( pushIORegistrationCompletedEvent != null )
					pushIORegistrationCompletedEvent( www.error );
			}
		}
	
	
		void remoteRegistrationDidFail( string error )
		{
			if( remoteRegistrationFailedEvent != null )
				remoteRegistrationFailedEvent( error );
		}
	
	
		void urbanAirshipRegistrationDidSucceed( string empty )
		{
			if( urbanAirshipRegistrationSucceededEvent != null )
				urbanAirshipRegistrationSucceededEvent();
		}
	
	
		void urbanAirshipRegistrationDidFail( string error )
		{
			if( urbanAirshipRegistrationFailedEvent != null )
				urbanAirshipRegistrationFailedEvent( error );
		}
	
	
		void remoteNotificationWasReceived( string json )
		{
			if( remoteNotificationReceivedEvent != null )
				remoteNotificationReceivedEvent( json.dictionaryFromJson() );
		}
	
	
		void remoteNotificationWasReceivedAtLaunch( string json )
		{
			if( remoteNotificationReceivedAtLaunchEvent != null )
				remoteNotificationReceivedAtLaunchEvent( json.dictionaryFromJson() );
		}
	
	
		void localNotificationWasReceived( string json )
		{
			localNotificationWasReceivedEvent.fire( json.dictionaryFromJson() );
		}
	
	
		void localNotificationWasReceivedAtLaunch( string json )
		{
			localNotificationWasReceivedAtLaunchEvent.fire( json.dictionaryFromJson() );
		}
	
		#endregion;
	
	
		void mailComposerFinishedWithResult( string result )
		{
			if( mailComposerFinishedEvent != null )
				mailComposerFinishedEvent( result );
		}
	
	
		void smsComposerFinishedWithResult( string result )
		{
			if( smsComposerFinishedEvent != null )
				smsComposerFinishedEvent( result );
		}
	
#endif
	}

}
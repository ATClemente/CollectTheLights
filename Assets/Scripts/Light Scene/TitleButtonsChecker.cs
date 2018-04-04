using UnityEngine;
using System.Collections;
using UnityEngine.UI;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class TitleButtonsChecker : MonoBehaviour {

	public Button Level1Button;
	public Button Level2Button;
	public Button Level3Button;
	public Button Level4Button;
	public Button Level5Button;
	public Button Level6Button;
	public Button Level7Button;
	public Button Level8Button;

	public int highestlevelCompleted;

	[HideInInspector]
	public bool canPlayLevel2 = false;
	[HideInInspector]
	public bool canPlayLevel3 = false;
	[HideInInspector]
	public bool canPlayLevel4 = false;
	[HideInInspector]
	public bool canPlayLevel5 = false;
	[HideInInspector]
	public bool canPlayLevel6 = false;
	[HideInInspector]
	public bool canPlayLevel7 = false;
	[HideInInspector]
	public bool canPlayLevel8 = false;


	void Awake () {

		//Debug.Log (Application.persistentDataPath);

		LoadSaveGame ();


		
		switch (highestlevelCompleted) {
		case 1:
			canPlayLevel2 = true;
			break;
		case 2: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			break;
		case 3: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			break;
		case 4: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			canPlayLevel5 = true;
			break;
		case 5: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			canPlayLevel5 = true;
			canPlayLevel6 = true;
			break;
		case 6: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			canPlayLevel5 = true;
			canPlayLevel6 = true;
			canPlayLevel7 = true;
			break;
		case 7: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			canPlayLevel5 = true;
			canPlayLevel6 = true;
			canPlayLevel7 = true;
			canPlayLevel8 = true;
			break;
		case 8: 
			canPlayLevel2 = true;
			canPlayLevel3 = true;
			canPlayLevel4 = true;
			canPlayLevel5 = true;
			canPlayLevel6 = true;
			canPlayLevel7 = true;
			canPlayLevel8 = true;
			canPlayLevel8 = true;
			break;
		default:
			break;
		}
		
	}

	// Use this for initialization
	void Start () {

		Level1Button.interactable = true;

		if (canPlayLevel2 == true) 
		{
			Level2Button.interactable = true;
		} 
		else if (canPlayLevel2 == false) 
		{
			Level2Button.interactable = false;
		}


		if (canPlayLevel3 == true) 
		{
			Level3Button.interactable = true;
		} 
		else if (canPlayLevel3 == false) 
		{
			Level3Button.interactable = false;
		}


		if (canPlayLevel4 == true) 
		{
			Level4Button.interactable = true;
		} 
		else if (canPlayLevel4 == false) 
		{
			Level4Button.interactable = false;
		}


		if (canPlayLevel5 == true) 
		{
			Level5Button.interactable = true;
		} 
		else if (canPlayLevel5 == false) 
		{
			Level5Button.interactable = false;
		}


		if (canPlayLevel6 == true) 
		{
			Level6Button.interactable = true;
		} 
		else if (canPlayLevel6 == false) 
		{
			Level6Button.interactable = false;
		}


		if (canPlayLevel7 == true) 
		{
			Level7Button.interactable = true;
		} 
		else if (canPlayLevel7 == false) 
		{
			Level7Button.interactable = false;
		}


		if (canPlayLevel8 == true) 
		{
			Level8Button.interactable = true;
		} 
		else if (canPlayLevel8 == false) 
		{
			Level8Button.interactable = false;
		}
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}


	void LoadSaveGame ()
	{
		if (File.Exists (Application.persistentDataPath + "/savegame.dat")) 
		{
			BinaryFormatter bf = new BinaryFormatter ();
			FileStream loadedSaveFile = File.Open (Application.persistentDataPath + "/savegame.dat", FileMode.Open);

			highestlevelCompleted = (int) bf.Deserialize (loadedSaveFile);

			loadedSaveFile.Close ();


		}
	}
}

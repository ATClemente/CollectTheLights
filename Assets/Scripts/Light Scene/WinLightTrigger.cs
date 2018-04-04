using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using System;
using System.Runtime.Serialization.Formatters.Binary;
using System.IO;

public class WinLightTrigger : MonoBehaviour {

	public GameObject winLight;
	public string nextLevel;

	private int pastHighestLevelCompleted;

	private PickupController myPickupController;

	// Use this for initialization
	void Awake () {
	

		winLight.SetActive (false);

	}

	void Start(){


		GameObject playerObject = GameObject.FindWithTag ("Player");
		if (playerObject != null) {
			myPickupController = playerObject.GetComponent<PickupController> ();
		}
		if (playerObject == null) {
			Debug.Log ("Cannot find PickupController Script");
		}
	}


	void OnTriggerEnter () {
	
		if (myPickupController.lightsPickedUp == myPickupController.totalPickUpLights) {
			winLight.SetActive (true);
			SaveProgress ();
			Invoke ("MoveToNextLevel", 3f);
		}

	}

	void MoveToNextLevel(){
		SceneManager.LoadScene (nextLevel);
	}


	void SaveProgress() {
		int levelCompleted = SceneManager.GetActiveScene ().buildIndex;

		if (File.Exists (Application.persistentDataPath + "/savegame.dat")) {
			BinaryFormatter loadbf = new BinaryFormatter ();
			FileStream loadedSaveFile = File.Open (Application.persistentDataPath + "/savegame.dat", FileMode.Open);

			pastHighestLevelCompleted = (int)loadbf.Deserialize (loadedSaveFile);

			loadedSaveFile.Close ();

		} 

		if (levelCompleted > pastHighestLevelCompleted) 
		{
			BinaryFormatter bf = new BinaryFormatter ();
			FileStream saveFile = File.Create (Application.persistentDataPath + "/savegame.dat");

			bf.Serialize (saveFile, levelCompleted);
			saveFile.Close ();
		}

	}


}

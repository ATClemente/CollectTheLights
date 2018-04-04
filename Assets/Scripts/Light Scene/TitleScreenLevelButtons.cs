using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;


public class TitleScreenLevelButtons : MonoBehaviour {

	public string levelToLoad;

	public void LoadCorrectLevel(){
		SceneManager.LoadScene (levelToLoad);
	}
}

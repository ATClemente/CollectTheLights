using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
using System.Collections.Generic;

public class PauseMenuController : MonoBehaviour {


	public GameObject pauseMenu;


	void Awake ()
	{
		DeactivatePauseMenu ();
	}
		

	void Update () {

		if (Input.GetButtonDown ("Menu")) 
		{

			if (!pauseMenu.activeInHierarchy) 
			{
				ActivatePauseMenu ();
			} 
			else if (pauseMenu.activeInHierarchy) 
			{
				DeactivatePauseMenu ();
			}

		}
			
	
	}

	void ActivatePauseMenu()
	{
		pauseMenu.SetActive (true);
		Time.timeScale = 0f;
		Cursor.visible = true;
	}

	void DeactivatePauseMenu()
	{
		pauseMenu.SetActive (false);
		Time.timeScale = 1f;
		Cursor.visible = false;
	}

	public void LoadTitleScreen () {
		SceneManager.LoadScene (0);
	}

	public void ExitGame () {
		Application.Quit();
	}
}

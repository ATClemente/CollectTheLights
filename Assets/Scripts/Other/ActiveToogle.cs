using UnityEngine;
using System.Collections;

public class ActiveToogle : MonoBehaviour {

	public GameObject player;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		if (Input.GetMouseButtonDown (0)) {
			StartCoroutine ("CoActiveToogle");
		}

//		if (Input.GetMouseButtonDown (1)) {
//			player.SetActive (true);
//		}
	
	}

	IEnumerator CoActiveToogle (){
		player.SetActive (false);
		yield return new WaitForSeconds (1.0f);
		player.SetActive (true);
	}

}

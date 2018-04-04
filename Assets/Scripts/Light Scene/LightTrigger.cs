using UnityEngine;
using System.Collections;

public class LightTrigger : MonoBehaviour {

	public GameObject myLight;

	// Use this for initialization
	void Start () {


	}
	
	// Update is called once per frame
	void OnTriggerEnter () {
	
		myLight.SetActive (true);
	
	}
}

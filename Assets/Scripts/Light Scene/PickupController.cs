using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class PickupController : MonoBehaviour {


	public Text lightPickupText;

	[HideInInspector]
	public int lightsPickedUp;
	private GameObject[] totalPickupLightPrefabs;
	[HideInInspector]
	public int totalPickUpLights;


	// Use this for initialization
	void Start () {
		
		totalPickupLightPrefabs = GameObject.FindGameObjectsWithTag ("Light Enhance Pickup");
		totalPickUpLights = totalPickupLightPrefabs.Length;
		lightsPickedUp = 0;
		if (lightPickupText != null) {
			SetLightPickUpText ();
		}

	}
	
	// Update is called once per frame
	void Update () {

	
	}

	void OnTriggerEnter(Collider other){
		
		if (other.gameObject.CompareTag("Light Enhance Pickup"))
		{
		lightsPickedUp = lightsPickedUp + 1;
		SetLightPickUpText ();
		}


	}

	void SetLightPickUpText()
	{
		if (lightsPickedUp < totalPickUpLights) {
			lightPickupText.text = lightsPickedUp + "/" + totalPickUpLights + " Lights Collected";
		} else 
		{
			lightPickupText.text = "All lights collected. You may now exit the area.";
		}
	}
}

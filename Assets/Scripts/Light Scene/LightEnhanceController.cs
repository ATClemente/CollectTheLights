using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class LightEnhanceController : MonoBehaviour {

	public Light playerFollowLight;
	public float lightIncrease;

	private float currentSpotAngle;
	private float newSpotAngle;


	// Use this for initialization
	void Start () {

	
	}

	// Update is called once per frame
	void Update () {
		
	}

	void OnTriggerEnter(Collider other){

		if (other.gameObject.CompareTag ("Player")) 
		{
			currentSpotAngle = playerFollowLight.GetComponent<Light> ().spotAngle;

			newSpotAngle = currentSpotAngle + lightIncrease;

			playerFollowLight.spotAngle = newSpotAngle;
	
			Destroy (gameObject);
		}
	}


}

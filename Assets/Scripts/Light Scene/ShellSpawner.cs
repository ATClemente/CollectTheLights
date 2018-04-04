using UnityEngine;
using System.Collections;

public class ShellSpawner : MonoBehaviour {

	public GameObject shellPickup;

	private Component currentShellPickup;
	// Use this for initialization
	void Start () {
		
		SpawnShellPickUp ();

		currentShellPickup = gameObject.GetComponentInChildren<ShellPickup> ();

	}
	
	// Update is called once per frame
	void Update () {

		if (currentShellPickup == null) 
		{
			if (GameObject.FindGameObjectWithTag ("Player").GetComponentInChildren<ShellPowerUpController> () == null) 
			{
				SpawnShellPickUp ();
				currentShellPickup = gameObject.GetComponentInChildren<ShellPickup> ();
			}
		}
	
	}

	void SpawnShellPickUp (){
		GameObject shellPickupToSpawn = Instantiate (shellPickup, transform.position, Quaternion.identity) as GameObject;
		shellPickupToSpawn.transform.parent = transform;
		shellPickupToSpawn.SetActive (true);
	}
}

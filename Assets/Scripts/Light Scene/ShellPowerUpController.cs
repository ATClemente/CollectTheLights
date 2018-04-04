using UnityEngine;
using System.Collections;

public class ShellPowerUpController : MonoBehaviour {

	public GameObject player;

	// Use this for initialization
	void Start () {
		player = GameObject.FindGameObjectWithTag ("Player");
		transform.parent = player.transform;

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other){
		if (other.tag == "SpikeEnemy") {
			Destroy (other.gameObject);
			Destroy (gameObject);
		}
	}
}

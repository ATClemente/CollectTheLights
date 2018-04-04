using UnityEngine;
using System.Collections;

public class PlayerRespawnTrigger : MonoBehaviour {


	public SpikeEnemyMover SpikeEnemyMoverScript;

	// Use this for initialization
	void Start () {
	
		SpikeEnemyMoverScript = gameObject.GetComponentInParent<SpikeEnemyMover> ();

	}
	
	// Update is called once per frame
	void Update () {
	
	}

	void OnTriggerEnter(Collider other) {
		if (other.tag == "Player") 
		{
			SpikeEnemyMoverScript.respawnPointLocation = gameObject.transform;
		}
	}
}

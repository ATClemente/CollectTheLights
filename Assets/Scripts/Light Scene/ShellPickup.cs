using UnityEngine;
using System.Collections;

public class ShellPickup : MonoBehaviour {

	public Transform ShellSpawnLocation;


	public GameObject ShellPowerUp;

	private Vector3 maxUp;
	private Vector3 maxDown;

	private Vector3 startPosition;
	private Vector3 targetPosition;
	private Vector3 currentPosition;
	private Vector3 MaxUpEndPosition;
	private Vector3 MaxDownEndPosition;

	void Start () {

		startPosition = transform.position;

		MaxUpEndPosition = new Vector3 (transform.position.x, transform.position.y + 0.1f, transform.position.z);
		MaxDownEndPosition = new Vector3 (transform.position.x, transform.position.y - 0.1f, transform.position.z);

		targetPosition = MaxUpEndPosition;
	}
	

	void Update () {
		ShellPickUpMover ();
	}

	void OnTriggerEnter (Collider other){
		if (other.tag == "Player" && other.GetComponentInChildren<ShellPowerUpController>() == null) {
			Instantiate (ShellPowerUp, ShellSpawnLocation.position, Quaternion.identity);
			Destroy (gameObject);
		}
	}

	void ShellPickUpMover (){

		currentPosition = transform.position;

		if (currentPosition == startPosition) {
			targetPosition = MaxUpEndPosition;
		}

		if (currentPosition != targetPosition) {

			//Vector3 movement = -transform.up * Time.deltaTime;
			//transform.position += movement;

			transform.position = Vector3.MoveTowards (currentPosition, targetPosition, 0.5f * Time.deltaTime);
		}

		if (currentPosition == targetPosition && targetPosition == MaxUpEndPosition) {
			targetPosition = MaxDownEndPosition;
		} else if (currentPosition == targetPosition && targetPosition == MaxDownEndPosition) {
			targetPosition = MaxUpEndPosition;
		}
	}
		
}
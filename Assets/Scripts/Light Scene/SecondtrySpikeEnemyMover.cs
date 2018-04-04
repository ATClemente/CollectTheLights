using UnityEngine;
using System.Collections;

public class SecondtrySpikeEnemyMover : MonoBehaviour {

	private Vector3 startPosition;
	private Vector3 endPosition;

	private Vector3 targetPosition;

	private Vector3 currentPosition;

	public Transform respawnPointLocation;
	public GameObject player;

	public float moveSpeed = 0.5f;
	public float moveStartDelay = 0f;
	public bool initialDelayComplete = false;

	// Use this for initialization
	void Start () {
		startPosition = transform.position;

		Debug.Log (transform.eulerAngles.z);

		if (Mathf.Approximately(transform.eulerAngles.z, 0f)) 
		{
			endPosition = new Vector3 (transform.position.x, transform.position.y - 0.7f, transform.position.z);

		} 
		else if (Mathf.Approximately(transform.eulerAngles.z, 90f)) 
		{
			endPosition = new Vector3 (transform.position.x + 0.7f, transform.position.y, transform.position.z);

		} 
		else if (Mathf.Approximately(transform.eulerAngles.z, 180f)) 
		{
			endPosition = new Vector3 (transform.position.x, transform.position.y + 0.7f, transform.position.z);

		} 
		else if (Mathf.Approximately(transform.eulerAngles.z, 270f)) 
		{
			endPosition = new Vector3 (transform.position.x - 0.7f, transform.position.y, transform.position.z);

		}



		targetPosition = endPosition;
	}

	// Update is called once per frame
	void Update () {

		if (initialDelayComplete == false) {
			StartCoroutine ("Delay");
		}
		if (initialDelayComplete == true) {
			MoveEnemy ();
		}

	}

	void OnTriggerEnter(Collider other) {

		if (other.tag == "Player") {
			StartCoroutine("RespawnPlayer");
		}
	}

	void MoveEnemy (){
		currentPosition = transform.position;

		if (currentPosition == startPosition) {
			targetPosition = endPosition;
		}

		if (currentPosition != targetPosition) {

			//Vector3 movement = -transform.up * Time.deltaTime;
			//transform.position += movement;

			transform.position = Vector3.MoveTowards (currentPosition, targetPosition, moveSpeed * Time.deltaTime);
		}

		if (currentPosition == targetPosition) {
			targetPosition = startPosition;
		}
	}

	IEnumerator RespawnPlayer(){
		player = GameObject.FindGameObjectWithTag ("Player");
		player.SetActive(false);
		yield return new WaitForSeconds(1f);
		player.transform.position = respawnPointLocation.position;
		player.SetActive (true);

	}

	IEnumerator Delay(){
		yield return new WaitForSeconds(moveStartDelay);
		initialDelayComplete = true;
	}
}

using UnityEngine;
using System.Collections;

public class FollowPlayerCamera : MonoBehaviour {

	public Transform player;

	public float smoothing = 5;

	Vector3 cameraOffset;

	// Use this for initialization
	void Start () {

		cameraOffset = transform.position - player.position;

		Cursor.visible = false;
	
	}
	
	// Update is called once per frame
	void FixedUpdate () {

		Vector3 targetCamPosition = player.position + cameraOffset;

		transform.position = Vector3.Lerp(transform.position, targetCamPosition, smoothing * Time.deltaTime);

	}
		
}

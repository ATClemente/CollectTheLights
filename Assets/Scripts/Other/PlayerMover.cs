using UnityEngine;
using System.Collections;

public class PlayerMover : MonoBehaviour {

	public float speed;

	private Rigidbody rb;


	public float jumpHeight;

	void Start ()
	{
		//GetComponent<Renderer> ().material.color = Color.green;

		rb = GetComponent<Rigidbody>();
	}

	void FixedUpdate ()
	{
		float moveHorizontal = Input.GetAxis ("Horizontal");
		float moveVertical = Input.GetAxis ("Vertical");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, moveVertical);

		rb.AddForce (movement * speed);

		Jump (jumpHeight);


	}

	void Jump (float jumpHeight)
	{
		if (Input.GetKeyDown(KeyCode.Space))
		{
			Vector3 jump = new Vector3 (0.0f, jumpHeight, 0.0f);


			rb.AddForce (jump);
		}

	}

	void OnMouseDown(){
		GetComponent<Renderer> ().material.color = Color.green;
	}

}
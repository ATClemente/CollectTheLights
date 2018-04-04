using UnityEngine;
using System.Collections;

public class PlayerMoverLightScene : MonoBehaviour {


	//Player speed variables
	public float speed;

	//Physics variables
	private Rigidbody rb;

	private bool isGrounded;
	private bool jump;

	private Vector3 playerLeftBottomEdge;
	private Vector3 playerRightBottomEdge;
	private Vector3 playerMiddle;

	//Jump height amount
	public float jumpForce;




	void Start ()
	{
		isGrounded = false;
		rb = GetComponent<Rigidbody>();

	}

	void Update()
	{

		playerLeftBottomEdge = new Vector3 (transform.position.x - 0.5f, transform.position.y, transform.position.z);
		playerRightBottomEdge = new Vector3 (transform.position.x + 0.5f, transform.position.y, transform.position.z);
		playerMiddle = new Vector3 (transform.position.x, transform.position.y, transform.position.z);

		if (Physics.Raycast (playerRightBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) 
		|| Physics.Raycast (playerLeftBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) 
		|| Physics.Raycast (playerMiddle, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground"))
		|| Physics.Raycast (playerRightBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("SpikeEnemy"))
		|| Physics.Raycast (playerLeftBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("SpikeEnemy"))
		|| Physics.Raycast (playerMiddle, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("SpikeEnemy"))) 
			{
				isGrounded = true;
			} 
		else 
			{
				isGrounded = false;
			}
			

		if (Input.GetButtonDown ("Jump") && isGrounded) {
			jump = true;
		}
		
	}

	void FixedUpdate ()
	{

	
	
		float moveHorizontal = Input.GetAxis ("Horizontal");
		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, 0.0f);
		rb.AddForce (movement * speed);


		if (jump)
		{
			Vector3 jumpAmount = new Vector3 (0.0f, jumpForce, 0.0f);
			rb.AddForce (jumpAmount);
			isGrounded = false;
			jump = false;
		}
			
		if (isGrounded) 
		{
			rb.useGravity = false;
		}

		if (!isGrounded) 
		{
			rb.useGravity = true;
		}
	}

}
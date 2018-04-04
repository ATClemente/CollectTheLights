using UnityEngine;
using System.Collections;

public class CodeDumpScript : MonoBehaviour {


	//Player speed variables
	public float speed;
	//public float groundMass = 1;
	//public float airMass = 5;



	//Physics variables
	private Rigidbody rb;

	private bool isGrounded;

	private Vector3 playerLeftEdge;
	private Vector3 playerRightEdge;


	//Jump height amount
	public float jumpForce;



	void Start ()
	{
		isGrounded = false;
		rb = GetComponent<Rigidbody>();

	}


	/*void OnTriggerEnter (Collider other)
	{
		if (other.tag == "Ground") 
		{
			isGrounded = true;
		} 
		else 
		{
			isGrounded = false;
		}


	}

	void OnTriggerExit (Collider other)
	{
		if (other.tag == "Ground") 
		{
			isGrounded = false;
		} 


	}*/


	void FixedUpdate ()
	{

		//if (Physics.BoxCast (transform.position, new Vector3(0.5f,0.5f, 0.5f), -Vector3.up, Quaternion.LookRotation(-Vector3.up), 0.5f, 1 << LayerMask.NameToLayer ("Ground"))) {
		//	isGrounded = true;
		//} else 
		//{
		//	isGrounded = false;
		//}

		playerLeftEdge = new Vector3 (transform.position.x - 0.5f, transform.position.y, transform.position.z);
		playerRightEdge = new Vector3 (transform.position.x + 0.5f, transform.position.y, transform.position.z);

		if (Physics.Raycast (playerRightEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) || Physics.Raycast (playerLeftEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) ) {
			isGrounded = true;
		} else 
		{
			isGrounded = false;
		}

		Debug.Log (isGrounded);

		//if (Physics.Raycast (transform.position, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground"))) {
		//	isGrounded = true;
		//} else 
		//{
		//	isGrounded = false;
		//}


		float moveHorizontal = Input.GetAxis ("Horizontal");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, 0.0f);

		rb.AddForce (movement * speed);

		Jump (jumpForce);

		if (isGrounded) {
			rb.useGravity = false;
			//rb.mass = groundMass;

		}

		if (!isGrounded) {
			rb.useGravity = true;
			//rb.mass = airMass;

		}

	}

	void Jump (float jumpForce)
	{

		//if (Physics.Raycast (transform.position, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer("Ground"))) {
		//	grounded = true;
		//}

		if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
		{
			Vector3 jump = new Vector3 (0.0f, jumpForce, 0.0f);

			rb.AddForce (jump);
			isGrounded = false;
			//rb.useGravity = true;
			//rb.drag = inAirDrag;
			//inAirSpeed = speed / (onGroundDrag / inAirDrag);
			//speed = inAirSpeed;
		}

	}

}









/*using UnityEngine;
using System.Collections;

public class PlayerMoverLightScene : MonoBehaviour {


	//Player speed variables
	public float speed;

	//Physics variables
	private Rigidbody rb;

	private bool isGrounded;
	private bool canMove;

	private Vector3 playerLeftBottomEdge;
	private Vector3 playerRightBottomEdge;

	//sides of cube
	private Vector3 playerTopSide;
	private Vector3 playerBottomSide;


	//Jump height amount
	public float jumpForce;



	void Start ()
	{
		isGrounded = false;
		rb = GetComponent<Rigidbody>();

	}

	void FixedUpdate ()
	{

		Debug.Log ("Grounded = " + isGrounded + "     Can move = " + canMove);

		playerLeftBottomEdge = new Vector3 (transform.position.x - 0.5f, transform.position.y, transform.position.z);
		playerRightBottomEdge = new Vector3 (transform.position.x + 0.5f, transform.position.y, transform.position.z);

		if (Physics.Raycast (playerRightBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) || Physics.Raycast (playerLeftBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) ) {
			isGrounded = true;
		} else 
		{
			isGrounded = false;
		}

		playerTopSide = new Vector3 (transform.position.x, transform.position.y + 0.5f, transform.position.z);
		playerBottomSide = new Vector3 (transform.position.x, transform.position.y - 0.5f, transform.position.z);


		RaycastHit leftTopHit;
		Ray leftTopRay = new Ray (playerTopSide, Vector3.left);
		RaycastHit leftBottomHit;
		Ray leftBottomRay = new Ray (playerBottomSide, Vector3.left);


		RaycastHit rightTopHit;
		Ray rightTopRay = new Ray (playerTopSide, Vector3.right);
		RaycastHit rightBottomHit;
		Ray rightBottomRay = new Ray (playerBottomSide, Vector3.right);

		Physics.Raycast (leftTopRay, out leftTopHit, 0.51f);
		Physics.Raycast (leftBottomRay, out leftBottomHit, 0.51f);
		Physics.Raycast (rightTopRay, out rightTopHit, 0.51f);
		Physics.Raycast (rightBottomRay, out rightBottomHit, 0.51f);

		if ((leftTopHit.collider.tag=="Walls" || leftBottomHit.collider.tag=="Walls" || rightTopHit.collider.tag=="Walls" || rightBottomHit.collider.tag=="Walls") && !isGrounded)
		{

			canMove = false;
		} else 
		{
			canMove = true;
		}




		float moveHorizontal = Input.GetAxis ("Horizontal");

		Vector3 movement = new Vector3 (moveHorizontal, 0.0f, 0.0f);

		if (canMove) {
			rb.AddForce (movement * speed);
		}


		Jump (jumpForce);


		if (isGrounded) {
			rb.useGravity = false;
		}

		if (!isGrounded) {
			rb.useGravity = true;
		}
	}

	void Jump (float jumpForce)
	{
		if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
		{
			Vector3 jump = new Vector3 (0.0f, jumpForce, 0.0f);

			rb.AddForce (jump);
			isGrounded = false;
		}
	}




}*/




/*playerTopSide = new Vector3 (transform.position.x, transform.position.y + 0.5f, transform.position.z);
playerBottomSide = new Vector3 (transform.position.x, transform.position.y - 0.5f, transform.position.z);*/


/*RaycastHit leftTopHit;
Ray leftTopRay = new Ray (playerTopSide, Vector3.left);
RaycastHit leftBottomHit;
Ray leftBottomRay = new Ray (playerBottomSide, Vector3.left);


RaycastHit rightTopHit;
Ray rightTopRay = new Ray (playerTopSide, Vector3.right);
RaycastHit rightBottomHit;
Ray rightBottomRay = new Ray (playerBottomSide, Vector3.right);

Physics.Raycast (leftTopRay, out leftTopHit, 0.51f);
Physics.Raycast (leftBottomRay, out leftBottomHit, 0.51f);
Physics.Raycast (rightTopRay, out rightTopHit, 0.51f);
Physics.Raycast (rightBottomRay, out rightBottomHit, 0.51f);*/

//if ((leftTopHit.collider.tag=="Walls" || leftBottomHit.collider.tag=="Walls" || rightTopHit.collider.tag=="Walls" || rightBottomHit.collider.tag=="Walls") && !isGrounded)
//{

//	canMove = false;
//} else 
//{
//	canMove = true;
//}


//		playerLeftBottomEdge = new Vector3 (transform.position.x - 0.5f, transform.position.y, transform.position.z);
//		playerRightBottomEdge = new Vector3 (transform.position.x + 0.5f, transform.position.y, transform.position.z);
//
//		if (Physics.Raycast (playerRightBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) || Physics.Raycast (playerLeftBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) ) {
//			isGrounded = true;
//		} else 
//		{
//			isGrounded = false;
//		}


//		RaycastHit leftBottomEdgeHit;
//		Ray leftBottomEdgeRay = new Ray (playerLeftBottomEdge, -Vector3.up);
//
//
//
//		RaycastHit rightBottomEdgeHit;
//		Ray rightBottomEdgeRay = new Ray (playerRightBottomEdge, -Vector3.up);
//
//
//		Physics.Raycast (leftBottomEdgeRay, out leftBottomEdgeHit, 0.5f);
//
//		Physics.Raycast (rightBottomEdgeRay, out rightBottomEdgeHit, 0.5f);
//
//		if (leftBottomEdgeHit.distance > .001f || rightBottomEdgeHit.distance > .001f ) {
//			isGrounded = false;
//		}
//
//		if (leftBottomEdgeHit.distance > .001f || rightBottomEdgeHit.distance > .001f) 
//		{
//			isGrounded = true;
//		} 
//		else 
//		{
//			isGrounded = false;
//		}//		playerLeftBottomEdge = new Vector3 (transform.position.x - 0.5f, transform.position.y, transform.position.z);
//		playerRightBottomEdge = new Vector3 (transform.position.x + 0.5f, transform.position.y, transform.position.z);
//
//		if (Physics.Raycast (playerRightBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) || Physics.Raycast (playerLeftBottomEdge, -Vector3.up, 0.5f, 1 << LayerMask.NameToLayer ("Ground")) ) {
//			isGrounded = true;
//		} else 
//		{
//			isGrounded = false;
//		}


//		RaycastHit leftBottomEdgeHit;
//		Ray leftBottomEdgeRay = new Ray (playerLeftBottomEdge, -Vector3.up);
//
//
//
//		RaycastHit rightBottomEdgeHit;
//		Ray rightBottomEdgeRay = new Ray (playerRightBottomEdge, -Vector3.up);
//
//
//		Physics.Raycast (leftBottomEdgeRay, out leftBottomEdgeHit, 0.5f);
//
//		Physics.Raycast (rightBottomEdgeRay, out rightBottomEdgeHit, 0.5f);
//
//		if (leftBottomEdgeHit.distance > .001f || rightBottomEdgeHit.distance > .001f ) {
//			isGrounded = false;
//		}
//
//		if (leftBottomEdgeHit.distance > .001f || rightBottomEdgeHit.distance > .001f) 
//		{
//			isGrounded = true;
//		} 
//		else 
//		{
//			isGrounded = false;
//		}


//Jump (jumpForce);

//	void Jump (float jumpForce)
//	{
//		if (Input.GetKeyDown(KeyCode.Space) && isGrounded)
//		{
//			Vector3 jump = new Vector3 (0.0f, jumpForce, 0.0f);
//
//			rb.AddForce (jump);
//			isGrounded = false;
//		}
//	}



//using UnityEngine;
//using System.Collections;
//
//public class PlayerController : MonoBehaviour {
//
//	public float moveForce;
//	Vector3 currentPos;
//	Vector3 newPosition;
//
//	private Rigidbody rb;
//
//	// Use this for initialization
//	void Start () {
//
//		rb = GetComponent<Rigidbody> ();
//		currentPos = new Vector3 (transform.position.x, transform.position.y, transform.position.z);
//	}
//
//	// Update is called once per frame
//	void FixedUpdate () {
//
//		float moveHorizontal = Input.GetAxis ("Horizontal");
//
//		newPosition = new Vector3 (transform.position.x + moveHorizontal, transform.position.y, transform.position.z);
//
//
//		rb.MovePosition (currentPos + newPosition * Time.deltaTime);  
//
//	}
//}

//using UnityEngine;
//using System.Collections;
//
//public class MagnifyingGlassMover : MonoBehaviour {
//
//	private float mouseXPos;
//	private float mouseYPos;
//
//	private Vector3 mousePosition;
//
//
//	//private Camera MagnifyingGlass;
//
//	// Use this for initialization
//	void Start () {
//	
//		//MagnifyingGlass = GetComponent<Camera> ();
////		mouseXPos = Input.mousePosition.x;
////		mouseYPos = Input.mousePosition.y;
//
//	}
//	
//	// Update is called once per frame
//	void Update () {
//
////		mousePosition = Input.mousePosition;
////		mousePosition = Camera.main.ScreenToWorldPoint (mousePosition);
////
////
////		transform.position = Vector3.MoveTowards (transform.position, mousePosition, 1f * Time.deltaTime);
//
//
//		mouseXPos = Input.mousePosition.x;
//		mouseYPos = Input.mousePosition.y;
//
//
//		Debug.Log ("X: " + mouseXPos + " Y: " + mouseYPos);
//
//
//
//		transform.position = new Vector3 (mouseXPos, mouseYPos, transform.position.z);
//
//	}
//}

using UnityEngine;
using System.Collections;

public class MagnifyingGlassMover : MonoBehaviour {

	//public float distance = 1.0f;


	// Use this for initialization
	void Start () {

	}

	// Update is called once per frame
	void Update () {

		//Vector3 mousePosition = Input.mousePosition;
		//mousePosition.z = distance;
		//transform.position = Camera.main.ScreenToWorldPoint (mousePosition);

	}
}





//using UnityEngine;
//using System.Collections;
//
//public class MagnifyingGlassMover : MonoBehaviour 
//{
//	public float speed = 3.0f;
//	private Vector3 targetPos;
//
//	void Start() {
//		targetPos = transform.position;    
//	}
//
//	void Update () {
//		
//		float distance = transform.position.z - Camera.main.transform.position.z;
//		targetPos = new Vector3(Input.mousePosition.x, Input.mousePosition.y, distance);
//		targetPos = Camera.main.ScreenToWorldPoint(targetPos);
//
//
//		transform.position = Vector3.MoveTowards (transform.position, targetPos, speed * Time.deltaTime);
//
//	}
//}
﻿using UnityEngine;
using System.Collections;

public class FollowMouse : MonoBehaviour {

	public float distance = 1.0f;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {

		Vector3 mousePosition = Input.mousePosition;
		mousePosition.z = distance;
		transform.position = Camera.main.ScreenToWorldPoint (mousePosition);
	
	}
}

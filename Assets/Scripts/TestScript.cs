using UnityEngine;
using System.Collections;

public class TestScript : MonoBehaviour {

	public int x;
	public int y;


	// Use this for initialization
	void Start () {
		print ("Test Message");
	
	}
	
	// Update is called once per frame
	void Update () {

	}

	void OnMouseDown () {
		print (Multiply (x, y));
	}

	int Multiply (int x, int y) {
		int total;
		total = x * y;
		return total;
	}
}

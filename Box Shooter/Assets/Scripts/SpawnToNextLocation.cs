using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnToNextLocation : MonoBehaviour {

	private GameObject[] game;

	void Start(){
		game = GameObject.FindGameObjectsWithTag ("Player");
	}

	// Update is called once per frame
	void Update () {
		
		if (Input.GetKeyDown(KeyCode.N) && game[0].transform.position.x < 50){
			//Debug.Log ("Executed");
			//Debug.Log (game [0].transform.position.x);
			game [0].transform.Translate(new Vector3 (50, 0, 0), Space.World);
		}

		if (Input.GetKeyDown (KeyCode.B) && game[0].transform.position.x >= 50)
			game [0].transform.Translate (new Vector3 (-50, 0, 0), Space.World);
	}
}

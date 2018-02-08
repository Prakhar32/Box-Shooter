using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoadPreviousLevel : MonoBehaviour {


	// Update is called once per frame
	void OnCollisionEnter (Collision newCollision) {
		
		if (newCollision.gameObject.tag == "Projectile")
			GameManager.gm.LoadPreviousLevel ();
	}
}

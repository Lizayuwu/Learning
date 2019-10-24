using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Projectile : MonoBehaviour
{
    private float speed = 50;
    void Start(){
        Destroy(this.gameObject, 1);
    }

    // Update is called once per frame
    void Update() {
        transform.position += transform.forward * Time.deltaTime * speed; 
    }
}

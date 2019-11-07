using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Arma : MonoBehaviour {
    public GameObject projetilPrefab;
    private float lastShoot;
    private float countdown = 3;
    

    void Start() {
        
    }

    // Update is called once per frame
    void Update() {
       Fire(); 
    }

    void Fire() {
        float currentTime = Time.time;
        if(currentTime > lastShoot + countdown) {
            lastShoot = currentTime;
            Instantiate(projetilPrefab, this.transform.position, this.transform.rotation);
        }
    }
}

using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Player : MonoBehaviour {
    

    void Start() {
        
    }

    void Update()
    {
        MovimentoComMouse();
    }

    void MovimentoComMouse() {
        if(Input.GetAxis("Mouse X") != 0) transform.position += new Vector3(Input.GetAxisRaw("Mouse X") * Time.deltaTime * 5, 0, 0);
        if(Input.GetAxis("Mouse Y") != 0) transform.position += new Vector3(0, Input.GetAxisRaw("Mouse Y") * Time.deltaTime * 5, 0);
    }



}

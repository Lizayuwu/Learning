using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour {
    public GameObject enemyPrefab;
    public Text scoreText;
    private int score = 0;
    // Start is called before the first frame update
    void Start() {
        Instantiate(enemyPrefab);
    }

    // Update is called once per frame
    void Update() {
        
    }

    public void InstantiateNewEnemy() {
        Instantiate(enemyPrefab);
        score += 1;
        scoreText.text = "Score: " + score;
    }
}

using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class ScoreFinder : MonoBehaviour {
	private Text myScore;
	// Use this for initialization
	void Start () {
	 myScore = GetComponent<Text>();
	 myScore.text = ScoreKeeper.score.ToString();
	 ScoreKeeper.Reset();
	}
}

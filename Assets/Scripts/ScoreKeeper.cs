using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ScoreKeeper : MonoBehaviour {
    public static int score = 0;
    private Text myScore;
    void Start()
    {
     myScore = GetComponent<Text>();
     Reset();
    }
    public void Score()
    {
     score += 150;
	 myScore.text = score.ToString();	
    }
    public void Reset()
    {
     score = 0;
	 myScore.text = score.ToString();	
    }
}

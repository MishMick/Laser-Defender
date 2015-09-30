using UnityEngine;
using System.Collections;
using UnityEngine.UI;
public class ScoreKeeper : MonoBehaviour {
    public static int score = 0;
    private Text myScore;
    void Start()
    {
     myScore = GetComponent<Text>();
    }
    public void Score()
    {
     score += 150;
	 myScore.text = score.ToString();	
    }
    public string getScore()
    {
     return myScore.text;
    }
    public static void Reset()
    {
     score = 0;
    }
}

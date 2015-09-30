using UnityEngine;
using System.Collections;

public class MusicPlayer : MonoBehaviour {
    static MusicPlayer instance = null;
	void Awake()
	{
	 if(instance!=null)
	 {
	  DestroyThis();
	 }
	 else
	 {
	  instance = this;
	  GameObject.DontDestroyOnLoad(gameObject);
	 }
	}
	public void DestroyThis()
	{
	 Destroy (gameObject);
	}
}

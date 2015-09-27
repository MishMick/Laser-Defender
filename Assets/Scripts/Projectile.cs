using UnityEngine;
using System.Collections;

public class Projectile : MonoBehaviour 
{   
    private float damage = 50f;
	public void Hit()
	{
	 Debug.Log("Hit by projectile");
	 Destroy(gameObject);
	}
	public float getDamage()
	{
	 return damage;
	}
	void OnCollisionEnter2D(Collision2D col)
	{
	 Destroy(gameObject);
	}
}

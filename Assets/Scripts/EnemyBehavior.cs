using UnityEngine;
using System.Collections;

public class EnemyBehavior : MonoBehaviour 
{
    public GameObject enemylaser;
    public Vector3 offset = new Vector3(0f,-0.5f,0f);
    private float health = 150f;
    private float projectileSpeed  = 10f;
    public float shotsPerSecond = 0.5f;
    void Update()
    {
       float probability = Time.deltaTime *  shotsPerSecond;
       if(Random.value < probability)
       FireAtPlayer();
    }
     
	void OnTriggerEnter2D(Collider2D col)
	{
	 Projectile missile = col.gameObject.GetComponent<Projectile>();
	 if(missile)
	 {
	  missile.Hit();
	  this.health -= missile.getDamage();
	  Debug.Log ("Enemy health:"+this.health);
	  if(this.health <= 0)
	  {
	   Destroy (gameObject);
	  }
	 }
	}
	void FireAtPlayer()
	{
		Vector3 startPos=transform.position+new Vector3(0,-1,0);
		GameObject shoot = Instantiate(enemylaser,startPos,Quaternion.identity) as GameObject;
		shoot.GetComponent<Rigidbody2D>().velocity = new Vector3(0,-projectileSpeed);   
	}
}

using UnityEngine;
using System.Collections;

public class PlayerController : MonoBehaviour 
{
    private float speed = 10.0f;
    private float CameraDistance;
    static private float xmin,xmax;
    static private float padding = 0.5f;
    static private float repeatRate = 0.2f;
    public float projectileSpeed;
    public float health = 200f;
    //Shooting spree
    public GameObject laser;
	// Use this for initialization
	void Start () 
	{
	  CameraDistance = transform.position.z-Camera.main.transform.position.z;
	  Vector3 leftmost = Camera.main.ViewportToWorldPoint(new Vector3(0,0,CameraDistance));
	  Vector3 rightmost = Camera.main.ViewportToWorldPoint(new Vector3(1,0,CameraDistance));
	  xmin = leftmost.x;
	  xmax = rightmost.x;
	}
	void movement()
	{
		if(Input.GetKey(KeyCode.LeftArrow))
		{
			transform.position += Vector3.left*speed*Time.deltaTime;		
		}
		if(Input.GetKey(KeyCode.RightArrow))
		{	    
			transform.position += Vector3.right*speed*Time.deltaTime;
		}
		float newX = Mathf.Clamp(transform.position.x,xmin+padding,xmax-padding);
		transform.position = new Vector3(newX,transform.position.y,transform.position.z);
	}
	void Fire()
	{
	    Vector3 offset = new Vector3(0,1,0);
		GameObject beam = Instantiate(laser,transform.position+offset,Quaternion.identity) as GameObject;
		beam.GetComponent<Rigidbody2D>().velocity = new Vector3(0,projectileSpeed);
	}
	// Update is called once per frame
	void Update () 
	{
		if(Input.GetKeyDown(KeyCode.Space))
		{
		   InvokeRepeating("Fire",0.0001f,repeatRate);
		}
		if(Input.GetKeyUp(KeyCode.Space))
		{
		   CancelInvoke();
		}
	  movement();
	}
	void OnTriggerEnter2D(Collider2D col)
	{
		Projectile missile = col.gameObject.GetComponent<Projectile>();
		if(missile)
		{
			missile.Hit();
			this.health -= missile.getDamage();
			Debug.Log ("Player health:"+this.health);
			if(this.health <= 0)
			{
				Destroy (gameObject);
			}
		}
	}
}

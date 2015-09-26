using UnityEngine;
using System.Collections;

public class EnemySpawner : MonoBehaviour {
    public GameObject enemyPrefab;
    public float width = 10f;
    public float height = 5f;
    private bool movingRight = true;
    private float speed = 5.0f;
	private float leftEdgeOfFormation,rightEdgeOfFormation;
	private Vector3 leftEdge,rightEdge;
	private float xmin,xmax;
	// Use this for initialization
	void Start () 
	{
	float CameraDistance = transform.position.z - Camera.main.transform.position.z;
	leftEdge = Camera.main.ViewportToWorldPoint(new Vector3(0,0,CameraDistance));
	rightEdge = Camera.main.ViewportToWorldPoint(new Vector3(1,0,CameraDistance));
	xmin = leftEdge.x;
	xmax = rightEdge.x;
	
	  foreach(Transform child in transform)
	  {
	   GameObject enemy = Instantiate(enemyPrefab,child.transform.position,Quaternion.identity) as GameObject;
	   enemy.transform.parent = child;		
	  }
	}
	void OnDrawGizmos()
	{
	  Gizmos.DrawWireCube(transform.position,new Vector3(width,height,0));
	}
	// Update is called once per frame
	void Update () 
	{
		if(movingRight)
		{
		  transform.position += new Vector3(speed*Time.deltaTime,0);
		}
		else
		{
		  transform.position += new Vector3(-speed*Time.deltaTime,0);	
		}
		leftEdgeOfFormation = transform.position.x - (0.5f*width);
		rightEdgeOfFormation = transform.position.x + (0.5f*width);
		if(leftEdgeOfFormation < xmin)
		{
		 movingRight = true;
		}
		else if(rightEdgeOfFormation > xmax)
		{
		 movingRight = false;
		}
	}
}

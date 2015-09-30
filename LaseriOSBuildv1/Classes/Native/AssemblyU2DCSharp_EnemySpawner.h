#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// EnemySpawner
struct  EnemySpawner_t7  : public MonoBehaviour_t5
{
	// UnityEngine.GameObject EnemySpawner::enemyPrefab
	GameObject_t1 * ___enemyPrefab_2;
	// System.Single EnemySpawner::width
	float ___width_3;
	// System.Single EnemySpawner::height
	float ___height_4;
	// System.Boolean EnemySpawner::movingRight
	bool ___movingRight_5;
	// System.Single EnemySpawner::speed
	float ___speed_6;
	// System.Single EnemySpawner::leftEdgeOfFormation
	float ___leftEdgeOfFormation_7;
	// System.Single EnemySpawner::rightEdgeOfFormation
	float ___rightEdgeOfFormation_8;
	// UnityEngine.Vector3 EnemySpawner::leftEdge
	Vector3_t6  ___leftEdge_9;
	// UnityEngine.Vector3 EnemySpawner::rightEdge
	Vector3_t6  ___rightEdge_10;
	// System.Single EnemySpawner::xmin
	float ___xmin_11;
	// System.Single EnemySpawner::xmax
	float ___xmax_12;
	// System.Single EnemySpawner::spawnDelay
	float ___spawnDelay_13;
};

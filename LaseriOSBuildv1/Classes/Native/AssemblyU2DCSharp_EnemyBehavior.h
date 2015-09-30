#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t1;
// ScoreKeeper
struct ScoreKeeper_t2;
// UnityEngine.AudioClip
struct AudioClip_t3;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// EnemyBehavior
struct  EnemyBehavior_t4  : public MonoBehaviour_t5
{
	// UnityEngine.GameObject EnemyBehavior::enemylaser
	GameObject_t1 * ___enemylaser_2;
	// UnityEngine.Vector3 EnemyBehavior::offset
	Vector3_t6  ___offset_3;
	// System.Single EnemyBehavior::health
	float ___health_4;
	// System.Single EnemyBehavior::projectileSpeed
	float ___projectileSpeed_5;
	// System.Single EnemyBehavior::shotsPerSecond
	float ___shotsPerSecond_6;
	// ScoreKeeper EnemyBehavior::scorekeeper
	ScoreKeeper_t2 * ___scorekeeper_7;
	// UnityEngine.AudioClip EnemyBehavior::enemydown
	AudioClip_t3 * ___enemydown_8;
};

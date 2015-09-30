#pragma once
#include <stdint.h>
// UnityEngine.AudioClip
struct AudioClip_t3;
// MusicPlayer
struct MusicPlayer_t9;
// UnityEngine.GameObject
struct GameObject_t1;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// PlayerController
struct  PlayerController_t11  : public MonoBehaviour_t5
{
	// System.Single PlayerController::speed
	float ___speed_2;
	// System.Single PlayerController::CameraDistance
	float ___CameraDistance_3;
	// System.Single PlayerController::projectileSpeed
	float ___projectileSpeed_8;
	// System.Single PlayerController::health
	float ___health_9;
	// UnityEngine.AudioClip PlayerController::die
	AudioClip_t3 * ___die_10;
	// MusicPlayer PlayerController::musicplayer
	MusicPlayer_t9 * ___musicplayer_11;
	// UnityEngine.GameObject PlayerController::laser
	GameObject_t1 * ___laser_13;
	// UnityEngine.GameObject PlayerController::playerPrefab
	GameObject_t1 * ___playerPrefab_14;
	// System.Single PlayerController::_elapsedTime
	float ____elapsedTime_15;
};
struct PlayerController_t11_StaticFields{
	// System.Single PlayerController::xmin
	float ___xmin_4;
	// System.Single PlayerController::xmax
	float ___xmax_5;
	// System.Single PlayerController::padding
	float ___padding_6;
	// System.Single PlayerController::repeatRate
	float ___repeatRate_7;
	// System.Int32 PlayerController::lives
	int32_t ___lives_12;
};

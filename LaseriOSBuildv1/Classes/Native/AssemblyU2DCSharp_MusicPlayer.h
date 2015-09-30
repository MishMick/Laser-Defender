#pragma once
#include <stdint.h>
// MusicPlayer
struct MusicPlayer_t9;
// UnityEngine.AudioClip
struct AudioClip_t3;
// UnityEngine.AudioSource
struct AudioSource_t10;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// MusicPlayer
struct  MusicPlayer_t9  : public MonoBehaviour_t5
{
	// UnityEngine.AudioClip MusicPlayer::startClip
	AudioClip_t3 * ___startClip_3;
	// UnityEngine.AudioClip MusicPlayer::gameClip
	AudioClip_t3 * ___gameClip_4;
	// UnityEngine.AudioClip MusicPlayer::endClip
	AudioClip_t3 * ___endClip_5;
	// UnityEngine.AudioSource MusicPlayer::music
	AudioSource_t10 * ___music_6;
};
struct MusicPlayer_t9_StaticFields{
	// MusicPlayer MusicPlayer::instance
	MusicPlayer_t9 * ___instance_2;
};

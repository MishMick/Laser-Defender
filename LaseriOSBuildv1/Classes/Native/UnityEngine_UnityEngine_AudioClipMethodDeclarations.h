﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AudioClip
struct AudioClip_t3;
// System.Single[]
struct SingleU5BU5D_t442;

// System.Single UnityEngine.AudioClip::get_length()
extern "C" float AudioClip_get_length_m2533 (AudioClip_t3 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMReaderCallback_Internal(System.Single[])
extern "C" void AudioClip_InvokePCMReaderCallback_Internal_m2534 (AudioClip_t3 * __this, SingleU5BU5D_t442* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AudioClip::InvokePCMSetPositionCallback_Internal(System.Int32)
extern "C" void AudioClip_InvokePCMSetPositionCallback_Internal_m2535 (AudioClip_t3 * __this, int32_t ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationCurve
struct AnimationCurve_t452;
struct AnimationCurve_t452_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t591;

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m2563 (AnimationCurve_t452 * __this, KeyframeU5BU5D_t591* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m2564 (AnimationCurve_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m2565 (AnimationCurve_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m2566 (AnimationCurve_t452 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m2567 (AnimationCurve_t452 * __this, KeyframeU5BU5D_t591* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationCurve_t452_marshal(const AnimationCurve_t452& unmarshaled, AnimationCurve_t452_marshaled& marshaled);
void AnimationCurve_t452_marshal_back(const AnimationCurve_t452_marshaled& marshaled, AnimationCurve_t452& unmarshaled);
void AnimationCurve_t452_marshal_cleanup(AnimationCurve_t452_marshaled& marshaled);

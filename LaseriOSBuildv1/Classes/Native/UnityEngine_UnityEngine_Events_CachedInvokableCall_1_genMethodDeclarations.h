#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.CachedInvokableCall`1<System.Single>
struct CachedInvokableCall_1_t677;
// UnityEngine.Object
struct Object_t22;
struct Object_t22_marshaled;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Object[]
struct ObjectU5BU5D_t274;

// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
extern "C" void CachedInvokableCall_1__ctor_m3235_gshared (CachedInvokableCall_1_t677 * __this, Object_t22 * ___target, MethodInfo_t * ___theFunction, float ___argument, const MethodInfo* method);
#define CachedInvokableCall_1__ctor_m3235(__this, ___target, ___theFunction, ___argument, method) (( void (*) (CachedInvokableCall_1_t677 *, Object_t22 *, MethodInfo_t *, float, const MethodInfo*))CachedInvokableCall_1__ctor_m3235_gshared)(__this, ___target, ___theFunction, ___argument, method)
// System.Void UnityEngine.Events.CachedInvokableCall`1<System.Single>::Invoke(System.Object[])
extern "C" void CachedInvokableCall_1_Invoke_m16529_gshared (CachedInvokableCall_1_t677 * __this, ObjectU5BU5D_t274* ___args, const MethodInfo* method);
#define CachedInvokableCall_1_Invoke_m16529(__this, ___args, method) (( void (*) (CachedInvokableCall_1_t677 *, ObjectU5BU5D_t274*, const MethodInfo*))CachedInvokableCall_1_Invoke_m16529_gshared)(__this, ___args, method)

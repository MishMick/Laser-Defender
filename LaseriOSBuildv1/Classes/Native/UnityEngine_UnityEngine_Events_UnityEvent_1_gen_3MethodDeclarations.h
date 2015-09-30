#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>
struct UnityEvent_1_t178;
// UnityEngine.Events.UnityAction`1<UnityEngine.Vector2>
struct UnityAction_1_t1945;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t565;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::.ctor()
extern "C" void UnityEvent_1__ctor_m1701_gshared (UnityEvent_1_t178 * __this, const MethodInfo* method);
#define UnityEvent_1__ctor_m1701(__this, method) (( void (*) (UnityEvent_1_t178 *, const MethodInfo*))UnityEvent_1__ctor_m1701_gshared)(__this, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::AddListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_AddListener_m12932_gshared (UnityEvent_1_t178 * __this, UnityAction_1_t1945 * ___call, const MethodInfo* method);
#define UnityEvent_1_AddListener_m12932(__this, ___call, method) (( void (*) (UnityEvent_1_t178 *, UnityAction_1_t1945 *, const MethodInfo*))UnityEvent_1_AddListener_m12932_gshared)(__this, ___call, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::RemoveListener(UnityEngine.Events.UnityAction`1<T0>)
extern "C" void UnityEvent_1_RemoveListener_m12933_gshared (UnityEvent_1_t178 * __this, UnityAction_1_t1945 * ___call, const MethodInfo* method);
#define UnityEvent_1_RemoveListener_m12933(__this, ___call, method) (( void (*) (UnityEvent_1_t178 *, UnityAction_1_t1945 *, const MethodInfo*))UnityEvent_1_RemoveListener_m12933_gshared)(__this, ___call, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_1_FindMethod_Impl_m12934_gshared (UnityEvent_1_t178 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_1_FindMethod_Impl_m12934(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_1_t178 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_1_FindMethod_Impl_m12934_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t565 * UnityEvent_1_GetDelegate_m12935_gshared (UnityEvent_1_t178 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12935(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t565 * (*) (UnityEvent_1_t178 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_1_GetDelegate_m12935_gshared)(__this, ___target, ___theFunction, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::GetDelegate(UnityEngine.Events.UnityAction`1<T0>)
extern "C" BaseInvokableCall_t565 * UnityEvent_1_GetDelegate_m12936_gshared (Object_t * __this /* static, unused */, UnityAction_1_t1945 * ___action, const MethodInfo* method);
#define UnityEvent_1_GetDelegate_m12936(__this /* static, unused */, ___action, method) (( BaseInvokableCall_t565 * (*) (Object_t * /* static, unused */, UnityAction_1_t1945 *, const MethodInfo*))UnityEvent_1_GetDelegate_m12936_gshared)(__this /* static, unused */, ___action, method)
// System.Void UnityEngine.Events.UnityEvent`1<UnityEngine.Vector2>::Invoke(T0)
extern "C" void UnityEvent_1_Invoke_m1710_gshared (UnityEvent_1_t178 * __this, Vector2_t23  ___arg0, const MethodInfo* method);
#define UnityEvent_1_Invoke_m1710(__this, ___arg0, method) (( void (*) (UnityEvent_1_t178 *, Vector2_t23 , const MethodInfo*))UnityEvent_1_Invoke_m1710_gshared)(__this, ___arg0, method)

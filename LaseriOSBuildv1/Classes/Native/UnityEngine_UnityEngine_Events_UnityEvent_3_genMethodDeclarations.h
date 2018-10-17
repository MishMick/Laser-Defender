﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>
struct UnityEvent_3_t2230;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t565;

// System.Void UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::.ctor()
extern "C" void UnityEvent_3__ctor_m16726_gshared (UnityEvent_3_t2230 * __this, const MethodInfo* method);
#define UnityEvent_3__ctor_m16726(__this, method) (( void (*) (UnityEvent_3_t2230 *, const MethodInfo*))UnityEvent_3__ctor_m16726_gshared)(__this, method)
// System.Reflection.MethodInfo UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::FindMethod_Impl(System.String,System.Object)
extern "C" MethodInfo_t * UnityEvent_3_FindMethod_Impl_m16727_gshared (UnityEvent_3_t2230 * __this, String_t* ___name, Object_t * ___targetObj, const MethodInfo* method);
#define UnityEvent_3_FindMethod_Impl_m16727(__this, ___name, ___targetObj, method) (( MethodInfo_t * (*) (UnityEvent_3_t2230 *, String_t*, Object_t *, const MethodInfo*))UnityEvent_3_FindMethod_Impl_m16727_gshared)(__this, ___name, ___targetObj, method)
// UnityEngine.Events.BaseInvokableCall UnityEngine.Events.UnityEvent`3<System.Object,System.Object,System.Object>::GetDelegate(System.Object,System.Reflection.MethodInfo)
extern "C" BaseInvokableCall_t565 * UnityEvent_3_GetDelegate_m16728_gshared (UnityEvent_3_t2230 * __this, Object_t * ___target, MethodInfo_t * ___theFunction, const MethodInfo* method);
#define UnityEvent_3_GetDelegate_m16728(__this, ___target, ___theFunction, method) (( BaseInvokableCall_t565 * (*) (UnityEvent_3_t2230 *, Object_t *, MethodInfo_t *, const MethodInfo*))UnityEvent_3_GetDelegate_m16728_gshared)(__this, ___target, ___theFunction, method)
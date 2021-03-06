﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct ObjectPool_1_t228;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>
struct UnityAction_1_t229;
// System.Collections.Generic.List`1<UnityEngine.Canvas>
struct List_1_t268;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1819(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t228 *, UnityAction_1_t229 *, UnityAction_1_t229 *, const MethodInfo*))ObjectPool_1__ctor_m10597_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countAll()
#define ObjectPool_1_get_countAll_m13438(__this, method) (( int32_t (*) (ObjectPool_1_t228 *, const MethodInfo*))ObjectPool_1_get_countAll_m10599_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m13439(__this, ___value, method) (( void (*) (ObjectPool_1_t228 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10601_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countActive()
#define ObjectPool_1_get_countActive_m13440(__this, method) (( int32_t (*) (ObjectPool_1_t228 *, const MethodInfo*))ObjectPool_1_get_countActive_m10603_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m13441(__this, method) (( int32_t (*) (ObjectPool_1_t228 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10605_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Get()
#define ObjectPool_1_Get_m1820(__this, method) (( List_1_t268 * (*) (ObjectPool_1_t228 *, const MethodInfo*))ObjectPool_1_Get_m10607_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.Canvas>>::Release(T)
#define ObjectPool_1_Release_m1821(__this, ___element, method) (( void (*) (ObjectPool_1_t228 *, List_1_t268 *, const MethodInfo*))ObjectPool_1_Release_m10609_gshared)(__this, ___element, method)

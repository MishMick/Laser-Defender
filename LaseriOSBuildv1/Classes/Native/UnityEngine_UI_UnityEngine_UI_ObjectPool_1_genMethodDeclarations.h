﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct ObjectPool_1_t64;
// UnityEngine.Events.UnityAction`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>
struct UnityAction_1_t66;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>
struct List_1_t256;

// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
// UnityEngine.UI.ObjectPool`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_ObjectPool_1_gen_3MethodDeclarations.h"
#define ObjectPool_1__ctor_m1341(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t64 *, UnityAction_1_t66 *, UnityAction_1_t66 *, const MethodInfo*))ObjectPool_1__ctor_m10597_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countAll()
#define ObjectPool_1_get_countAll_m10598(__this, method) (( int32_t (*) (ObjectPool_1_t64 *, const MethodInfo*))ObjectPool_1_get_countAll_m10599_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::set_countAll(System.Int32)
#define ObjectPool_1_set_countAll_m10600(__this, ___value, method) (( void (*) (ObjectPool_1_t64 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10601_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countActive()
#define ObjectPool_1_get_countActive_m10602(__this, method) (( int32_t (*) (ObjectPool_1_t64 *, const MethodInfo*))ObjectPool_1_get_countActive_m10603_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::get_countInactive()
#define ObjectPool_1_get_countInactive_m10604(__this, method) (( int32_t (*) (ObjectPool_1_t64 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10605_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Get()
#define ObjectPool_1_Get_m10606(__this, method) (( List_1_t256 * (*) (ObjectPool_1_t64 *, const MethodInfo*))ObjectPool_1_Get_m10607_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Collections.Generic.List`1<UnityEngine.EventSystems.IEventSystemHandler>>::Release(T)
#define ObjectPool_1_Release_m10608(__this, ___element, method) (( void (*) (ObjectPool_1_t64 *, List_1_t256 *, const MethodInfo*))ObjectPool_1_Release_m10609_gshared)(__this, ___element, method)

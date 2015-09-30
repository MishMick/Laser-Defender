#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.ObjectPool`1<System.Object>
struct ObjectPool_1_t1775;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t1774;
// System.Object
struct Object_t;

// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::.ctor(UnityEngine.Events.UnityAction`1<T>,UnityEngine.Events.UnityAction`1<T>)
extern "C" void ObjectPool_1__ctor_m10597_gshared (ObjectPool_1_t1775 * __this, UnityAction_1_t1774 * ___actionOnGet, UnityAction_1_t1774 * ___actionOnRelease, const MethodInfo* method);
#define ObjectPool_1__ctor_m10597(__this, ___actionOnGet, ___actionOnRelease, method) (( void (*) (ObjectPool_1_t1775 *, UnityAction_1_t1774 *, UnityAction_1_t1774 *, const MethodInfo*))ObjectPool_1__ctor_m10597_gshared)(__this, ___actionOnGet, ___actionOnRelease, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countAll()
extern "C" int32_t ObjectPool_1_get_countAll_m10599_gshared (ObjectPool_1_t1775 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countAll_m10599(__this, method) (( int32_t (*) (ObjectPool_1_t1775 *, const MethodInfo*))ObjectPool_1_get_countAll_m10599_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::set_countAll(System.Int32)
extern "C" void ObjectPool_1_set_countAll_m10601_gshared (ObjectPool_1_t1775 * __this, int32_t ___value, const MethodInfo* method);
#define ObjectPool_1_set_countAll_m10601(__this, ___value, method) (( void (*) (ObjectPool_1_t1775 *, int32_t, const MethodInfo*))ObjectPool_1_set_countAll_m10601_gshared)(__this, ___value, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countActive()
extern "C" int32_t ObjectPool_1_get_countActive_m10603_gshared (ObjectPool_1_t1775 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countActive_m10603(__this, method) (( int32_t (*) (ObjectPool_1_t1775 *, const MethodInfo*))ObjectPool_1_get_countActive_m10603_gshared)(__this, method)
// System.Int32 UnityEngine.UI.ObjectPool`1<System.Object>::get_countInactive()
extern "C" int32_t ObjectPool_1_get_countInactive_m10605_gshared (ObjectPool_1_t1775 * __this, const MethodInfo* method);
#define ObjectPool_1_get_countInactive_m10605(__this, method) (( int32_t (*) (ObjectPool_1_t1775 *, const MethodInfo*))ObjectPool_1_get_countInactive_m10605_gshared)(__this, method)
// T UnityEngine.UI.ObjectPool`1<System.Object>::Get()
extern "C" Object_t * ObjectPool_1_Get_m10607_gshared (ObjectPool_1_t1775 * __this, const MethodInfo* method);
#define ObjectPool_1_Get_m10607(__this, method) (( Object_t * (*) (ObjectPool_1_t1775 *, const MethodInfo*))ObjectPool_1_Get_m10607_gshared)(__this, method)
// System.Void UnityEngine.UI.ObjectPool`1<System.Object>::Release(T)
extern "C" void ObjectPool_1_Release_m10609_gshared (ObjectPool_1_t1775 * __this, Object_t * ___element, const MethodInfo* method);
#define ObjectPool_1_Release_m10609(__this, ___element, method) (( void (*) (ObjectPool_1_t1775 *, Object_t *, const MethodInfo*))ObjectPool_1_Release_m10609_gshared)(__this, ___element, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>
struct Transform_1_t2106;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m15328_gshared (Transform_1_t2106 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m15328(__this, ___object, ___method, method) (( void (*) (Transform_1_t2106 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m15328_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
extern "C" DictionaryEntry_t1046  Transform_1_Invoke_m15329_gshared (Transform_1_t2106 * __this, uint64_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m15329(__this, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Transform_1_t2106 *, uint64_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m15329_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m15330_gshared (Transform_1_t2106 * __this, uint64_t ___key, Object_t * ___value, AsyncCallback_t149 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m15330(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2106 *, uint64_t, Object_t *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m15330_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Networking.Types.NetworkID,System.Object,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
extern "C" DictionaryEntry_t1046  Transform_1_EndInvoke_m15331_gshared (Transform_1_t2106 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m15331(__this, ___result, method) (( DictionaryEntry_t1046  (*) (Transform_1_t2106 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m15331_gshared)(__this, ___result, method)

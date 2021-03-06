﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>
struct Transform_1_t1823;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t77;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_1MethodDeclarations.h"
#define Transform_1__ctor_m11519(__this, ___object, ___method, method) (( void (*) (Transform_1_t1823 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11489_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m11520(__this, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Transform_1_t1823 *, int32_t, PointerEventData_t77 *, const MethodInfo*))Transform_1_Invoke_m11490_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m11521(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1823 *, int32_t, PointerEventData_t77 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11491_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,UnityEngine.EventSystems.PointerEventData,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m11522(__this, ___result, method) (( DictionaryEntry_t1046  (*) (Transform_1_t1823 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11492_gshared)(__this, ___result, method)

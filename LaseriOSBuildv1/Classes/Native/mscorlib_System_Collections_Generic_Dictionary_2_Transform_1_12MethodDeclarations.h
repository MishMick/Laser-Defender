﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>
struct Transform_1_t1875;
// System.Object
struct Object_t;
// UnityEngine.Font
struct Font_t109;
// System.Collections.Generic.List`1<UnityEngine.UI.Text>
struct List_1_t291;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::.ctor(System.Object,System.IntPtr)
// System.Collections.Generic.Dictionary`2/Transform`1<System.Object,System.Object,System.Collections.DictionaryEntry>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Transform_1_10MethodDeclarations.h"
#define Transform_1__ctor_m12173(__this, ___object, ___method, method) (( void (*) (Transform_1_t1875 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m12159_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::Invoke(TKey,TValue)
#define Transform_1_Invoke_m12174(__this, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Transform_1_t1875 *, Font_t109 *, List_1_t291 *, const MethodInfo*))Transform_1_Invoke_m12160_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
#define Transform_1_BeginInvoke_m12175(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1875 *, Font_t109 *, List_1_t291 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m12161_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Font,System.Collections.Generic.List`1<UnityEngine.UI.Text>,System.Collections.DictionaryEntry>::EndInvoke(System.IAsyncResult)
#define Transform_1_EndInvoke_m12176(__this, ___result, method) (( DictionaryEntry_t1046  (*) (Transform_1_t1875 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m12162_gshared)(__this, ___result, method)

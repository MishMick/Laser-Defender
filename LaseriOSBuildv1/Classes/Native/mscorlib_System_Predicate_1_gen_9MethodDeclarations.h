﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Transform>
struct Predicate_1_t1811;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t18;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Transform>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m11207(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1811 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10421_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::Invoke(T)
#define Predicate_1_Invoke_m11208(__this, ___obj, method) (( bool (*) (Predicate_1_t1811 *, Transform_t18 *, const MethodInfo*))Predicate_1_Invoke_m10422_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Transform>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m11209(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1811 *, Transform_t18 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10423_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Transform>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m11210(__this, ___result, method) (( bool (*) (Predicate_1_t1811 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10424_gshared)(__this, ___result, method)

﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.Events.BaseInvokableCall>
struct Predicate_1_t683;
// System.Object
struct Object_t;
// UnityEngine.Events.BaseInvokableCall
struct BaseInvokableCall_t565;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::.ctor(System.Object,System.IntPtr)
// System.Predicate`1<System.Object>
#include "mscorlib_System_Predicate_1_gen_3MethodDeclarations.h"
#define Predicate_1__ctor_m3245(__this, ___object, ___method, method) (( void (*) (Predicate_1_t683 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10421_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::Invoke(T)
#define Predicate_1_Invoke_m16710(__this, ___obj, method) (( bool (*) (Predicate_1_t683 *, BaseInvokableCall_t565 *, const MethodInfo*))Predicate_1_Invoke_m10422_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Predicate_1_BeginInvoke_m16711(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t683 *, BaseInvokableCall_t565 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10423_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.Events.BaseInvokableCall>::EndInvoke(System.IAsyncResult)
#define Predicate_1_EndInvoke_m16712(__this, ___result, method) (( bool (*) (Predicate_1_t683 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10424_gshared)(__this, ___result, method)

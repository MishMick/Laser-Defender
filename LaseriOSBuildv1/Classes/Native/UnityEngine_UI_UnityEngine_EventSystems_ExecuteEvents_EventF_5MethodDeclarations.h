﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>
struct EventFunction_1_t51;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.IPointerClickHandler
struct IPointerClickHandler_t242;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t37;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::.ctor(System.Object,System.IntPtr)
// UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<System.Object>
#include "UnityEngine_UI_UnityEngine_EventSystems_ExecuteEvents_EventF_16MethodDeclarations.h"
#define EventFunction_1__ctor_m1327(__this, ___object, ___method, method) (( void (*) (EventFunction_1_t51 *, Object_t *, IntPtr_t, const MethodInfo*))EventFunction_1__ctor_m10497_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::Invoke(T1,UnityEngine.EventSystems.BaseEventData)
#define EventFunction_1_Invoke_m11096(__this, ___handler, ___eventData, method) (( void (*) (EventFunction_1_t51 *, Object_t *, BaseEventData_t37 *, const MethodInfo*))EventFunction_1_Invoke_m10499_gshared)(__this, ___handler, ___eventData, method)
// System.IAsyncResult UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::BeginInvoke(T1,UnityEngine.EventSystems.BaseEventData,System.AsyncCallback,System.Object)
#define EventFunction_1_BeginInvoke_m11097(__this, ___handler, ___eventData, ___callback, ___object, method) (( Object_t * (*) (EventFunction_1_t51 *, Object_t *, BaseEventData_t37 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))EventFunction_1_BeginInvoke_m10501_gshared)(__this, ___handler, ___eventData, ___callback, ___object, method)
// System.Void UnityEngine.EventSystems.ExecuteEvents/EventFunction`1<UnityEngine.EventSystems.IPointerClickHandler>::EndInvoke(System.IAsyncResult)
#define EventFunction_1_EndInvoke_m11098(__this, ___result, method) (( void (*) (EventFunction_1_t51 *, Object_t *, const MethodInfo*))EventFunction_1_EndInvoke_m10503_gshared)(__this, ___result, method)
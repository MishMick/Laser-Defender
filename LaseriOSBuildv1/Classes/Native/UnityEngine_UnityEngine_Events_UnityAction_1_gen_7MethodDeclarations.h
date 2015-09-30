#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>
struct UnityAction_1_t1808;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t37;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::.ctor(System.Object,System.IntPtr)
// UnityEngine.Events.UnityAction`1<System.Object>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_6MethodDeclarations.h"
#define UnityAction_1__ctor_m11080(__this, ___object, ___method, method) (( void (*) (UnityAction_1_t1808 *, Object_t *, IntPtr_t, const MethodInfo*))UnityAction_1__ctor_m10626_gshared)(__this, ___object, ___method, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::Invoke(T0)
#define UnityAction_1_Invoke_m11081(__this, ___arg0, method) (( void (*) (UnityAction_1_t1808 *, BaseEventData_t37 *, const MethodInfo*))UnityAction_1_Invoke_m10627_gshared)(__this, ___arg0, method)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::BeginInvoke(T0,System.AsyncCallback,System.Object)
#define UnityAction_1_BeginInvoke_m11082(__this, ___arg0, ___callback, ___object, method) (( Object_t * (*) (UnityAction_1_t1808 *, BaseEventData_t37 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))UnityAction_1_BeginInvoke_m10628_gshared)(__this, ___arg0, ___callback, ___object, method)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.EventSystems.BaseEventData>::EndInvoke(System.IAsyncResult)
#define UnityAction_1_EndInvoke_m11083(__this, ___result, method) (( void (*) (UnityAction_1_t1808 *, Object_t *, const MethodInfo*))UnityAction_1_EndInvoke_m10629_gshared)(__this, ___result, method)

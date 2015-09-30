#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Predicate`1<UnityEngine.EventSystems.RaycastResult>
struct Predicate_1_t1791;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::.ctor(System.Object,System.IntPtr)
extern "C" void Predicate_1__ctor_m10870_gshared (Predicate_1_t1791 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m10870(__this, ___object, ___method, method) (( void (*) (Predicate_1_t1791 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m10870_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::Invoke(T)
extern "C" bool Predicate_1_Invoke_m10871_gshared (Predicate_1_t1791 * __this, RaycastResult_t72  ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m10871(__this, ___obj, method) (( bool (*) (Predicate_1_t1791 *, RaycastResult_t72 , const MethodInfo*))Predicate_1_Invoke_m10871_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C" Object_t * Predicate_1_BeginInvoke_m10872_gshared (Predicate_1_t1791 * __this, RaycastResult_t72  ___obj, AsyncCallback_t149 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m10872(__this, ___obj, ___callback, ___object, method) (( Object_t * (*) (Predicate_1_t1791 *, RaycastResult_t72 , AsyncCallback_t149 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m10872_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<UnityEngine.EventSystems.RaycastResult>::EndInvoke(System.IAsyncResult)
extern "C" bool Predicate_1_EndInvoke_m10873_gshared (Predicate_1_t1791 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m10873(__this, ___result, method) (( bool (*) (Predicate_1_t1791 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m10873_gshared)(__this, ___result, method)

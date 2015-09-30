#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2058;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"

// System.Void System.Comparison`1<UnityEngine.UICharInfo>::.ctor(System.Object,System.IntPtr)
extern "C" void Comparison_1__ctor_m14574_gshared (Comparison_1_t2058 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Comparison_1__ctor_m14574(__this, ___object, ___method, method) (( void (*) (Comparison_1_t2058 *, Object_t *, IntPtr_t, const MethodInfo*))Comparison_1__ctor_m14574_gshared)(__this, ___object, ___method, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::Invoke(T,T)
extern "C" int32_t Comparison_1_Invoke_m14575_gshared (Comparison_1_t2058 * __this, UICharInfo_t313  ___x, UICharInfo_t313  ___y, const MethodInfo* method);
#define Comparison_1_Invoke_m14575(__this, ___x, ___y, method) (( int32_t (*) (Comparison_1_t2058 *, UICharInfo_t313 , UICharInfo_t313 , const MethodInfo*))Comparison_1_Invoke_m14575_gshared)(__this, ___x, ___y, method)
// System.IAsyncResult System.Comparison`1<UnityEngine.UICharInfo>::BeginInvoke(T,T,System.AsyncCallback,System.Object)
extern "C" Object_t * Comparison_1_BeginInvoke_m14576_gshared (Comparison_1_t2058 * __this, UICharInfo_t313  ___x, UICharInfo_t313  ___y, AsyncCallback_t149 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Comparison_1_BeginInvoke_m14576(__this, ___x, ___y, ___callback, ___object, method) (( Object_t * (*) (Comparison_1_t2058 *, UICharInfo_t313 , UICharInfo_t313 , AsyncCallback_t149 *, Object_t *, const MethodInfo*))Comparison_1_BeginInvoke_m14576_gshared)(__this, ___x, ___y, ___callback, ___object, method)
// System.Int32 System.Comparison`1<UnityEngine.UICharInfo>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Comparison_1_EndInvoke_m14577_gshared (Comparison_1_t2058 * __this, Object_t * ___result, const MethodInfo* method);
#define Comparison_1_EndInvoke_m14577(__this, ___result, method) (( int32_t (*) (Comparison_1_t2058 *, Object_t *, const MethodInfo*))Comparison_1_EndInvoke_m14577_gshared)(__this, ___result, method)

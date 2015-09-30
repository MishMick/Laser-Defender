#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Func`2<UnityEngine.UI.Toggle,System.Boolean>
struct Func_2_t202;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t199;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::.ctor(System.Object,System.IntPtr)
// System.Func`2<System.Object,System.Boolean>
#include "System_Core_System_Func_2_gen_1MethodDeclarations.h"
#define Func_2__ctor_m1775(__this, ___object, ___method, method) (( void (*) (Func_2_t202 *, Object_t *, IntPtr_t, const MethodInfo*))Func_2__ctor_m13324_gshared)(__this, ___object, ___method, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::Invoke(T)
#define Func_2_Invoke_m13325(__this, ___arg1, method) (( bool (*) (Func_2_t202 *, Toggle_t199 *, const MethodInfo*))Func_2_Invoke_m13326_gshared)(__this, ___arg1, method)
// System.IAsyncResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
#define Func_2_BeginInvoke_m13327(__this, ___arg1, ___callback, ___object, method) (( Object_t * (*) (Func_2_t202 *, Toggle_t199 *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Func_2_BeginInvoke_m13328_gshared)(__this, ___arg1, ___callback, ___object, method)
// TResult System.Func`2<UnityEngine.UI.Toggle,System.Boolean>::EndInvoke(System.IAsyncResult)
#define Func_2_EndInvoke_m13329(__this, ___result, method) (( bool (*) (Func_2_t202 *, Object_t *, const MethodInfo*))Func_2_EndInvoke_m13330_gshared)(__this, ___result, method)

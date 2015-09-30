#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>
struct Transform_1_t2270;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m17121_gshared (Transform_1_t2270 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m17121(__this, ___object, ___method, method) (( void (*) (Transform_1_t2270 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m17121_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m17122_gshared (Transform_1_t2270 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Transform_1_Invoke_m17122(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t2270 *, int32_t, int32_t, const MethodInfo*))Transform_1_Invoke_m17122_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m17123_gshared (Transform_1_t2270 * __this, int32_t ___key, int32_t ___value, AsyncCallback_t149 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m17123(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t2270 *, int32_t, int32_t, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m17123_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Int32,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m17124_gshared (Transform_1_t2270 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m17124(__this, ___result, method) (( int32_t (*) (Transform_1_t2270 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m17124_gshared)(__this, ___result, method)

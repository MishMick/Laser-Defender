#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>
struct Transform_1_t1833;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t148;
// System.AsyncCallback
struct AsyncCallback_t149;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"

// System.Void System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::.ctor(System.Object,System.IntPtr)
extern "C" void Transform_1__ctor_m11462_gshared (Transform_1_t1833 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Transform_1__ctor_m11462(__this, ___object, ___method, method) (( void (*) (Transform_1_t1833 *, Object_t *, IntPtr_t, const MethodInfo*))Transform_1__ctor_m11462_gshared)(__this, ___object, ___method, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::Invoke(TKey,TValue)
extern "C" int32_t Transform_1_Invoke_m11463_gshared (Transform_1_t1833 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Transform_1_Invoke_m11463(__this, ___key, ___value, method) (( int32_t (*) (Transform_1_t1833 *, int32_t, Object_t *, const MethodInfo*))Transform_1_Invoke_m11463_gshared)(__this, ___key, ___value, method)
// System.IAsyncResult System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::BeginInvoke(TKey,TValue,System.AsyncCallback,System.Object)
extern "C" Object_t * Transform_1_BeginInvoke_m11464_gshared (Transform_1_t1833 * __this, int32_t ___key, Object_t * ___value, AsyncCallback_t149 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Transform_1_BeginInvoke_m11464(__this, ___key, ___value, ___callback, ___object, method) (( Object_t * (*) (Transform_1_t1833 *, int32_t, Object_t *, AsyncCallback_t149 *, Object_t *, const MethodInfo*))Transform_1_BeginInvoke_m11464_gshared)(__this, ___key, ___value, ___callback, ___object, method)
// TRet System.Collections.Generic.Dictionary`2/Transform`1<System.Int32,System.Object,System.Int32>::EndInvoke(System.IAsyncResult)
extern "C" int32_t Transform_1_EndInvoke_m11465_gshared (Transform_1_t1833 * __this, Object_t * ___result, const MethodInfo* method);
#define Transform_1_EndInvoke_m11465(__this, ___result, method) (( int32_t (*) (Transform_1_t1833 *, Object_t *, const MethodInfo*))Transform_1_EndInvoke_m11465_gshared)(__this, ___result, method)

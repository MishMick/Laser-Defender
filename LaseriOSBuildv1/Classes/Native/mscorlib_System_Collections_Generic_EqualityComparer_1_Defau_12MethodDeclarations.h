#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2339;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17528_gshared (DefaultComparer_t2339 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17528(__this, method) (( void (*) (DefaultComparer_t2339 *, const MethodInfo*))DefaultComparer__ctor_m17528_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m17529_gshared (DefaultComparer_t2339 * __this, Guid_t660  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m17529(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2339 *, Guid_t660 , const MethodInfo*))DefaultComparer_GetHashCode_m17529_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m17530_gshared (DefaultComparer_t2339 * __this, Guid_t660  ___x, Guid_t660  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m17530(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2339 *, Guid_t660 , Guid_t660 , const MethodInfo*))DefaultComparer_Equals_m17530_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
struct GenericEqualityComparer_1_t1736;
// System.DateTime
#include "mscorlib_System_DateTime.h"

// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern "C" void GenericEqualityComparer_1__ctor_m10225_gshared (GenericEqualityComparer_1_t1736 * __this, const MethodInfo* method);
#define GenericEqualityComparer_1__ctor_m10225(__this, method) (( void (*) (GenericEqualityComparer_1_t1736 *, const MethodInfo*))GenericEqualityComparer_1__ctor_m10225_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern "C" int32_t GenericEqualityComparer_1_GetHashCode_m17483_gshared (GenericEqualityComparer_1_t1736 * __this, DateTime_t375  ___obj, const MethodInfo* method);
#define GenericEqualityComparer_1_GetHashCode_m17483(__this, ___obj, method) (( int32_t (*) (GenericEqualityComparer_1_t1736 *, DateTime_t375 , const MethodInfo*))GenericEqualityComparer_1_GetHashCode_m17483_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern "C" bool GenericEqualityComparer_1_Equals_m17484_gshared (GenericEqualityComparer_1_t1736 * __this, DateTime_t375  ___x, DateTime_t375  ___y, const MethodInfo* method);
#define GenericEqualityComparer_1_Equals_m17484(__this, ___x, ___y, method) (( bool (*) (GenericEqualityComparer_1_t1736 *, DateTime_t375 , DateTime_t375 , const MethodInfo*))GenericEqualityComparer_1_Equals_m17484_gshared)(__this, ___x, ___y, method)

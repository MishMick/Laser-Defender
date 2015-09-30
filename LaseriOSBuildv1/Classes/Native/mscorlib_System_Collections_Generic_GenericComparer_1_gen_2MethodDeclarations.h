#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.GenericComparer`1<System.TimeSpan>
struct GenericComparer_1_t1741;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.GenericComparer`1<System.TimeSpan>::.ctor()
extern "C" void GenericComparer_1__ctor_m10233_gshared (GenericComparer_1_t1741 * __this, const MethodInfo* method);
#define GenericComparer_1__ctor_m10233(__this, method) (( void (*) (GenericComparer_1_t1741 *, const MethodInfo*))GenericComparer_1__ctor_m10233_gshared)(__this, method)
// System.Int32 System.Collections.Generic.GenericComparer`1<System.TimeSpan>::Compare(T,T)
extern "C" int32_t GenericComparer_1_Compare_m17531_gshared (GenericComparer_1_t1741 * __this, TimeSpan_t955  ___x, TimeSpan_t955  ___y, const MethodInfo* method);
#define GenericComparer_1_Compare_m17531(__this, ___x, ___y, method) (( int32_t (*) (GenericComparer_1_t1741 *, TimeSpan_t955 , TimeSpan_t955 , const MethodInfo*))GenericComparer_1_Compare_m17531_gshared)(__this, ___x, ___y, method)

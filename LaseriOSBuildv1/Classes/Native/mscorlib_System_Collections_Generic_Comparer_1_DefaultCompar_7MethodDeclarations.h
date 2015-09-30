#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
struct DefaultComparer_t2337;
// System.Guid
#include "mscorlib_System_Guid.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern "C" void DefaultComparer__ctor_m17519_gshared (DefaultComparer_t2337 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17519(__this, method) (( void (*) (DefaultComparer_t2337 *, const MethodInfo*))DefaultComparer__ctor_m17519_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17520_gshared (DefaultComparer_t2337 * __this, Guid_t660  ___x, Guid_t660  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17520(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2337 *, Guid_t660 , Guid_t660 , const MethodInfo*))DefaultComparer_Compare_m17520_gshared)(__this, ___x, ___y, method)

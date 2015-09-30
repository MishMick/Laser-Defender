#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
struct DefaultComparer_t2333;
// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern "C" void DefaultComparer__ctor_m17498_gshared (DefaultComparer_t2333 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17498(__this, method) (( void (*) (DefaultComparer_t2333 *, const MethodInfo*))DefaultComparer__ctor_m17498_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17499_gshared (DefaultComparer_t2333 * __this, DateTimeOffset_t659  ___x, DateTimeOffset_t659  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17499(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2333 *, DateTimeOffset_t659 , DateTimeOffset_t659 , const MethodInfo*))DefaultComparer_Compare_m17499_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>
struct DefaultComparer_t2341;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::.ctor()
extern "C" void DefaultComparer__ctor_m17536_gshared (DefaultComparer_t2341 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m17536(__this, method) (( void (*) (DefaultComparer_t2341 *, const MethodInfo*))DefaultComparer__ctor_m17536_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.TimeSpan>::Compare(T,T)
extern "C" int32_t DefaultComparer_Compare_m17537_gshared (DefaultComparer_t2341 * __this, TimeSpan_t955  ___x, TimeSpan_t955  ___y, const MethodInfo* method);
#define DefaultComparer_Compare_m17537(__this, ___x, ___y, method) (( int32_t (*) (DefaultComparer_t2341 *, TimeSpan_t955 , TimeSpan_t955 , const MethodInfo*))DefaultComparer_Compare_m17537_gshared)(__this, ___x, ___y, method)

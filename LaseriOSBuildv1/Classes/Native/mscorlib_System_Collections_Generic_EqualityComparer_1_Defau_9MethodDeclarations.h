﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>
struct DefaultComparer_t2256;

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::.ctor()
extern "C" void DefaultComparer__ctor_m16961_gshared (DefaultComparer_t2256 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m16961(__this, method) (( void (*) (DefaultComparer_t2256 *, const MethodInfo*))DefaultComparer__ctor_m16961_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m16962_gshared (DefaultComparer_t2256 * __this, bool ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m16962(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t2256 *, bool, const MethodInfo*))DefaultComparer_GetHashCode_m16962_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Boolean>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m16963_gshared (DefaultComparer_t2256 * __this, bool ___x, bool ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m16963(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t2256 *, bool, bool, const MethodInfo*))DefaultComparer_Equals_m16963_gshared)(__this, ___x, ___y, method)

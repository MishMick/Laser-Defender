#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_t1707;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen.h"

// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern "C" void Nullable_1__ctor_m10228_gshared (Nullable_1_t1707 * __this, TimeSpan_t955  ___value, const MethodInfo* method);
#define Nullable_1__ctor_m10228(__this, ___value, method) (( void (*) (Nullable_1_t1707 *, TimeSpan_t955 , const MethodInfo*))Nullable_1__ctor_m10228_gshared)(__this, ___value, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern "C" bool Nullable_1_get_HasValue_m10229_gshared (Nullable_1_t1707 * __this, const MethodInfo* method);
#define Nullable_1_get_HasValue_m10229(__this, method) (( bool (*) (Nullable_1_t1707 *, const MethodInfo*))Nullable_1_get_HasValue_m10229_gshared)(__this, method)
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern "C" TimeSpan_t955  Nullable_1_get_Value_m10230_gshared (Nullable_1_t1707 * __this, const MethodInfo* method);
#define Nullable_1_get_Value_m10230(__this, method) (( TimeSpan_t955  (*) (Nullable_1_t1707 *, const MethodInfo*))Nullable_1_get_Value_m10230_gshared)(__this, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern "C" bool Nullable_1_Equals_m17510_gshared (Nullable_1_t1707 * __this, Object_t * ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17510(__this, ___other, method) (( bool (*) (Nullable_1_t1707 *, Object_t *, const MethodInfo*))Nullable_1_Equals_m17510_gshared)(__this, ___other, method)
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern "C" bool Nullable_1_Equals_m17511_gshared (Nullable_1_t1707 * __this, Nullable_1_t1707  ___other, const MethodInfo* method);
#define Nullable_1_Equals_m17511(__this, ___other, method) (( bool (*) (Nullable_1_t1707 *, Nullable_1_t1707 , const MethodInfo*))Nullable_1_Equals_m17511_gshared)(__this, ___other, method)
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern "C" int32_t Nullable_1_GetHashCode_m17512_gshared (Nullable_1_t1707 * __this, const MethodInfo* method);
#define Nullable_1_GetHashCode_m17512(__this, method) (( int32_t (*) (Nullable_1_t1707 *, const MethodInfo*))Nullable_1_GetHashCode_m17512_gshared)(__this, method)
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern "C" String_t* Nullable_1_ToString_m17513_gshared (Nullable_1_t1707 * __this, const MethodInfo* method);
#define Nullable_1_ToString_m17513(__this, method) (( String_t* (*) (Nullable_1_t1707 *, const MethodInfo*))Nullable_1_ToString_m17513_gshared)(__this, method)

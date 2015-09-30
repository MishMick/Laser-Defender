#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>
struct InternalEnumerator_1_t2305;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Reflection.Emit.ILGenerator/LabelData
#include "mscorlib_System_Reflection_Emit_ILGenerator_LabelData.h"

// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::.ctor(System.Array)
extern "C" void InternalEnumerator_1__ctor_m17296_gshared (InternalEnumerator_1_t2305 * __this, Array_t * ___array, const MethodInfo* method);
#define InternalEnumerator_1__ctor_m17296(__this, ___array, method) (( void (*) (InternalEnumerator_1_t2305 *, Array_t *, const MethodInfo*))InternalEnumerator_1__ctor_m17296_gshared)(__this, ___array, method)
// System.Object System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17297_gshared (InternalEnumerator_1_t2305 * __this, const MethodInfo* method);
#define InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17297(__this, method) (( Object_t * (*) (InternalEnumerator_1_t2305 *, const MethodInfo*))InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m17297_gshared)(__this, method)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::Dispose()
extern "C" void InternalEnumerator_1_Dispose_m17298_gshared (InternalEnumerator_1_t2305 * __this, const MethodInfo* method);
#define InternalEnumerator_1_Dispose_m17298(__this, method) (( void (*) (InternalEnumerator_1_t2305 *, const MethodInfo*))InternalEnumerator_1_Dispose_m17298_gshared)(__this, method)
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::MoveNext()
extern "C" bool InternalEnumerator_1_MoveNext_m17299_gshared (InternalEnumerator_1_t2305 * __this, const MethodInfo* method);
#define InternalEnumerator_1_MoveNext_m17299(__this, method) (( bool (*) (InternalEnumerator_1_t2305 *, const MethodInfo*))InternalEnumerator_1_MoveNext_m17299_gshared)(__this, method)
// T System.Array/InternalEnumerator`1<System.Reflection.Emit.ILGenerator/LabelData>::get_Current()
extern "C" LabelData_t1263  InternalEnumerator_1_get_Current_m17300_gshared (InternalEnumerator_1_t2305 * __this, const MethodInfo* method);
#define InternalEnumerator_1_get_Current_m17300(__this, method) (( LabelData_t1263  (*) (InternalEnumerator_1_t2305 *, const MethodInfo*))InternalEnumerator_1_get_Current_m17300_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t1893;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1883;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m12167_gshared (ShimEnumerator_t1893 * __this, Dictionary_2_t1883 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m12167(__this, ___host, method) (( void (*) (ShimEnumerator_t1893 *, Dictionary_2_t1883 *, const MethodInfo*))ShimEnumerator__ctor_m12167_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m12168_gshared (ShimEnumerator_t1893 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m12168(__this, method) (( bool (*) (ShimEnumerator_t1893 *, const MethodInfo*))ShimEnumerator_MoveNext_m12168_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m12169_gshared (ShimEnumerator_t1893 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m12169(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t1893 *, const MethodInfo*))ShimEnumerator_get_Entry_m12169_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m12170_gshared (ShimEnumerator_t1893 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m12170(__this, method) (( Object_t * (*) (ShimEnumerator_t1893 *, const MethodInfo*))ShimEnumerator_get_Key_m12170_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m12171_gshared (ShimEnumerator_t1893 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m12171(__this, method) (( Object_t * (*) (ShimEnumerator_t1893 *, const MethodInfo*))ShimEnumerator_get_Value_m12171_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m12172_gshared (ShimEnumerator_t1893 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m12172(__this, method) (( Object_t * (*) (ShimEnumerator_t1893 *, const MethodInfo*))ShimEnumerator_get_Current_m12172_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ShimEnumerator_t2163;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2154;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m16047_gshared (ShimEnumerator_t2163 * __this, Dictionary_2_t2154 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m16047(__this, ___host, method) (( void (*) (ShimEnumerator_t2163 *, Dictionary_2_t2154 *, const MethodInfo*))ShimEnumerator__ctor_m16047_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m16048_gshared (ShimEnumerator_t2163 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m16048(__this, method) (( bool (*) (ShimEnumerator_t2163 *, const MethodInfo*))ShimEnumerator_MoveNext_m16048_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m16049_gshared (ShimEnumerator_t2163 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m16049(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t2163 *, const MethodInfo*))ShimEnumerator_get_Entry_m16049_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m16050_gshared (ShimEnumerator_t2163 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m16050(__this, method) (( Object_t * (*) (ShimEnumerator_t2163 *, const MethodInfo*))ShimEnumerator_get_Key_m16050_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m16051_gshared (ShimEnumerator_t2163 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m16051(__this, method) (( Object_t * (*) (ShimEnumerator_t2163 *, const MethodInfo*))ShimEnumerator_get_Value_m16051_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m16052_gshared (ShimEnumerator_t2163 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m16052(__this, method) (( Object_t * (*) (ShimEnumerator_t2163 *, const MethodInfo*))ShimEnumerator_get_Current_m16052_gshared)(__this, method)

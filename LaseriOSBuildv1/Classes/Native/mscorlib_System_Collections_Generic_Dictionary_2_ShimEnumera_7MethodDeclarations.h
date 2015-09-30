#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>
struct ShimEnumerator_t2274;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t981;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m17152_gshared (ShimEnumerator_t2274 * __this, Dictionary_2_t981 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m17152(__this, ___host, method) (( void (*) (ShimEnumerator_t2274 *, Dictionary_2_t981 *, const MethodInfo*))ShimEnumerator__ctor_m17152_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m17153_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m17153(__this, method) (( bool (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_MoveNext_m17153_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m17154_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m17154(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Entry_m17154_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m17155_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m17155(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Key_m17155_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m17156_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m17156(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Value_m17156_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m17157_gshared (ShimEnumerator_t2274 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m17157(__this, method) (( Object_t * (*) (ShimEnumerator_t2274 *, const MethodInfo*))ShimEnumerator_get_Current_m17157_gshared)(__this, method)

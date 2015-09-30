#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>
struct ShimEnumerator_t1839;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1825;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11502_gshared (ShimEnumerator_t1839 * __this, Dictionary_2_t1825 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11502(__this, ___host, method) (( void (*) (ShimEnumerator_t1839 *, Dictionary_2_t1825 *, const MethodInfo*))ShimEnumerator__ctor_m11502_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11503_gshared (ShimEnumerator_t1839 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11503(__this, method) (( bool (*) (ShimEnumerator_t1839 *, const MethodInfo*))ShimEnumerator_MoveNext_m11503_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m11504_gshared (ShimEnumerator_t1839 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11504(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t1839 *, const MethodInfo*))ShimEnumerator_get_Entry_m11504_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11505_gshared (ShimEnumerator_t1839 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11505(__this, method) (( Object_t * (*) (ShimEnumerator_t1839 *, const MethodInfo*))ShimEnumerator_get_Key_m11505_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11506_gshared (ShimEnumerator_t1839 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11506(__this, method) (( Object_t * (*) (ShimEnumerator_t1839 *, const MethodInfo*))ShimEnumerator_get_Value_m11506_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Int32,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11507_gshared (ShimEnumerator_t1839 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11507(__this, method) (( Object_t * (*) (ShimEnumerator_t1839 *, const MethodInfo*))ShimEnumerator_get_Current_m11507_gshared)(__this, method)

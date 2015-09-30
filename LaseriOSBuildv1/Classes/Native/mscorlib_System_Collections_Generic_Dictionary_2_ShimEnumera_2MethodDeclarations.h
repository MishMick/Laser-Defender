#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>
struct ShimEnumerator_t2082;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2070;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m14902_gshared (ShimEnumerator_t2082 * __this, Dictionary_2_t2070 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m14902(__this, ___host, method) (( void (*) (ShimEnumerator_t2082 *, Dictionary_2_t2070 *, const MethodInfo*))ShimEnumerator__ctor_m14902_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m14903_gshared (ShimEnumerator_t2082 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m14903(__this, method) (( bool (*) (ShimEnumerator_t2082 *, const MethodInfo*))ShimEnumerator_MoveNext_m14903_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m14904_gshared (ShimEnumerator_t2082 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m14904(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t2082 *, const MethodInfo*))ShimEnumerator_get_Entry_m14904_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m14905_gshared (ShimEnumerator_t2082 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m14905(__this, method) (( Object_t * (*) (ShimEnumerator_t2082 *, const MethodInfo*))ShimEnumerator_get_Key_m14905_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m14906_gshared (ShimEnumerator_t2082 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m14906(__this, method) (( Object_t * (*) (ShimEnumerator_t2082 *, const MethodInfo*))ShimEnumerator_get_Value_m14906_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int64>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m14907_gshared (ShimEnumerator_t2082 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m14907(__this, method) (( Object_t * (*) (ShimEnumerator_t2082 *, const MethodInfo*))ShimEnumerator_get_Current_m14907_gshared)(__this, method)

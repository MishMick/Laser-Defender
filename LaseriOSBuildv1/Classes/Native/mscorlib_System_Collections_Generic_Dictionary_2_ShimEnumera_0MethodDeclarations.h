﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>
struct ShimEnumerator_t1868;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1854;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m11840_gshared (ShimEnumerator_t1868 * __this, Dictionary_2_t1854 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m11840(__this, ___host, method) (( void (*) (ShimEnumerator_t1868 *, Dictionary_2_t1854 *, const MethodInfo*))ShimEnumerator__ctor_m11840_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m11841_gshared (ShimEnumerator_t1868 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m11841(__this, method) (( bool (*) (ShimEnumerator_t1868 *, const MethodInfo*))ShimEnumerator_MoveNext_m11841_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m11842_gshared (ShimEnumerator_t1868 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m11842(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t1868 *, const MethodInfo*))ShimEnumerator_get_Entry_m11842_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m11843_gshared (ShimEnumerator_t1868 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m11843(__this, method) (( Object_t * (*) (ShimEnumerator_t1868 *, const MethodInfo*))ShimEnumerator_get_Key_m11843_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m11844_gshared (ShimEnumerator_t1868 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m11844(__this, method) (( Object_t * (*) (ShimEnumerator_t1868 *, const MethodInfo*))ShimEnumerator_get_Value_m11844_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Int32>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m11845_gshared (ShimEnumerator_t1868 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m11845(__this, method) (( Object_t * (*) (ShimEnumerator_t1868 *, const MethodInfo*))ShimEnumerator_get_Current_m11845_gshared)(__this, method)

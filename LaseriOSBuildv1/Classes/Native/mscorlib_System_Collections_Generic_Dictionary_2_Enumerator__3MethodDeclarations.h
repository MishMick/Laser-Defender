#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
struct Enumerator_t1862;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1854;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11793_gshared (Enumerator_t1862 * __this, Dictionary_2_t1854 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11793(__this, ___dictionary, method) (( void (*) (Enumerator_t1862 *, Dictionary_2_t1854 *, const MethodInfo*))Enumerator__ctor_m11793_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11794_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11794(__this, method) (( Object_t * (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11794_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11795_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11795(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11795_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11796_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11796(__this, method) (( Object_t * (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11796_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11797_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11797(__this, method) (( Object_t * (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11797_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11798_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11798(__this, method) (( bool (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_MoveNext_m11798_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t1858  Enumerator_get_Current_m11799_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11799(__this, method) (( KeyValuePair_2_t1858  (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_get_Current_m11799_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m11800_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11800(__this, method) (( Object_t * (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_get_CurrentKey_m11800_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m11801_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11801(__this, method) (( int32_t (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_get_CurrentValue_m11801_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m11802_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11802(__this, method) (( void (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_VerifyState_m11802_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11803_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11803(__this, method) (( void (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_VerifyCurrent_m11803_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m11804_gshared (Enumerator_t1862 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11804(__this, method) (( void (*) (Enumerator_t1862 *, const MethodInfo*))Enumerator_Dispose_m11804_gshared)(__this, method)

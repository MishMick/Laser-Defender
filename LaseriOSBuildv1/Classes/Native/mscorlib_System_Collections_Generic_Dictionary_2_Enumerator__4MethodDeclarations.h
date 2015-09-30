#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t1888;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1883;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m12124_gshared (Enumerator_t1888 * __this, Dictionary_2_t1883 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m12124(__this, ___dictionary, method) (( void (*) (Enumerator_t1888 *, Dictionary_2_t1883 *, const MethodInfo*))Enumerator__ctor_m12124_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m12125_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m12125(__this, method) (( Object_t * (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m12125_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12126_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12126(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m12126_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12127_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12127(__this, method) (( Object_t * (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m12127_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12128_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12128(__this, method) (( Object_t * (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m12128_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m12129_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m12129(__this, method) (( bool (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_MoveNext_m12129_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1884  Enumerator_get_Current_m12130_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m12130(__this, method) (( KeyValuePair_2_t1884  (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_get_Current_m12130_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m12131_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m12131(__this, method) (( Object_t * (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_get_CurrentKey_m12131_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m12132_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m12132(__this, method) (( Object_t * (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_get_CurrentValue_m12132_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m12133_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m12133(__this, method) (( void (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_VerifyState_m12133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m12134_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m12134(__this, method) (( void (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_VerifyCurrent_m12134_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m12135_gshared (Enumerator_t1888 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m12135(__this, method) (( void (*) (Enumerator_t1888 *, const MethodInfo*))Enumerator_Dispose_m12135_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
struct Enumerator_t1832;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1825;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m11450_gshared (Enumerator_t1832 * __this, Dictionary_2_t1825 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m11450(__this, ___dictionary, method) (( void (*) (Enumerator_t1832 *, Dictionary_2_t1825 *, const MethodInfo*))Enumerator__ctor_m11450_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m11451_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m11451(__this, method) (( Object_t * (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m11451_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11452_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11452(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m11452_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11453_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11453(__this, method) (( Object_t * (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m11453_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11454_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11454(__this, method) (( Object_t * (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m11454_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m11455_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m11455(__this, method) (( bool (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_MoveNext_m11455_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1826  Enumerator_get_Current_m11456_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m11456(__this, method) (( KeyValuePair_2_t1826  (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_get_Current_m11456_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m11457_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m11457(__this, method) (( int32_t (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_get_CurrentKey_m11457_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m11458_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m11458(__this, method) (( Object_t * (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_get_CurrentValue_m11458_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m11459_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m11459(__this, method) (( void (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_VerifyState_m11459_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m11460_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m11460(__this, method) (( void (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_VerifyCurrent_m11460_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m11461_gshared (Enumerator_t1832 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m11461(__this, method) (( void (*) (Enumerator_t1832 *, const MethodInfo*))Enumerator_Dispose_m11461_gshared)(__this, method)

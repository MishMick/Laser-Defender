#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>
struct Enumerator_t2076;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int64>
struct Dictionary_2_t2070;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m14855_gshared (Enumerator_t2076 * __this, Dictionary_2_t2070 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m14855(__this, ___dictionary, method) (( void (*) (Enumerator_t2076 *, Dictionary_2_t2070 *, const MethodInfo*))Enumerator__ctor_m14855_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m14856_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m14856(__this, method) (( Object_t * (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m14856_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14857_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14857(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m14857_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14858_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14858(__this, method) (( Object_t * (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m14858_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14859_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14859(__this, method) (( Object_t * (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m14859_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::MoveNext()
extern "C" bool Enumerator_MoveNext_m14860_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m14860(__this, method) (( bool (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_MoveNext_m14860_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_Current()
extern "C" KeyValuePair_2_t2071  Enumerator_get_Current_m14861_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m14861(__this, method) (( KeyValuePair_2_t2071  (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_get_Current_m14861_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m14862_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m14862(__this, method) (( Object_t * (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_get_CurrentKey_m14862_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::get_CurrentValue()
extern "C" int64_t Enumerator_get_CurrentValue_m14863_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m14863(__this, method) (( int64_t (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_get_CurrentValue_m14863_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyState()
extern "C" void Enumerator_VerifyState_m14864_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m14864(__this, method) (( void (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_VerifyState_m14864_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m14865_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m14865(__this, method) (( void (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_VerifyCurrent_m14865_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int64>::Dispose()
extern "C" void Enumerator_Dispose_m14866_gshared (Enumerator_t2076 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m14866(__this, method) (( void (*) (Enumerator_t2076 *, const MethodInfo*))Enumerator_Dispose_m14866_gshared)(__this, method)

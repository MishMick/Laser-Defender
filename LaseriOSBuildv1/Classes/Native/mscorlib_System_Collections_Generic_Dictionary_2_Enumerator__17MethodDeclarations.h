#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Enumerator_t2157;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct Dictionary_2_t2154;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_18.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16000_gshared (Enumerator_t2157 * __this, Dictionary_2_t2154 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16000(__this, ___dictionary, method) (( void (*) (Enumerator_t2157 *, Dictionary_2_t2154 *, const MethodInfo*))Enumerator__ctor_m16000_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16001_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16001(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16001_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16002_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16002(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16002_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16003_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16003(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16003_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16004_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16004(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16004_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16005_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16005(__this, method) (( bool (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_MoveNext_m16005_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Current()
extern "C" KeyValuePair_2_t2128  Enumerator_get_Current_m16006_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16006(__this, method) (( KeyValuePair_2_t2128  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_Current_m16006_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16007_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16007(__this, method) (( Object_t * (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_CurrentKey_m16007_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_CurrentValue()
extern "C" KeyValuePair_2_t1884  Enumerator_get_CurrentValue_m16008_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16008(__this, method) (( KeyValuePair_2_t1884  (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_get_CurrentValue_m16008_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyState()
extern "C" void Enumerator_VerifyState_m16009_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16009(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_VerifyState_m16009_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16010_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16010(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_VerifyCurrent_m16010_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Dispose()
extern "C" void Enumerator_Dispose_m16011_gshared (Enumerator_t2157 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16011(__this, method) (( void (*) (Enumerator_t2157 *, const MethodInfo*))Enumerator_Dispose_m16011_gshared)(__this, method)

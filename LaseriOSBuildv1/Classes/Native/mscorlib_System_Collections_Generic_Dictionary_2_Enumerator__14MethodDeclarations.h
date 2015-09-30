#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Enumerator_t2113;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2107;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<UnityEngine.Networking.Types.NetworkID,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_16.h"
// UnityEngine.Networking.Types.NetworkID
#include "UnityEngine_UnityEngine_Networking_Types_NetworkID.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m15289_gshared (Enumerator_t2113 * __this, Dictionary_2_t2107 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m15289(__this, ___dictionary, method) (( void (*) (Enumerator_t2113 *, Dictionary_2_t2107 *, const MethodInfo*))Enumerator__ctor_m15289_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m15290_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m15290(__this, method) (( Object_t * (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m15290_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15291_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15291(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m15291_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15292_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15292(__this, method) (( Object_t * (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m15292_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15293_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15293(__this, method) (( Object_t * (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m15293_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m15294_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m15294(__this, method) (( bool (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_MoveNext_m15294_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" KeyValuePair_2_t2108  Enumerator_get_Current_m15295_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m15295(__this, method) (( KeyValuePair_2_t2108  (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_get_Current_m15295_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentKey()
extern "C" uint64_t Enumerator_get_CurrentKey_m15296_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m15296(__this, method) (( uint64_t (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_get_CurrentKey_m15296_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m15297_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m15297(__this, method) (( Object_t * (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_get_CurrentValue_m15297_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m15298_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m15298(__this, method) (( void (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_VerifyState_m15298_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m15299_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m15299(__this, method) (( void (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_VerifyCurrent_m15299_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m15300_gshared (Enumerator_t2113 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m15300(__this, method) (( void (*) (Enumerator_t2113 *, const MethodInfo*))Enumerator_Dispose_m15300_gshared)(__this, method)

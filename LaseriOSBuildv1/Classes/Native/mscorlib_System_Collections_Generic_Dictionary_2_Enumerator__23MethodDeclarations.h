#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
struct Enumerator_t2269;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t981;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m17109_gshared (Enumerator_t2269 * __this, Dictionary_2_t981 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m17109(__this, ___dictionary, method) (( void (*) (Enumerator_t2269 *, Dictionary_2_t981 *, const MethodInfo*))Enumerator__ctor_m17109_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m17110_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m17110(__this, method) (( Object_t * (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m17110_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17111_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17111(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m17111_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17112_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17112(__this, method) (( Object_t * (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m17112_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17113_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17113(__this, method) (( Object_t * (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m17113_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::MoveNext()
extern "C" bool Enumerator_MoveNext_m17114_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m17114(__this, method) (( bool (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_MoveNext_m17114_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_Current()
extern "C" KeyValuePair_2_t2265  Enumerator_get_Current_m17115_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m17115(__this, method) (( KeyValuePair_2_t2265  (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_get_Current_m17115_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m17116_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m17116(__this, method) (( int32_t (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_get_CurrentKey_m17116_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m17117_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m17117(__this, method) (( int32_t (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_get_CurrentValue_m17117_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyState()
extern "C" void Enumerator_VerifyState_m17118_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m17118(__this, method) (( void (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_VerifyState_m17118_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m17119_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m17119(__this, method) (( void (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_VerifyCurrent_m17119_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>::Dispose()
extern "C" void Enumerator_Dispose_m17120_gshared (Enumerator_t2269 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m17120(__this, method) (( void (*) (Enumerator_t2269 *, const MethodInfo*))Enumerator_Dispose_m17120_gshared)(__this, method)

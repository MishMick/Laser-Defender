#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>
struct Enumerator_t2247;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t2241;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_25.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16900_gshared (Enumerator_t2247 * __this, Dictionary_2_t2241 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16900(__this, ___dictionary, method) (( void (*) (Enumerator_t2247 *, Dictionary_2_t2241 *, const MethodInfo*))Enumerator__ctor_m16900_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16901_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16901(__this, method) (( Object_t * (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16901_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16902_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16902(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16902_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16903_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16903(__this, method) (( Object_t * (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16903_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16904_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16904(__this, method) (( Object_t * (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16904_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16905_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16905(__this, method) (( bool (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_MoveNext_m16905_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t2242  Enumerator_get_Current_m16906_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16906(__this, method) (( KeyValuePair_2_t2242  (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_get_Current_m16906_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16907_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16907(__this, method) (( Object_t * (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_get_CurrentKey_m16907_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m16908_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16908(__this, method) (( bool (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_get_CurrentValue_m16908_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m16909_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16909(__this, method) (( void (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_VerifyState_m16909_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16910_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16910(__this, method) (( void (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_VerifyCurrent_m16910_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m16911_gshared (Enumerator_t2247 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16911(__this, method) (( void (*) (Enumerator_t2247 *, const MethodInfo*))Enumerator_Dispose_m16911_gshared)(__this, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Enumerator_t2196;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,UnityEngine.TextEditor/TextEditOp>
struct Dictionary_2_t2190;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,UnityEngine.TextEditor/TextEditOp>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_23.h"
// UnityEngine.TextEditor/TextEditOp
#include "UnityEngine_UnityEngine_TextEditor_TextEditOp.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m16395_gshared (Enumerator_t2196 * __this, Dictionary_2_t2190 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m16395(__this, ___dictionary, method) (( void (*) (Enumerator_t2196 *, Dictionary_2_t2190 *, const MethodInfo*))Enumerator__ctor_m16395_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m16396_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m16396(__this, method) (( Object_t * (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m16396_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1046  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16397_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16397(__this, method) (( DictionaryEntry_t1046  (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m16397_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16398_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16398(__this, method) (( Object_t * (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m16398_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16399_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16399(__this, method) (( Object_t * (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m16399_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::MoveNext()
extern "C" bool Enumerator_MoveNext_m16400_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m16400(__this, method) (( bool (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_MoveNext_m16400_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_Current()
extern "C" KeyValuePair_2_t2191  Enumerator_get_Current_m16401_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m16401(__this, method) (( KeyValuePair_2_t2191  (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_get_Current_m16401_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m16402_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m16402(__this, method) (( Object_t * (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_get_CurrentKey_m16402_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::get_CurrentValue()
extern "C" int32_t Enumerator_get_CurrentValue_m16403_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m16403(__this, method) (( int32_t (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_get_CurrentValue_m16403_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyState()
extern "C" void Enumerator_VerifyState_m16404_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m16404(__this, method) (( void (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_VerifyState_m16404_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m16405_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m16405(__this, method) (( void (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_VerifyCurrent_m16405_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,UnityEngine.TextEditor/TextEditOp>::Dispose()
extern "C" void Enumerator_Dispose_m16406_gshared (Enumerator_t2196 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m16406(__this, method) (( void (*) (Enumerator_t2196 *, const MethodInfo*))Enumerator_Dispose_m16406_gshared)(__this, method)

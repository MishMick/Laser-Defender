#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>
struct ShimEnumerator_t2119;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<UnityEngine.Networking.Types.NetworkID,System.Object>
struct Dictionary_2_t2107;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ShimEnumerator__ctor_m15336_gshared (ShimEnumerator_t2119 * __this, Dictionary_2_t2107 * ___host, const MethodInfo* method);
#define ShimEnumerator__ctor_m15336(__this, ___host, method) (( void (*) (ShimEnumerator_t2119 *, Dictionary_2_t2107 *, const MethodInfo*))ShimEnumerator__ctor_m15336_gshared)(__this, ___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::MoveNext()
extern "C" bool ShimEnumerator_MoveNext_m15337_gshared (ShimEnumerator_t2119 * __this, const MethodInfo* method);
#define ShimEnumerator_MoveNext_m15337(__this, method) (( bool (*) (ShimEnumerator_t2119 *, const MethodInfo*))ShimEnumerator_MoveNext_m15337_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Entry()
extern "C" DictionaryEntry_t1046  ShimEnumerator_get_Entry_m15338_gshared (ShimEnumerator_t2119 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Entry_m15338(__this, method) (( DictionaryEntry_t1046  (*) (ShimEnumerator_t2119 *, const MethodInfo*))ShimEnumerator_get_Entry_m15338_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Key()
extern "C" Object_t * ShimEnumerator_get_Key_m15339_gshared (ShimEnumerator_t2119 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Key_m15339(__this, method) (( Object_t * (*) (ShimEnumerator_t2119 *, const MethodInfo*))ShimEnumerator_get_Key_m15339_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Value()
extern "C" Object_t * ShimEnumerator_get_Value_m15340_gshared (ShimEnumerator_t2119 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Value_m15340(__this, method) (( Object_t * (*) (ShimEnumerator_t2119 *, const MethodInfo*))ShimEnumerator_get_Value_m15340_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<UnityEngine.Networking.Types.NetworkID,System.Object>::get_Current()
extern "C" Object_t * ShimEnumerator_get_Current_m15341_gshared (ShimEnumerator_t2119 * __this, const MethodInfo* method);
#define ShimEnumerator_get_Current_m15341(__this, method) (( Object_t * (*) (ShimEnumerator_t2119 *, const MethodInfo*))ShimEnumerator_get_Current_m15341_gshared)(__this, method)

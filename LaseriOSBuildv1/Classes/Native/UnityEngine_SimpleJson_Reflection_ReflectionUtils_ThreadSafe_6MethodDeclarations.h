#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>
struct ThreadSafeDictionary_2_t2132;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t600;
// System.Object
struct Object_t;
// SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<System.Object,System.Object>
struct ThreadSafeDictionaryValueFactory_2_t2130;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2152;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2401;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"

// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::.ctor(SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionaryValueFactory`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2__ctor_m15542_gshared (ThreadSafeDictionary_2_t2132 * __this, ThreadSafeDictionaryValueFactory_2_t2130 * ___valueFactory, const MethodInfo* method);
#define ThreadSafeDictionary_2__ctor_m15542(__this, ___valueFactory, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, ThreadSafeDictionaryValueFactory_2_t2130 *, const MethodInfo*))ThreadSafeDictionary_2__ctor_m15542_gshared)(__this, ___valueFactory, method)
// System.Collections.IEnumerator SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m15544_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m15544(__this, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_System_Collections_IEnumerable_GetEnumerator_m15544_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Get(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_Get_m15546_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_Get_m15546(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Get_m15546_gshared)(__this, ___key, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::AddValue(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_AddValue_m15548_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_AddValue_m15548(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_AddValue_m15548_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_Add_m15550_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m15550(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_Add_m15550_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TKey> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Keys()
extern "C" Object_t* ThreadSafeDictionary_2_get_Keys_m15552_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Keys_m15552(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Keys_m15552_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool ThreadSafeDictionary_2_TryGetValue_m15554_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_TryGetValue_m15554(__this, ___key, ___value, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t **, const MethodInfo*))ThreadSafeDictionary_2_TryGetValue_m15554_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.ICollection`1<TValue> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Values()
extern "C" Object_t* ThreadSafeDictionary_2_get_Values_m15556_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Values_m15556(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Values_m15556_gshared)(__this, method)
// TValue SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * ThreadSafeDictionary_2_get_Item_m15558_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Item_m15558(__this, ___key, method) (( Object_t * (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_get_Item_m15558_gshared)(__this, ___key, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void ThreadSafeDictionary_2_set_Item_m15560_gshared (ThreadSafeDictionary_2_t2132 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define ThreadSafeDictionary_2_set_Item_m15560(__this, ___key, ___value, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, Object_t *, Object_t *, const MethodInfo*))ThreadSafeDictionary_2_set_Item_m15560_gshared)(__this, ___key, ___value, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void ThreadSafeDictionary_2_Add_m15562_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t1884  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Add_m15562(__this, ___item, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t1884 , const MethodInfo*))ThreadSafeDictionary_2_Add_m15562_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Clear()
extern "C" void ThreadSafeDictionary_2_Clear_m15564_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_Clear_m15564(__this, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_Clear_m15564_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Contains_m15566_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t1884  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Contains_m15566(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t1884 , const MethodInfo*))ThreadSafeDictionary_2_Contains_m15566_gshared)(__this, ___item, method)
// System.Void SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void ThreadSafeDictionary_2_CopyTo_m15568_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define ThreadSafeDictionary_2_CopyTo_m15568(__this, ___array, ___arrayIndex, method) (( void (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))ThreadSafeDictionary_2_CopyTo_m15568_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t ThreadSafeDictionary_2_get_Count_m15570_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_Count_m15570(__this, method) (( int32_t (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_Count_m15570_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::get_IsReadOnly()
extern "C" bool ThreadSafeDictionary_2_get_IsReadOnly_m15572_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_get_IsReadOnly_m15572(__this, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_get_IsReadOnly_m15572_gshared)(__this, method)
// System.Boolean SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool ThreadSafeDictionary_2_Remove_m15574_gshared (ThreadSafeDictionary_2_t2132 * __this, KeyValuePair_2_t1884  ___item, const MethodInfo* method);
#define ThreadSafeDictionary_2_Remove_m15574(__this, ___item, method) (( bool (*) (ThreadSafeDictionary_2_t2132 *, KeyValuePair_2_t1884 , const MethodInfo*))ThreadSafeDictionary_2_Remove_m15574_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> SimpleJson.Reflection.ReflectionUtils/ThreadSafeDictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Object_t* ThreadSafeDictionary_2_GetEnumerator_m15576_gshared (ThreadSafeDictionary_2_t2132 * __this, const MethodInfo* method);
#define ThreadSafeDictionary_2_GetEnumerator_m15576(__this, method) (( Object_t* (*) (ThreadSafeDictionary_2_t2132 *, const MethodInfo*))ThreadSafeDictionary_2_GetEnumerator_m15576_gshared)(__this, method)

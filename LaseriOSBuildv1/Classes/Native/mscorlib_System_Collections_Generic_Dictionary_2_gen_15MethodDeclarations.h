﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1854;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t600;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2369;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t1860;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1864;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1856;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2384;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2385;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>
struct IEnumerator_1_t2386;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1045;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__3.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m11713_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11713(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2__ctor_m11713_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11714_gshared (Dictionary_2_t1854 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11714(__this, ___comparer, method) (( void (*) (Dictionary_2_t1854 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11714_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11715_gshared (Dictionary_2_t1854 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11715(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1854 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11715_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11716_gshared (Dictionary_2_t1854 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11716(__this, ___capacity, method) (( void (*) (Dictionary_2_t1854 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11716_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11717_gshared (Dictionary_2_t1854 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11717(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1854 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11717_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11718_gshared (Dictionary_2_t1854 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11718(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1854 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2__ctor_m11718_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11719_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11719(__this, method) (( Object_t* (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11719_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11720_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11720(__this, method) (( Object_t* (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11720_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11721_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11721(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11721_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11722_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11722(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11722_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11723_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11723(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11723_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11724_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11724(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11724_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11725_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11725(__this, ___key, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11725_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11726_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11726(__this, method) (( bool (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11726_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11727_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11727(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11727_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11728_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11728(__this, method) (( bool (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11728_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11729_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1858  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11729(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1858 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11729_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11730_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1858  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11730(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1858 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11730_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11731_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2U5BU5D_t2385* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11731(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2U5BU5D_t2385*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11731_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11732_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1858  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11732(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1858 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11732_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11733_gshared (Dictionary_2_t1854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11733(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11733_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11734_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11734(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11734_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11735_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11735(__this, method) (( Object_t* (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11735_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11736_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11736(__this, method) (( Object_t * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11736_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11737_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11737(__this, method) (( int32_t (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_get_Count_m11737_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m11738_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11738(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m11738_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11739_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11739(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_set_Item_m11739_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11740_gshared (Dictionary_2_t1854 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11740(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1854 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11740_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11741_gshared (Dictionary_2_t1854 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11741(__this, ___size, method) (( void (*) (Dictionary_2_t1854 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11741_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11742_gshared (Dictionary_2_t1854 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11742(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11742_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1858  Dictionary_2_make_pair_m11743_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11743(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1858  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_make_pair_m11743_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m11744_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11744(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_key_m11744_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m11745_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11745(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_pick_value_m11745_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11746_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2U5BU5D_t2385* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11746(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1854 *, KeyValuePair_2U5BU5D_t2385*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11746_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m11747_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11747(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_Resize_m11747_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11748_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11748(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, int32_t, const MethodInfo*))Dictionary_2_Add_m11748_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m11749_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11749(__this, method) (( void (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_Clear_m11749_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11750_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11750(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m11750_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11751_gshared (Dictionary_2_t1854 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11751(__this, ___value, method) (( bool (*) (Dictionary_2_t1854 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m11751_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11752_gshared (Dictionary_2_t1854 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11752(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1854 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2_GetObjectData_m11752_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11753_gshared (Dictionary_2_t1854 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11753(__this, ___sender, method) (( void (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11753_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11754_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11754(__this, ___key, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m11754_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11755_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11755(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1854 *, Object_t *, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m11755_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Keys()
extern "C" KeyCollection_t1860 * Dictionary_2_get_Keys_m11756_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11756(__this, method) (( KeyCollection_t1860 * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_get_Keys_m11756_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::get_Values()
extern "C" ValueCollection_t1864 * Dictionary_2_get_Values_m11757_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11757(__this, method) (( ValueCollection_t1864 * (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_get_Values_m11757_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m11758_gshared (Dictionary_2_t1854 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11758(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11758_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m11759_gshared (Dictionary_2_t1854 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11759(__this, ___value, method) (( int32_t (*) (Dictionary_2_t1854 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11759_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11760_gshared (Dictionary_2_t1854 * __this, KeyValuePair_2_t1858  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11760(__this, ___pair, method) (( bool (*) (Dictionary_2_t1854 *, KeyValuePair_2_t1858 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11760_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1862  Dictionary_2_GetEnumerator_m11761_gshared (Dictionary_2_t1854 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11761(__this, method) (( Enumerator_t1862  (*) (Dictionary_2_t1854 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11761_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1046  Dictionary_2_U3CCopyToU3Em__0_m11762_gshared (Object_t * __this /* static, unused */, Object_t * ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11762(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Object_t * /* static, unused */, Object_t *, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11762_gshared)(__this /* static, unused */, ___key, ___value, method)

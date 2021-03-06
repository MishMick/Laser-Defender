﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1825;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2369;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1830;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1834;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1822;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t2374;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2375;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>
struct IEnumerator_1_t2376;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1045;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_4.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__2.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11313_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11313(__this, method) (( void (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2__ctor_m11313_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11315_gshared (Dictionary_2_t1825 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11315(__this, ___comparer, method) (( void (*) (Dictionary_2_t1825 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11315_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11317_gshared (Dictionary_2_t1825 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11317(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1825 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11317_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11319_gshared (Dictionary_2_t1825 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11319(__this, ___capacity, method) (( void (*) (Dictionary_2_t1825 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11319_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11321_gshared (Dictionary_2_t1825 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11321(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1825 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11321_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11323_gshared (Dictionary_2_t1825 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11323(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1825 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2__ctor_m11323_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11325_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11325(__this, method) (( Object_t* (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11325_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11327_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11327(__this, method) (( Object_t* (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11327_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11329_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11329(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11329_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11331_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11331(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1825 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11331_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11333_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11333(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1825 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11333_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11335_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11335(__this, ___key, method) (( bool (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11335_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11337_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11337(__this, ___key, method) (( void (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11337_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11339_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11339(__this, method) (( bool (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11339_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11341_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11341(__this, method) (( Object_t * (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11341_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11343_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11343(__this, method) (( bool (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11343_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11345_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2_t1826  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11345(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1825 *, KeyValuePair_2_t1826 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11345_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11347_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2_t1826  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11347(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1825 *, KeyValuePair_2_t1826 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11347_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11349_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2U5BU5D_t2375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11349(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1825 *, KeyValuePair_2U5BU5D_t2375*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11349_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11351_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2_t1826  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11351(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1825 *, KeyValuePair_2_t1826 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11351_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11353_gshared (Dictionary_2_t1825 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11353(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1825 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11353_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11355_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11355(__this, method) (( Object_t * (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11355_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11357_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11357(__this, method) (( Object_t* (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11357_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11359_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11359(__this, method) (( Object_t * (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11359_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11361_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11361(__this, method) (( int32_t (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_get_Count_m11361_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m11363_gshared (Dictionary_2_t1825 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m11363(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1825 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m11363_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m11365_gshared (Dictionary_2_t1825 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m11365(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1825 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m11365_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m11367_gshared (Dictionary_2_t1825 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m11367(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1825 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m11367_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m11369_gshared (Dictionary_2_t1825 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m11369(__this, ___size, method) (( void (*) (Dictionary_2_t1825 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m11369_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m11371_gshared (Dictionary_2_t1825 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m11371(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1825 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m11371_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1826  Dictionary_2_make_pair_m11373_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m11373(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1826  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m11373_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m11375_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m11375(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m11375_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m11377_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m11377(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m11377_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m11379_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2U5BU5D_t2375* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m11379(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1825 *, KeyValuePair_2U5BU5D_t2375*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m11379_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m11381_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m11381(__this, method) (( void (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_Resize_m11381_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m11383_gshared (Dictionary_2_t1825 * __this, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m11383(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1825 *, int32_t, Object_t *, const MethodInfo*))Dictionary_2_Add_m11383_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m11385_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m11385(__this, method) (( void (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_Clear_m11385_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m11387_gshared (Dictionary_2_t1825 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m11387(__this, ___key, method) (( bool (*) (Dictionary_2_t1825 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m11387_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m11389_gshared (Dictionary_2_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m11389(__this, ___value, method) (( bool (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m11389_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m11391_gshared (Dictionary_2_t1825 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m11391(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1825 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2_GetObjectData_m11391_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m11393_gshared (Dictionary_2_t1825 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m11393(__this, ___sender, method) (( void (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m11393_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m11395_gshared (Dictionary_2_t1825 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m11395(__this, ___key, method) (( bool (*) (Dictionary_2_t1825 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m11395_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m11397_gshared (Dictionary_2_t1825 * __this, int32_t ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m11397(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1825 *, int32_t, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m11397_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Keys()
extern "C" KeyCollection_t1830 * Dictionary_2_get_Keys_m11399_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m11399(__this, method) (( KeyCollection_t1830 * (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_get_Keys_m11399_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
extern "C" ValueCollection_t1834 * Dictionary_2_get_Values_m11400_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m11400(__this, method) (( ValueCollection_t1834 * (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_get_Values_m11400_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m11402_gshared (Dictionary_2_t1825 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m11402(__this, ___key, method) (( int32_t (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m11402_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m11404_gshared (Dictionary_2_t1825 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m11404(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1825 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m11404_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m11406_gshared (Dictionary_2_t1825 * __this, KeyValuePair_2_t1826  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m11406(__this, ___pair, method) (( bool (*) (Dictionary_2_t1825 *, KeyValuePair_2_t1826 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m11406_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::GetEnumerator()
extern "C" Enumerator_t1832  Dictionary_2_GetEnumerator_m11407_gshared (Dictionary_2_t1825 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m11407(__this, method) (( Enumerator_t1832  (*) (Dictionary_2_t1825 *, const MethodInfo*))Dictionary_2_GetEnumerator_m11407_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1046  Dictionary_2_U3CCopyToU3Em__0_m11409_gshared (Object_t * __this /* static, unused */, int32_t ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m11409(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Object_t * /* static, unused */, int32_t, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m11409_gshared)(__this /* static, unused */, ___key, ___value, method)

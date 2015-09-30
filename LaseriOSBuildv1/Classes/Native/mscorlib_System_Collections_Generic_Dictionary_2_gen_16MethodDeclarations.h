#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1883;
// System.Collections.Generic.ICollection`1<System.Object>
struct ICollection_1_t600;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t1886;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t1890;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1856;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2400;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t2152;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEnumerator_1_t2401;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1045;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_6.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__4.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor()
extern "C" void Dictionary_2__ctor_m11951_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m11951(__this, method) (( void (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2__ctor_m11951_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11953_gshared (Dictionary_2_t1883 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11953(__this, ___comparer, method) (( void (*) (Dictionary_2_t1883 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11953_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m11955_gshared (Dictionary_2_t1883 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m11955(__this, ___dictionary, method) (( void (*) (Dictionary_2_t1883 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11955_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m11957_gshared (Dictionary_2_t1883 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m11957(__this, ___capacity, method) (( void (*) (Dictionary_2_t1883 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m11957_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m11959_gshared (Dictionary_2_t1883 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m11959(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t1883 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m11959_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m11961_gshared (Dictionary_2_t1883 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m11961(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1883 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2__ctor_m11961_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11963_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11963(__this, method) (( Object_t* (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m11963_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11965_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11965(__this, method) (( Object_t* (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m11965_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m11967_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m11967(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m11967_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m11969_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m11969(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m11969_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m11971_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m11971(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m11971_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m11973_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m11973(__this, ___key, method) (( bool (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m11973_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m11975_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m11975(__this, ___key, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m11975_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11977_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11977(__this, method) (( bool (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m11977_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11979_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11979(__this, method) (( Object_t * (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m11979_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11981_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11981(__this, method) (( bool (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m11981_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11983_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2_t1884  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11983(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t1883 *, KeyValuePair_2_t1884 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m11983_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11985_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2_t1884  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11985(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1883 *, KeyValuePair_2_t1884 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m11985_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11987_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11987(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1883 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m11987_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11989_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2_t1884  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11989(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t1883 *, KeyValuePair_2_t1884 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m11989_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m11991_gshared (Dictionary_2_t1883 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m11991(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1883 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m11991_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11993_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11993(__this, method) (( Object_t * (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m11993_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11995_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11995(__this, method) (( Object_t* (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m11995_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Object,System.Object>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11997_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11997(__this, method) (( Object_t * (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m11997_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m11999_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m11999(__this, method) (( int32_t (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_get_Count_m11999_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
extern "C" Object_t * Dictionary_2_get_Item_m12001_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m12001(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_get_Item_m12001_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m12003_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m12003(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_set_Item_m12003_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m12005_gshared (Dictionary_2_t1883 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m12005(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t1883 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m12005_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m12007_gshared (Dictionary_2_t1883 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m12007(__this, ___size, method) (( void (*) (Dictionary_2_t1883 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m12007_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m12009_gshared (Dictionary_2_t1883 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m12009(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1883 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m12009_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t1884  Dictionary_2_make_pair_m12011_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m12011(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t1884  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_make_pair_m12011_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_key(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_key_m12013_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m12013(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_key_m12013_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::pick_value(TKey,TValue)
extern "C" Object_t * Dictionary_2_pick_value_m12015_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m12015(__this /* static, unused */, ___key, ___value, method) (( Object_t * (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_pick_value_m12015_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m12017_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2U5BU5D_t2152* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m12017(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t1883 *, KeyValuePair_2U5BU5D_t2152*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m12017_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Resize()
extern "C" void Dictionary_2_Resize_m12019_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m12019(__this, method) (( void (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_Resize_m12019_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m12021_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_Add_m12021(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_Add_m12021_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Clear()
extern "C" void Dictionary_2_Clear_m12023_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m12023(__this, method) (( void (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_Clear_m12023_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m12025_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m12025(__this, ___key, method) (( bool (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsKey_m12025_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m12027_gshared (Dictionary_2_t1883 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m12027(__this, ___value, method) (( bool (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_ContainsValue_m12027_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m12029_gshared (Dictionary_2_t1883 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m12029(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t1883 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2_GetObjectData_m12029_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m12031_gshared (Dictionary_2_t1883 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m12031(__this, ___sender, method) (( void (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m12031_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m12033_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m12033(__this, ___key, method) (( bool (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_Remove_m12033_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m12035_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, Object_t ** ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m12035(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t1883 *, Object_t *, Object_t **, const MethodInfo*))Dictionary_2_TryGetValue_m12035_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
extern "C" KeyCollection_t1886 * Dictionary_2_get_Keys_m12037_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m12037(__this, method) (( KeyCollection_t1886 * (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_get_Keys_m12037_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
extern "C" ValueCollection_t1890 * Dictionary_2_get_Values_m12039_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m12039(__this, method) (( ValueCollection_t1890 * (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_get_Values_m12039_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTKey(System.Object)
extern "C" Object_t * Dictionary_2_ToTKey_m12041_gshared (Dictionary_2_t1883 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m12041(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m12041_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ToTValue(System.Object)
extern "C" Object_t * Dictionary_2_ToTValue_m12043_gshared (Dictionary_2_t1883 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m12043(__this, ___value, method) (( Object_t * (*) (Dictionary_2_t1883 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m12043_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m12045_gshared (Dictionary_2_t1883 * __this, KeyValuePair_2_t1884  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m12045(__this, ___pair, method) (( bool (*) (Dictionary_2_t1883 *, KeyValuePair_2_t1884 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m12045_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
extern "C" Enumerator_t1888  Dictionary_2_GetEnumerator_m12047_gshared (Dictionary_2_t1883 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m12047(__this, method) (( Enumerator_t1888  (*) (Dictionary_2_t1883 *, const MethodInfo*))Dictionary_2_GetEnumerator_m12047_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Object,System.Object>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1046  Dictionary_2_U3CCopyToU3Em__0_m12049_gshared (Object_t * __this /* static, unused */, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m12049(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Object_t * /* static, unused */, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m12049_gshared)(__this /* static, unused */, ___key, ___value, method)

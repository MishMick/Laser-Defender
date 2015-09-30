#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t981;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t2369;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.Int32>
struct KeyCollection_t2267;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Int32>
struct ValueCollection_t2271;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t1822;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Int32>
struct IDictionary_2_t2586;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>[]
struct KeyValuePair_2U5BU5D_t2587;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>>
struct IEnumerator_1_t2588;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1045;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_27.h"
// System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Int32>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__23.h"
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor()
extern "C" void Dictionary_2__ctor_m17029_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2__ctor_m17029(__this, method) (( void (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2__ctor_m17029_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17030_gshared (Dictionary_2_t981 * __this, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17030(__this, ___comparer, method) (( void (*) (Dictionary_2_t981 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17030_gshared)(__this, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C" void Dictionary_2__ctor_m17031_gshared (Dictionary_2_t981 * __this, Object_t* ___dictionary, const MethodInfo* method);
#define Dictionary_2__ctor_m17031(__this, ___dictionary, method) (( void (*) (Dictionary_2_t981 *, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17031_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Int32)
extern "C" void Dictionary_2__ctor_m17032_gshared (Dictionary_2_t981 * __this, int32_t ___capacity, const MethodInfo* method);
#define Dictionary_2__ctor_m17032(__this, ___capacity, method) (( void (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2__ctor_m17032_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2__ctor_m17033_gshared (Dictionary_2_t981 * __this, Object_t* ___dictionary, Object_t* ___comparer, const MethodInfo* method);
#define Dictionary_2__ctor_m17033(__this, ___dictionary, ___comparer, method) (( void (*) (Dictionary_2_t981 *, Object_t*, Object_t*, const MethodInfo*))Dictionary_2__ctor_m17033_gshared)(__this, ___dictionary, ___comparer, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2__ctor_m17034_gshared (Dictionary_2_t981 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2__ctor_m17034(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t981 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2__ctor_m17034_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.ICollection`1<TKey> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Keys()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17035_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17035(__this, method) (( Object_t* (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Keys_m17035_gshared)(__this, method)
// System.Collections.Generic.ICollection`1<TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IDictionary<TKey,TValue>.get_Values()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17036_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17036(__this, method) (( Object_t* (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IDictionaryU3CTKeyU2CTValueU3E_get_Values_m17036_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.get_Item(System.Object)
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_get_Item_m17037_gshared (Dictionary_2_t981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_get_Item_m17037(__this, ___key, method) (( Object_t * (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_get_Item_m17037_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.set_Item(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_set_Item_m17038_gshared (Dictionary_2_t981 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_set_Item_m17038(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t981 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_set_Item_m17038_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Add(System.Object,System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Add_m17039_gshared (Dictionary_2_t981 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Add_m17039(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t981 *, Object_t *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Add_m17039_gshared)(__this, ___key, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Contains(System.Object)
extern "C" bool Dictionary_2_System_Collections_IDictionary_Contains_m17040_gshared (Dictionary_2_t981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Contains_m17040(__this, ___key, method) (( bool (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Contains_m17040_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.Remove(System.Object)
extern "C" void Dictionary_2_System_Collections_IDictionary_Remove_m17041_gshared (Dictionary_2_t981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_Remove_m17041(__this, ___key, method) (( void (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_Remove_m17041_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17042_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17042(__this, method) (( bool (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_IsSynchronized_m17042_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17043_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17043(__this, method) (( Object_t * (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_ICollection_get_SyncRoot_m17043_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.get_IsReadOnly()
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17044_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17044(__this, method) (( bool (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_get_IsReadOnly_m17044_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Add(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17045_gshared (Dictionary_2_t981 * __this, KeyValuePair_2_t2265  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17045(__this, ___keyValuePair, method) (( void (*) (Dictionary_2_t981 *, KeyValuePair_2_t2265 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Add_m17045_gshared)(__this, ___keyValuePair, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Contains(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17046_gshared (Dictionary_2_t981 * __this, KeyValuePair_2_t2265  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17046(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t981 *, KeyValuePair_2_t2265 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Contains_m17046_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17047_gshared (Dictionary_2_t981 * __this, KeyValuePair_2U5BU5D_t2587* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17047(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t981 *, KeyValuePair_2U5BU5D_t2587*, int32_t, const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_CopyTo_m17047_gshared)(__this, ___array, ___index, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.ICollection<System.Collections.Generic.KeyValuePair<TKey,TValue>>.Remove(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17048_gshared (Dictionary_2_t981 * __this, KeyValuePair_2_t2265  ___keyValuePair, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17048(__this, ___keyValuePair, method) (( bool (*) (Dictionary_2_t981 *, KeyValuePair_2_t2265 , const MethodInfo*))Dictionary_2_System_Collections_Generic_ICollectionU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_Remove_m17048_gshared)(__this, ___keyValuePair, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Dictionary_2_System_Collections_ICollection_CopyTo_m17049_gshared (Dictionary_2_t981 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_System_Collections_ICollection_CopyTo_m17049(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t981 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_System_Collections_ICollection_CopyTo_m17049_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17050_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17050(__this, method) (( Object_t * (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_IEnumerable_GetEnumerator_m17050_gshared)(__this, method)
// System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.Generic.IEnumerable<System.Collections.Generic.KeyValuePair<TKey,TValue>>.GetEnumerator()
extern "C" Object_t* Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17051_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17051(__this, method) (( Object_t* (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_Generic_IEnumerableU3CSystem_Collections_Generic_KeyValuePairU3CTKeyU2CTValueU3EU3E_GetEnumerator_m17051_gshared)(__this, method)
// System.Collections.IDictionaryEnumerator System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::System.Collections.IDictionary.GetEnumerator()
extern "C" Object_t * Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17052_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17052(__this, method) (( Object_t * (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_System_Collections_IDictionary_GetEnumerator_m17052_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Count()
extern "C" int32_t Dictionary_2_get_Count_m17053_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Count_m17053(__this, method) (( int32_t (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_get_Count_m17053_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Item(TKey)
extern "C" int32_t Dictionary_2_get_Item_m17054_gshared (Dictionary_2_t981 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_get_Item_m17054(__this, ___key, method) (( int32_t (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2_get_Item_m17054_gshared)(__this, ___key, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::set_Item(TKey,TValue)
extern "C" void Dictionary_2_set_Item_m17055_gshared (Dictionary_2_t981 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_set_Item_m17055(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t981 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_set_Item_m17055_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<TKey>)
extern "C" void Dictionary_2_Init_m17056_gshared (Dictionary_2_t981 * __this, int32_t ___capacity, Object_t* ___hcp, const MethodInfo* method);
#define Dictionary_2_Init_m17056(__this, ___capacity, ___hcp, method) (( void (*) (Dictionary_2_t981 *, int32_t, Object_t*, const MethodInfo*))Dictionary_2_Init_m17056_gshared)(__this, ___capacity, ___hcp, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::InitArrays(System.Int32)
extern "C" void Dictionary_2_InitArrays_m17057_gshared (Dictionary_2_t981 * __this, int32_t ___size, const MethodInfo* method);
#define Dictionary_2_InitArrays_m17057(__this, ___size, method) (( void (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2_InitArrays_m17057_gshared)(__this, ___size, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyToCheck(System.Array,System.Int32)
extern "C" void Dictionary_2_CopyToCheck_m17058_gshared (Dictionary_2_t981 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyToCheck_m17058(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t981 *, Array_t *, int32_t, const MethodInfo*))Dictionary_2_CopyToCheck_m17058_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::make_pair(TKey,TValue)
extern "C" KeyValuePair_2_t2265  Dictionary_2_make_pair_m17059_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_make_pair_m17059(__this /* static, unused */, ___key, ___value, method) (( KeyValuePair_2_t2265  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_make_pair_m17059_gshared)(__this /* static, unused */, ___key, ___value, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_key(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_key_m17060_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_key_m17060(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_key_m17060_gshared)(__this /* static, unused */, ___key, ___value, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::pick_value(TKey,TValue)
extern "C" int32_t Dictionary_2_pick_value_m17061_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_pick_value_m17061(__this /* static, unused */, ___key, ___value, method) (( int32_t (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_pick_value_m17061_gshared)(__this /* static, unused */, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::CopyTo(System.Collections.Generic.KeyValuePair`2<TKey,TValue>[],System.Int32)
extern "C" void Dictionary_2_CopyTo_m17062_gshared (Dictionary_2_t981 * __this, KeyValuePair_2U5BU5D_t2587* ___array, int32_t ___index, const MethodInfo* method);
#define Dictionary_2_CopyTo_m17062(__this, ___array, ___index, method) (( void (*) (Dictionary_2_t981 *, KeyValuePair_2U5BU5D_t2587*, int32_t, const MethodInfo*))Dictionary_2_CopyTo_m17062_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Resize()
extern "C" void Dictionary_2_Resize_m17063_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_Resize_m17063(__this, method) (( void (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_Resize_m17063_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Add(TKey,TValue)
extern "C" void Dictionary_2_Add_m17064_gshared (Dictionary_2_t981 * __this, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_Add_m17064(__this, ___key, ___value, method) (( void (*) (Dictionary_2_t981 *, int32_t, int32_t, const MethodInfo*))Dictionary_2_Add_m17064_gshared)(__this, ___key, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Clear()
extern "C" void Dictionary_2_Clear_m17065_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_Clear_m17065(__this, method) (( void (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_Clear_m17065_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKey(TKey)
extern "C" bool Dictionary_2_ContainsKey_m17066_gshared (Dictionary_2_t981 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_ContainsKey_m17066(__this, ___key, method) (( bool (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2_ContainsKey_m17066_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsValue(TValue)
extern "C" bool Dictionary_2_ContainsValue_m17067_gshared (Dictionary_2_t981 * __this, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_ContainsValue_m17067(__this, ___value, method) (( bool (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2_ContainsValue_m17067_gshared)(__this, ___value, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Dictionary_2_GetObjectData_m17068_gshared (Dictionary_2_t981 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method);
#define Dictionary_2_GetObjectData_m17068(__this, ___info, ___context, method) (( void (*) (Dictionary_2_t981 *, SerializationInfo_t612 *, StreamingContext_t613 , const MethodInfo*))Dictionary_2_GetObjectData_m17068_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::OnDeserialization(System.Object)
extern "C" void Dictionary_2_OnDeserialization_m17069_gshared (Dictionary_2_t981 * __this, Object_t * ___sender, const MethodInfo* method);
#define Dictionary_2_OnDeserialization_m17069(__this, ___sender, method) (( void (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_OnDeserialization_m17069_gshared)(__this, ___sender, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::Remove(TKey)
extern "C" bool Dictionary_2_Remove_m17070_gshared (Dictionary_2_t981 * __this, int32_t ___key, const MethodInfo* method);
#define Dictionary_2_Remove_m17070(__this, ___key, method) (( bool (*) (Dictionary_2_t981 *, int32_t, const MethodInfo*))Dictionary_2_Remove_m17070_gshared)(__this, ___key, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::TryGetValue(TKey,TValue&)
extern "C" bool Dictionary_2_TryGetValue_m17071_gshared (Dictionary_2_t981 * __this, int32_t ___key, int32_t* ___value, const MethodInfo* method);
#define Dictionary_2_TryGetValue_m17071(__this, ___key, ___value, method) (( bool (*) (Dictionary_2_t981 *, int32_t, int32_t*, const MethodInfo*))Dictionary_2_TryGetValue_m17071_gshared)(__this, ___key, ___value, method)
// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Keys()
extern "C" KeyCollection_t2267 * Dictionary_2_get_Keys_m17072_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Keys_m17072(__this, method) (( KeyCollection_t2267 * (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_get_Keys_m17072_gshared)(__this, method)
// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::get_Values()
extern "C" ValueCollection_t2271 * Dictionary_2_get_Values_m17073_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_get_Values_m17073(__this, method) (( ValueCollection_t2271 * (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_get_Values_m17073_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTKey(System.Object)
extern "C" int32_t Dictionary_2_ToTKey_m17074_gshared (Dictionary_2_t981 * __this, Object_t * ___key, const MethodInfo* method);
#define Dictionary_2_ToTKey_m17074(__this, ___key, method) (( int32_t (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_ToTKey_m17074_gshared)(__this, ___key, method)
// TValue System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ToTValue(System.Object)
extern "C" int32_t Dictionary_2_ToTValue_m17075_gshared (Dictionary_2_t981 * __this, Object_t * ___value, const MethodInfo* method);
#define Dictionary_2_ToTValue_m17075(__this, ___value, method) (( int32_t (*) (Dictionary_2_t981 *, Object_t *, const MethodInfo*))Dictionary_2_ToTValue_m17075_gshared)(__this, ___value, method)
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::ContainsKeyValuePair(System.Collections.Generic.KeyValuePair`2<TKey,TValue>)
extern "C" bool Dictionary_2_ContainsKeyValuePair_m17076_gshared (Dictionary_2_t981 * __this, KeyValuePair_2_t2265  ___pair, const MethodInfo* method);
#define Dictionary_2_ContainsKeyValuePair_m17076(__this, ___pair, method) (( bool (*) (Dictionary_2_t981 *, KeyValuePair_2_t2265 , const MethodInfo*))Dictionary_2_ContainsKeyValuePair_m17076_gshared)(__this, ___pair, method)
// System.Collections.Generic.Dictionary`2/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::GetEnumerator()
extern "C" Enumerator_t2269  Dictionary_2_GetEnumerator_m17077_gshared (Dictionary_2_t981 * __this, const MethodInfo* method);
#define Dictionary_2_GetEnumerator_m17077(__this, method) (( Enumerator_t2269  (*) (Dictionary_2_t981 *, const MethodInfo*))Dictionary_2_GetEnumerator_m17077_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>::<CopyTo>m__0(TKey,TValue)
extern "C" DictionaryEntry_t1046  Dictionary_2_U3CCopyToU3Em__0_m17078_gshared (Object_t * __this /* static, unused */, int32_t ___key, int32_t ___value, const MethodInfo* method);
#define Dictionary_2_U3CCopyToU3Em__0_m17078(__this /* static, unused */, ___key, ___value, method) (( DictionaryEntry_t1046  (*) (Object_t * /* static, unused */, int32_t, int32_t, const MethodInfo*))Dictionary_2_U3CCopyToU3Em__0_m17078_gshared)(__this /* static, unused */, ___key, ___value, method)

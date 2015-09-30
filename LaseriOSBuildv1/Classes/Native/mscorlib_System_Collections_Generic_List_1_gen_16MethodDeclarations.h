#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.RectTransform>
struct List_1_t220;
// System.Object
struct Object_t;
// UnityEngine.RectTransform
struct RectTransform_t116;
// System.Collections.Generic.IEnumerator`1<UnityEngine.RectTransform>
struct IEnumerator_1_t2442;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.RectTransform>
struct ICollection_1_t2443;
// System.Collections.Generic.IEnumerable`1<UnityEngine.RectTransform>
struct IEnumerable_1_t2444;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.RectTransform>
struct ReadOnlyCollection_1_t1976;
// UnityEngine.RectTransform[]
struct RectTransformU5BU5D_t1974;
// System.Predicate`1<UnityEngine.RectTransform>
struct Predicate_1_t1977;
// System.Comparison`1<UnityEngine.RectTransform>
struct Comparison_1_t1979;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.RectTransform>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_20.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1803(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.ctor(System.Int32)
#define List_1__ctor_m13338(__this, ___capacity, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::.cctor()
#define List_1__cctor_m13339(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13340(__this, method) (( Object_t* (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13341(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t220 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13342(__this, method) (( Object_t * (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13343(__this, ___item, method) (( int32_t (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13344(__this, ___item, method) (( bool (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10248_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13345(__this, ___item, method) (( int32_t (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13346(__this, ___index, ___item, method) (( void (*) (List_1_t220 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10252_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13347(__this, ___item, method) (( void (*) (List_1_t220 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13348(__this, method) (( bool (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13349(__this, method) (( bool (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10258_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13350(__this, method) (( Object_t * (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13351(__this, method) (( bool (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13352(__this, method) (( bool (*) (List_1_t220 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10264_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13353(__this, ___index, method) (( Object_t * (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13354(__this, ___index, ___value, method) (( void (*) (List_1_t220 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Add(T)
#define List_1_Add_m13355(__this, ___item, method) (( void (*) (List_1_t220 *, RectTransform_t116 *, const MethodInfo*))List_1_Add_m10270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13356(__this, ___newCount, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10272_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13357(__this, ___collection, method) (( void (*) (List_1_t220 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13358(__this, ___enumerable, method) (( void (*) (List_1_t220 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13359(__this, ___collection, method) (( void (*) (List_1_t220 *, Object_t*, const MethodInfo*))List_1_AddRange_m10278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::AsReadOnly()
#define List_1_AsReadOnly_m13360(__this, method) (( ReadOnlyCollection_1_t1976 * (*) (List_1_t220 *, const MethodInfo*))List_1_AsReadOnly_m10280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Clear()
#define List_1_Clear_m13361(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1_Clear_m10282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Contains(T)
#define List_1_Contains_m13362(__this, ___item, method) (( bool (*) (List_1_t220 *, RectTransform_t116 *, const MethodInfo*))List_1_Contains_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13363(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t220 *, RectTransformU5BU5D_t1974*, int32_t, const MethodInfo*))List_1_CopyTo_m10286_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::Find(System.Predicate`1<T>)
#define List_1_Find_m13364(__this, ___match, method) (( RectTransform_t116 * (*) (List_1_t220 *, Predicate_1_t1977 *, const MethodInfo*))List_1_Find_m10288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13365(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1977 *, const MethodInfo*))List_1_CheckMatch_m10290_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13366(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t220 *, int32_t, int32_t, Predicate_1_t1977 *, const MethodInfo*))List_1_GetIndex_m10292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.RectTransform>::GetEnumerator()
#define List_1_GetEnumerator_m13367(__this, method) (( Enumerator_t1978  (*) (List_1_t220 *, const MethodInfo*))List_1_GetEnumerator_m10294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::IndexOf(T)
#define List_1_IndexOf_m13368(__this, ___item, method) (( int32_t (*) (List_1_t220 *, RectTransform_t116 *, const MethodInfo*))List_1_IndexOf_m10296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13369(__this, ___start, ___delta, method) (( void (*) (List_1_t220 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13370(__this, ___index, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Insert(System.Int32,T)
#define List_1_Insert_m13371(__this, ___index, ___item, method) (( void (*) (List_1_t220 *, int32_t, RectTransform_t116 *, const MethodInfo*))List_1_Insert_m10302_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13372(__this, ___collection, method) (( void (*) (List_1_t220 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10304_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.RectTransform>::Remove(T)
#define List_1_Remove_m13373(__this, ___item, method) (( bool (*) (List_1_t220 *, RectTransform_t116 *, const MethodInfo*))List_1_Remove_m10306_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13374(__this, ___match, method) (( int32_t (*) (List_1_t220 *, Predicate_1_t1977 *, const MethodInfo*))List_1_RemoveAll_m10308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13375(__this, ___index, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Reverse()
#define List_1_Reverse_m13376(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1_Reverse_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort()
#define List_1_Sort_m13377(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1_Sort_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13378(__this, ___comparison, method) (( void (*) (List_1_t220 *, Comparison_1_t1979 *, const MethodInfo*))List_1_Sort_m10316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.RectTransform>::ToArray()
#define List_1_ToArray_m13379(__this, method) (( RectTransformU5BU5D_t1974* (*) (List_1_t220 *, const MethodInfo*))List_1_ToArray_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::TrimExcess()
#define List_1_TrimExcess_m13380(__this, method) (( void (*) (List_1_t220 *, const MethodInfo*))List_1_TrimExcess_m10320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Capacity()
#define List_1_get_Capacity_m13381(__this, method) (( int32_t (*) (List_1_t220 *, const MethodInfo*))List_1_get_Capacity_m10322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13382(__this, ___value, method) (( void (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Count()
#define List_1_get_Count_m13383(__this, method) (( int32_t (*) (List_1_t220 *, const MethodInfo*))List_1_get_Count_m10326_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.RectTransform>::get_Item(System.Int32)
#define List_1_get_Item_m13384(__this, ___index, method) (( RectTransform_t116 * (*) (List_1_t220 *, int32_t, const MethodInfo*))List_1_get_Item_m10328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.RectTransform>::set_Item(System.Int32,T)
#define List_1_set_Item_m13385(__this, ___index, ___value, method) (( void (*) (List_1_t220 *, int32_t, RectTransform_t116 *, const MethodInfo*))List_1_set_Item_m10330_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UI.Toggle>
struct List_1_t200;
// System.Object
struct Object_t;
// UnityEngine.UI.Toggle
struct Toggle_t199;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Toggle>
struct IEnumerator_1_t2440;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.UI.Toggle>
struct ICollection_1_t2441;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UI.Toggle>
struct IEnumerable_1_t265;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UI.Toggle>
struct ReadOnlyCollection_1_t1969;
// UnityEngine.UI.Toggle[]
struct ToggleU5BU5D_t1967;
// System.Predicate`1<UnityEngine.UI.Toggle>
struct Predicate_1_t201;
// System.Comparison`1<UnityEngine.UI.Toggle>
struct Comparison_1_t1971;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UI.Toggle>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_19.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1770(__this, method) (( void (*) (List_1_t200 *, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.ctor(System.Int32)
#define List_1__ctor_m13234(__this, ___capacity, method) (( void (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::.cctor()
#define List_1__cctor_m13235(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m13236(__this, method) (( Object_t* (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m13237(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t200 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m13238(__this, method) (( Object_t * (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m13239(__this, ___item, method) (( int32_t (*) (List_1_t200 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m13240(__this, ___item, method) (( bool (*) (List_1_t200 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10248_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m13241(__this, ___item, method) (( int32_t (*) (List_1_t200 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m13242(__this, ___index, ___item, method) (( void (*) (List_1_t200 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10252_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m13243(__this, ___item, method) (( void (*) (List_1_t200 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m13244(__this, method) (( bool (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m13245(__this, method) (( bool (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10258_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m13246(__this, method) (( Object_t * (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m13247(__this, method) (( bool (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m13248(__this, method) (( bool (*) (List_1_t200 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10264_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m13249(__this, ___index, method) (( Object_t * (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m13250(__this, ___index, ___value, method) (( void (*) (List_1_t200 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Add(T)
#define List_1_Add_m13251(__this, ___item, method) (( void (*) (List_1_t200 *, Toggle_t199 *, const MethodInfo*))List_1_Add_m10270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m13252(__this, ___newCount, method) (( void (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10272_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m13253(__this, ___collection, method) (( void (*) (List_1_t200 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m13254(__this, ___enumerable, method) (( void (*) (List_1_t200 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m13255(__this, ___collection, method) (( void (*) (List_1_t200 *, Object_t*, const MethodInfo*))List_1_AddRange_m10278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::AsReadOnly()
#define List_1_AsReadOnly_m13256(__this, method) (( ReadOnlyCollection_1_t1969 * (*) (List_1_t200 *, const MethodInfo*))List_1_AsReadOnly_m10280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Clear()
#define List_1_Clear_m13257(__this, method) (( void (*) (List_1_t200 *, const MethodInfo*))List_1_Clear_m10282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Contains(T)
#define List_1_Contains_m13258(__this, ___item, method) (( bool (*) (List_1_t200 *, Toggle_t199 *, const MethodInfo*))List_1_Contains_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m13259(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t200 *, ToggleU5BU5D_t1967*, int32_t, const MethodInfo*))List_1_CopyTo_m10286_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Find(System.Predicate`1<T>)
#define List_1_Find_m1774(__this, ___match, method) (( Toggle_t199 * (*) (List_1_t200 *, Predicate_1_t201 *, const MethodInfo*))List_1_Find_m10288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m13260(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t201 *, const MethodInfo*))List_1_CheckMatch_m10290_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m13261(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t200 *, int32_t, int32_t, Predicate_1_t201 *, const MethodInfo*))List_1_GetIndex_m10292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::GetEnumerator()
#define List_1_GetEnumerator_m13262(__this, method) (( Enumerator_t1970  (*) (List_1_t200 *, const MethodInfo*))List_1_GetEnumerator_m10294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::IndexOf(T)
#define List_1_IndexOf_m13263(__this, ___item, method) (( int32_t (*) (List_1_t200 *, Toggle_t199 *, const MethodInfo*))List_1_IndexOf_m10296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m13264(__this, ___start, ___delta, method) (( void (*) (List_1_t200 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m13265(__this, ___index, method) (( void (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Insert(System.Int32,T)
#define List_1_Insert_m13266(__this, ___index, ___item, method) (( void (*) (List_1_t200 *, int32_t, Toggle_t199 *, const MethodInfo*))List_1_Insert_m10302_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m13267(__this, ___collection, method) (( void (*) (List_1_t200 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10304_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Remove(T)
#define List_1_Remove_m13268(__this, ___item, method) (( bool (*) (List_1_t200 *, Toggle_t199 *, const MethodInfo*))List_1_Remove_m10306_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m13269(__this, ___match, method) (( int32_t (*) (List_1_t200 *, Predicate_1_t201 *, const MethodInfo*))List_1_RemoveAll_m10308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m13270(__this, ___index, method) (( void (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Reverse()
#define List_1_Reverse_m13271(__this, method) (( void (*) (List_1_t200 *, const MethodInfo*))List_1_Reverse_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort()
#define List_1_Sort_m13272(__this, method) (( void (*) (List_1_t200 *, const MethodInfo*))List_1_Sort_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m13273(__this, ___comparison, method) (( void (*) (List_1_t200 *, Comparison_1_t1971 *, const MethodInfo*))List_1_Sort_m10316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::ToArray()
#define List_1_ToArray_m13274(__this, method) (( ToggleU5BU5D_t1967* (*) (List_1_t200 *, const MethodInfo*))List_1_ToArray_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::TrimExcess()
#define List_1_TrimExcess_m13275(__this, method) (( void (*) (List_1_t200 *, const MethodInfo*))List_1_TrimExcess_m10320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Capacity()
#define List_1_get_Capacity_m13276(__this, method) (( int32_t (*) (List_1_t200 *, const MethodInfo*))List_1_get_Capacity_m10322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m13277(__this, ___value, method) (( void (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Count()
#define List_1_get_Count_m13278(__this, method) (( int32_t (*) (List_1_t200 *, const MethodInfo*))List_1_get_Count_m10326_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::get_Item(System.Int32)
#define List_1_get_Item_m13279(__this, ___index, method) (( Toggle_t199 * (*) (List_1_t200 *, int32_t, const MethodInfo*))List_1_get_Item_m10328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Toggle>::set_Item(System.Int32,T)
#define List_1_set_Item_m13280(__this, ___index, ___value, method) (( void (*) (List_1_t200 *, int32_t, Toggle_t199 *, const MethodInfo*))List_1_set_Item_m10330_gshared)(__this, ___index, ___value, method)

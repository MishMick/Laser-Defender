﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct List_1_t44;
// System.Object
struct Object_t;
// UnityEngine.EventSystems.EventTrigger/Entry
struct Entry_t43;
// System.Collections.Generic.IEnumerator`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerator_1_t2361;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ICollection_1_t2362;
// System.Collections.Generic.IEnumerable`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct IEnumerable_1_t2363;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct ReadOnlyCollection_1_t1802;
// UnityEngine.EventSystems.EventTrigger/Entry[]
struct EntryU5BU5D_t1800;
// System.Predicate`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Predicate_1_t1803;
// System.Comparison`1<UnityEngine.EventSystems.EventTrigger/Entry>
struct Comparison_1_t1805;
// System.Collections.Generic.List`1/Enumerator<UnityEngine.EventSystems.EventTrigger/Entry>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_8.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m1318(__this, method) (( void (*) (List_1_t44 *, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.ctor(System.Int32)
#define List_1__ctor_m10972(__this, ___capacity, method) (( void (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::.cctor()
#define List_1__cctor_m10973(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10974(__this, method) (( Object_t* (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m10975(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t44 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m10976(__this, method) (( Object_t * (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m10977(__this, ___item, method) (( int32_t (*) (List_1_t44 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m10978(__this, ___item, method) (( bool (*) (List_1_t44 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10248_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m10979(__this, ___item, method) (( int32_t (*) (List_1_t44 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m10980(__this, ___index, ___item, method) (( void (*) (List_1_t44 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10252_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m10981(__this, ___item, method) (( void (*) (List_1_t44 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10982(__this, method) (( bool (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m10983(__this, method) (( bool (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10258_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m10984(__this, method) (( Object_t * (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m10985(__this, method) (( bool (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m10986(__this, method) (( bool (*) (List_1_t44 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10264_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m10987(__this, ___index, method) (( Object_t * (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m10988(__this, ___index, ___value, method) (( void (*) (List_1_t44 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Add(T)
#define List_1_Add_m10989(__this, ___item, method) (( void (*) (List_1_t44 *, Entry_t43 *, const MethodInfo*))List_1_Add_m10270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m10990(__this, ___newCount, method) (( void (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10272_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m10991(__this, ___collection, method) (( void (*) (List_1_t44 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m10992(__this, ___enumerable, method) (( void (*) (List_1_t44 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m10993(__this, ___collection, method) (( void (*) (List_1_t44 *, Object_t*, const MethodInfo*))List_1_AddRange_m10278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::AsReadOnly()
#define List_1_AsReadOnly_m10994(__this, method) (( ReadOnlyCollection_1_t1802 * (*) (List_1_t44 *, const MethodInfo*))List_1_AsReadOnly_m10280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Clear()
#define List_1_Clear_m10995(__this, method) (( void (*) (List_1_t44 *, const MethodInfo*))List_1_Clear_m10282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Contains(T)
#define List_1_Contains_m10996(__this, ___item, method) (( bool (*) (List_1_t44 *, Entry_t43 *, const MethodInfo*))List_1_Contains_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m10997(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t44 *, EntryU5BU5D_t1800*, int32_t, const MethodInfo*))List_1_CopyTo_m10286_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Find(System.Predicate`1<T>)
#define List_1_Find_m10998(__this, ___match, method) (( Entry_t43 * (*) (List_1_t44 *, Predicate_1_t1803 *, const MethodInfo*))List_1_Find_m10288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m10999(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1803 *, const MethodInfo*))List_1_CheckMatch_m10290_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m11000(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t44 *, int32_t, int32_t, Predicate_1_t1803 *, const MethodInfo*))List_1_GetIndex_m10292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::GetEnumerator()
#define List_1_GetEnumerator_m11001(__this, method) (( Enumerator_t1804  (*) (List_1_t44 *, const MethodInfo*))List_1_GetEnumerator_m10294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::IndexOf(T)
#define List_1_IndexOf_m11002(__this, ___item, method) (( int32_t (*) (List_1_t44 *, Entry_t43 *, const MethodInfo*))List_1_IndexOf_m10296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m11003(__this, ___start, ___delta, method) (( void (*) (List_1_t44 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m11004(__this, ___index, method) (( void (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Insert(System.Int32,T)
#define List_1_Insert_m11005(__this, ___index, ___item, method) (( void (*) (List_1_t44 *, int32_t, Entry_t43 *, const MethodInfo*))List_1_Insert_m10302_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m11006(__this, ___collection, method) (( void (*) (List_1_t44 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10304_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Remove(T)
#define List_1_Remove_m11007(__this, ___item, method) (( bool (*) (List_1_t44 *, Entry_t43 *, const MethodInfo*))List_1_Remove_m10306_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m11008(__this, ___match, method) (( int32_t (*) (List_1_t44 *, Predicate_1_t1803 *, const MethodInfo*))List_1_RemoveAll_m10308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m11009(__this, ___index, method) (( void (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Reverse()
#define List_1_Reverse_m11010(__this, method) (( void (*) (List_1_t44 *, const MethodInfo*))List_1_Reverse_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort()
#define List_1_Sort_m11011(__this, method) (( void (*) (List_1_t44 *, const MethodInfo*))List_1_Sort_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m11012(__this, ___comparison, method) (( void (*) (List_1_t44 *, Comparison_1_t1805 *, const MethodInfo*))List_1_Sort_m10316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::ToArray()
#define List_1_ToArray_m11013(__this, method) (( EntryU5BU5D_t1800* (*) (List_1_t44 *, const MethodInfo*))List_1_ToArray_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::TrimExcess()
#define List_1_TrimExcess_m11014(__this, method) (( void (*) (List_1_t44 *, const MethodInfo*))List_1_TrimExcess_m10320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Capacity()
#define List_1_get_Capacity_m11015(__this, method) (( int32_t (*) (List_1_t44 *, const MethodInfo*))List_1_get_Capacity_m10322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m11016(__this, ___value, method) (( void (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Count()
#define List_1_get_Count_m11017(__this, method) (( int32_t (*) (List_1_t44 *, const MethodInfo*))List_1_get_Count_m10326_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::get_Item(System.Int32)
#define List_1_get_Item_m11018(__this, ___index, method) (( Entry_t43 * (*) (List_1_t44 *, int32_t, const MethodInfo*))List_1_get_Item_m10328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.EventSystems.EventTrigger/Entry>::set_Item(System.Int32,T)
#define List_1_set_Item_m11019(__this, ___index, ___value, method) (( void (*) (List_1_t44 *, int32_t, Entry_t43 *, const MethodInfo*))List_1_set_Item_m10330_gshared)(__this, ___index, ___value, method)

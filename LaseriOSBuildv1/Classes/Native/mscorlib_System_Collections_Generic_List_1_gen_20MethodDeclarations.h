﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.String>
struct List_1_t415;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t2468;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<System.String>
struct ICollection_1_t599;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_t2480;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.String>
struct ReadOnlyCollection_1_t2029;
// System.String[]
struct StringU5BU5D_t502;
// System.Predicate`1<System.String>
struct Predicate_1_t2030;
// System.Comparison`1<System.String>
struct Comparison_1_t2032;
// System.Collections.Generic.List`1/Enumerator<System.String>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_21.h"

// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m3132(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Int32)
#define List_1__ctor_m14131(__this, ___capacity, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.String>::.cctor()
#define List_1__cctor_m14132(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.String>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14133(__this, method) (( Object_t* (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m14134(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t415 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.String>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14135(__this, method) (( Object_t * (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m14136(__this, ___item, method) (( int32_t (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m14137(__this, ___item, method) (( bool (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10248_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m14138(__this, ___item, method) (( int32_t (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m14139(__this, ___index, ___item, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10252_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m14140(__this, ___item, method) (( void (*) (List_1_t415 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14141(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14142(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10258_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m14143(__this, method) (( Object_t * (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m14144(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m14145(__this, method) (( bool (*) (List_1_t415 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10264_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.String>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m14146(__this, ___index, method) (( Object_t * (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m14147(__this, ___index, ___value, method) (( void (*) (List_1_t415 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.String>::Add(T)
#define List_1_Add_m14148(__this, ___item, method) (( void (*) (List_1_t415 *, String_t*, const MethodInfo*))List_1_Add_m10270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m14149(__this, ___newCount, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10272_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m14150(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m14151(__this, ___enumerable, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.String>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m14152(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_AddRange_m10278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.String>::AsReadOnly()
#define List_1_AsReadOnly_m14153(__this, method) (( ReadOnlyCollection_1_t2029 * (*) (List_1_t415 *, const MethodInfo*))List_1_AsReadOnly_m10280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Clear()
#define List_1_Clear_m14154(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Clear_m10282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(T)
#define List_1_Contains_m14155(__this, ___item, method) (( bool (*) (List_1_t415 *, String_t*, const MethodInfo*))List_1_Contains_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m14156(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t415 *, StringU5BU5D_t502*, int32_t, const MethodInfo*))List_1_CopyTo_m10286_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.String>::Find(System.Predicate`1<T>)
#define List_1_Find_m14157(__this, ___match, method) (( String_t* (*) (List_1_t415 *, Predicate_1_t2030 *, const MethodInfo*))List_1_Find_m10288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m14158(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2030 *, const MethodInfo*))List_1_CheckMatch_m10290_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m14159(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t415 *, int32_t, int32_t, Predicate_1_t2030 *, const MethodInfo*))List_1_GetIndex_m10292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.String>::GetEnumerator()
#define List_1_GetEnumerator_m14160(__this, method) (( Enumerator_t2031  (*) (List_1_t415 *, const MethodInfo*))List_1_GetEnumerator_m10294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::IndexOf(T)
#define List_1_IndexOf_m14161(__this, ___item, method) (( int32_t (*) (List_1_t415 *, String_t*, const MethodInfo*))List_1_IndexOf_m10296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m14162(__this, ___start, ___delta, method) (( void (*) (List_1_t415 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m14163(__this, ___index, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Insert(System.Int32,T)
#define List_1_Insert_m14164(__this, ___index, ___item, method) (( void (*) (List_1_t415 *, int32_t, String_t*, const MethodInfo*))List_1_Insert_m10302_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.String>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m14165(__this, ___collection, method) (( void (*) (List_1_t415 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10304_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.String>::Remove(T)
#define List_1_Remove_m14166(__this, ___item, method) (( bool (*) (List_1_t415 *, String_t*, const MethodInfo*))List_1_Remove_m10306_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m14167(__this, ___match, method) (( int32_t (*) (List_1_t415 *, Predicate_1_t2030 *, const MethodInfo*))List_1_RemoveAll_m10308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.String>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m14168(__this, ___index, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::Reverse()
#define List_1_Reverse_m14169(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Reverse_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort()
#define List_1_Sort_m14170(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_Sort_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m14171(__this, ___comparison, method) (( void (*) (List_1_t415 *, Comparison_1_t2032 *, const MethodInfo*))List_1_Sort_m10316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.String>::ToArray()
#define List_1_ToArray_m10218(__this, method) (( StringU5BU5D_t502* (*) (List_1_t415 *, const MethodInfo*))List_1_ToArray_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::TrimExcess()
#define List_1_TrimExcess_m14172(__this, method) (( void (*) (List_1_t415 *, const MethodInfo*))List_1_TrimExcess_m10320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Capacity()
#define List_1_get_Capacity_m14173(__this, method) (( int32_t (*) (List_1_t415 *, const MethodInfo*))List_1_get_Capacity_m10322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m14174(__this, ___value, method) (( void (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
#define List_1_get_Count_m14175(__this, method) (( int32_t (*) (List_1_t415 *, const MethodInfo*))List_1_get_Count_m10326_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.String>::get_Item(System.Int32)
#define List_1_get_Item_m14176(__this, ___index, method) (( String_t* (*) (List_1_t415 *, int32_t, const MethodInfo*))List_1_get_Item_m10328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.String>::set_Item(System.Int32,T)
#define List_1_set_Item_m14177(__this, ___index, ___value, method) (( void (*) (List_1_t415 *, int32_t, String_t*, const MethodInfo*))List_1_set_Item_m10330_gshared)(__this, ___index, ___value, method)

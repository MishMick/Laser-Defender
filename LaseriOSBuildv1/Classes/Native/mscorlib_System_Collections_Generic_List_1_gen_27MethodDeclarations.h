#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<System.Type>
struct List_1_t671;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IEnumerator`1<System.Type>
struct IEnumerator_1_t2556;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<System.Type>
struct ICollection_1_t2522;
// System.Collections.Generic.IEnumerable`1<System.Type>
struct IEnumerable_1_t2557;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Type>
struct ReadOnlyCollection_1_t2179;
// System.Type[]
struct TypeU5BU5D_t501;
// System.Predicate`1<System.Type>
struct Predicate_1_t2180;
// System.Comparison`1<System.Type>
struct Comparison_1_t2182;
// System.Collections.Generic.List`1/Enumerator<System.Type>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_28.h"

// System.Void System.Collections.Generic.List`1<System.Type>::.ctor()
// System.Collections.Generic.List`1<System.Object>
#include "mscorlib_System_Collections_Generic_List_1_gen_17MethodDeclarations.h"
#define List_1__ctor_m3212(__this, method) (( void (*) (List_1_t671 *, const MethodInfo*))List_1__ctor_m3166_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.ctor(System.Int32)
#define List_1__ctor_m16159(__this, ___capacity, method) (( void (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1__ctor_m10236_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<System.Type>::.cctor()
#define List_1__cctor_m16160(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m10238_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16161(__this, method) (( Object_t* (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10240_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define List_1_System_Collections_ICollection_CopyTo_m16162(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t671 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m10242_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<System.Type>::System.Collections.IEnumerable.GetEnumerator()
#define List_1_System_Collections_IEnumerable_GetEnumerator_m16163(__this, method) (( Object_t * (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m10244_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Add(System.Object)
#define List_1_System_Collections_IList_Add_m16164(__this, ___item, method) (( int32_t (*) (List_1_t671 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m10246_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Contains(System.Object)
#define List_1_System_Collections_IList_Contains_m16165(__this, ___item, method) (( bool (*) (List_1_t671 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m10248_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::System.Collections.IList.IndexOf(System.Object)
#define List_1_System_Collections_IList_IndexOf_m16166(__this, ___item, method) (( int32_t (*) (List_1_t671 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m10250_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Insert(System.Int32,System.Object)
#define List_1_System_Collections_IList_Insert_m16167(__this, ___index, ___item, method) (( void (*) (List_1_t671 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m10252_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.Remove(System.Object)
#define List_1_System_Collections_IList_Remove_m16168(__this, ___item, method) (( void (*) (List_1_t671 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m10254_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16169(__this, method) (( bool (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m10256_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_IsSynchronized()
#define List_1_System_Collections_ICollection_get_IsSynchronized_m16170(__this, method) (( bool (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m10258_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.ICollection.get_SyncRoot()
#define List_1_System_Collections_ICollection_get_SyncRoot_m16171(__this, method) (( Object_t * (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m10260_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsFixedSize()
#define List_1_System_Collections_IList_get_IsFixedSize_m16172(__this, method) (( bool (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m10262_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_IsReadOnly()
#define List_1_System_Collections_IList_get_IsReadOnly_m16173(__this, method) (( bool (*) (List_1_t671 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m10264_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<System.Type>::System.Collections.IList.get_Item(System.Int32)
#define List_1_System_Collections_IList_get_Item_m16174(__this, ___index, method) (( Object_t * (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m10266_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::System.Collections.IList.set_Item(System.Int32,System.Object)
#define List_1_System_Collections_IList_set_Item_m16175(__this, ___index, ___value, method) (( void (*) (List_1_t671 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m10268_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Add(T)
#define List_1_Add_m16176(__this, ___item, method) (( void (*) (List_1_t671 *, Type_t *, const MethodInfo*))List_1_Add_m10270_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::GrowIfNeeded(System.Int32)
#define List_1_GrowIfNeeded_m16177(__this, ___newCount, method) (( void (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m10272_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddCollection(System.Collections.Generic.ICollection`1<T>)
#define List_1_AddCollection_m16178(__this, ___collection, method) (( void (*) (List_1_t671 *, Object_t*, const MethodInfo*))List_1_AddCollection_m10274_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddEnumerable_m16179(__this, ___enumerable, method) (( void (*) (List_1_t671 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m10276_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<System.Type>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_AddRange_m16180(__this, ___collection, method) (( void (*) (List_1_t671 *, Object_t*, const MethodInfo*))List_1_AddRange_m10278_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<System.Type>::AsReadOnly()
#define List_1_AsReadOnly_m16181(__this, method) (( ReadOnlyCollection_1_t2179 * (*) (List_1_t671 *, const MethodInfo*))List_1_AsReadOnly_m10280_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Clear()
#define List_1_Clear_m16182(__this, method) (( void (*) (List_1_t671 *, const MethodInfo*))List_1_Clear_m10282_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Contains(T)
#define List_1_Contains_m16183(__this, ___item, method) (( bool (*) (List_1_t671 *, Type_t *, const MethodInfo*))List_1_Contains_m10284_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CopyTo(T[],System.Int32)
#define List_1_CopyTo_m16184(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t671 *, TypeU5BU5D_t501*, int32_t, const MethodInfo*))List_1_CopyTo_m10286_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<System.Type>::Find(System.Predicate`1<T>)
#define List_1_Find_m16185(__this, ___match, method) (( Type_t * (*) (List_1_t671 *, Predicate_1_t2180 *, const MethodInfo*))List_1_Find_m10288_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckMatch(System.Predicate`1<T>)
#define List_1_CheckMatch_m16186(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2180 *, const MethodInfo*))List_1_CheckMatch_m10290_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
#define List_1_GetIndex_m16187(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t671 *, int32_t, int32_t, Predicate_1_t2180 *, const MethodInfo*))List_1_GetIndex_m10292_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Type>::GetEnumerator()
#define List_1_GetEnumerator_m16188(__this, method) (( Enumerator_t2181  (*) (List_1_t671 *, const MethodInfo*))List_1_GetEnumerator_m10294_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::IndexOf(T)
#define List_1_IndexOf_m16189(__this, ___item, method) (( int32_t (*) (List_1_t671 *, Type_t *, const MethodInfo*))List_1_IndexOf_m10296_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Shift(System.Int32,System.Int32)
#define List_1_Shift_m16190(__this, ___start, ___delta, method) (( void (*) (List_1_t671 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m10298_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckIndex(System.Int32)
#define List_1_CheckIndex_m16191(__this, ___index, method) (( void (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_CheckIndex_m10300_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Insert(System.Int32,T)
#define List_1_Insert_m16192(__this, ___index, ___item, method) (( void (*) (List_1_t671 *, int32_t, Type_t *, const MethodInfo*))List_1_Insert_m10302_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<System.Type>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
#define List_1_CheckCollection_m16193(__this, ___collection, method) (( void (*) (List_1_t671 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m10304_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<System.Type>::Remove(T)
#define List_1_Remove_m16194(__this, ___item, method) (( bool (*) (List_1_t671 *, Type_t *, const MethodInfo*))List_1_Remove_m10306_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::RemoveAll(System.Predicate`1<T>)
#define List_1_RemoveAll_m16195(__this, ___match, method) (( int32_t (*) (List_1_t671 *, Predicate_1_t2180 *, const MethodInfo*))List_1_RemoveAll_m10308_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<System.Type>::RemoveAt(System.Int32)
#define List_1_RemoveAt_m16196(__this, ___index, method) (( void (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_RemoveAt_m10310_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Reverse()
#define List_1_Reverse_m16197(__this, method) (( void (*) (List_1_t671 *, const MethodInfo*))List_1_Reverse_m10312_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort()
#define List_1_Sort_m16198(__this, method) (( void (*) (List_1_t671 *, const MethodInfo*))List_1_Sort_m10314_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::Sort(System.Comparison`1<T>)
#define List_1_Sort_m16199(__this, ___comparison, method) (( void (*) (List_1_t671 *, Comparison_1_t2182 *, const MethodInfo*))List_1_Sort_m10316_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<System.Type>::ToArray()
#define List_1_ToArray_m3213(__this, method) (( TypeU5BU5D_t501* (*) (List_1_t671 *, const MethodInfo*))List_1_ToArray_m10318_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::TrimExcess()
#define List_1_TrimExcess_m16200(__this, method) (( void (*) (List_1_t671 *, const MethodInfo*))List_1_TrimExcess_m10320_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Capacity()
#define List_1_get_Capacity_m16201(__this, method) (( int32_t (*) (List_1_t671 *, const MethodInfo*))List_1_get_Capacity_m10322_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Capacity(System.Int32)
#define List_1_set_Capacity_m16202(__this, ___value, method) (( void (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_set_Capacity_m10324_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<System.Type>::get_Count()
#define List_1_get_Count_m16203(__this, method) (( int32_t (*) (List_1_t671 *, const MethodInfo*))List_1_get_Count_m10326_gshared)(__this, method)
// T System.Collections.Generic.List`1<System.Type>::get_Item(System.Int32)
#define List_1_get_Item_m16204(__this, ___index, method) (( Type_t * (*) (List_1_t671 *, int32_t, const MethodInfo*))List_1_get_Item_m10328_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<System.Type>::set_Item(System.Int32,T)
#define List_1_set_Item_m16205(__this, ___index, ___value, method) (( void (*) (List_1_t671 *, int32_t, Type_t *, const MethodInfo*))List_1_set_Item_m10330_gshared)(__this, ___index, ___value, method)

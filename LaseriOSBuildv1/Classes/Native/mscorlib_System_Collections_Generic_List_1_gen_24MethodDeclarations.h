#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t463;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UILineInfo>
struct IEnumerator_1_t2490;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.UILineInfo>
struct ICollection_1_t315;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UILineInfo>
struct IEnumerable_1_t2491;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UILineInfo>
struct ReadOnlyCollection_1_t2060;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t593;
// System.Predicate`1<UnityEngine.UILineInfo>
struct Predicate_1_t2064;
// System.Comparison`1<UnityEngine.UILineInfo>
struct Comparison_1_t2067;
// UnityEngine.UILineInfo
#include "UnityEngine_UnityEngine_UILineInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UILineInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_25.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor()
extern "C" void List_1__ctor_m14578_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1__ctor_m14578(__this, method) (( void (*) (List_1_t463 *, const MethodInfo*))List_1__ctor_m14578_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3141_gshared (List_1_t463 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3141(__this, ___capacity, method) (( void (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1__ctor_m3141_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::.cctor()
extern "C" void List_1__cctor_m14579_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14579(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14579_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14580_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14580(__this, method) (( Object_t* (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14580_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14581_gshared (List_1_t463 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14581(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t463 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14581_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14582_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14582(__this, method) (( Object_t * (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14582_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14583_gshared (List_1_t463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14583(__this, ___item, method) (( int32_t (*) (List_1_t463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14583_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14584_gshared (List_1_t463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14584(__this, ___item, method) (( bool (*) (List_1_t463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14584_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14585_gshared (List_1_t463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14585(__this, ___item, method) (( int32_t (*) (List_1_t463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14585_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14586_gshared (List_1_t463 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14586(__this, ___index, ___item, method) (( void (*) (List_1_t463 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14586_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14587_gshared (List_1_t463 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14587(__this, ___item, method) (( void (*) (List_1_t463 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14587_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14588_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14588(__this, method) (( bool (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14588_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14589_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14589(__this, method) (( bool (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14589_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14590_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14590(__this, method) (( Object_t * (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14590_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14591_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14591(__this, method) (( bool (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14591_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14592_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14592(__this, method) (( bool (*) (List_1_t463 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14592_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14593_gshared (List_1_t463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14593(__this, ___index, method) (( Object_t * (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14593_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14594_gshared (List_1_t463 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14594(__this, ___index, ___value, method) (( void (*) (List_1_t463 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14594_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Add(T)
extern "C" void List_1_Add_m14595_gshared (List_1_t463 * __this, UILineInfo_t311  ___item, const MethodInfo* method);
#define List_1_Add_m14595(__this, ___item, method) (( void (*) (List_1_t463 *, UILineInfo_t311 , const MethodInfo*))List_1_Add_m14595_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14596_gshared (List_1_t463 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14596(__this, ___newCount, method) (( void (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14596_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14597_gshared (List_1_t463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14597(__this, ___collection, method) (( void (*) (List_1_t463 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14597_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14598_gshared (List_1_t463 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14598(__this, ___enumerable, method) (( void (*) (List_1_t463 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14598_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14599_gshared (List_1_t463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14599(__this, ___collection, method) (( void (*) (List_1_t463 *, Object_t*, const MethodInfo*))List_1_AddRange_m14599_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2060 * List_1_AsReadOnly_m14600_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14600(__this, method) (( ReadOnlyCollection_1_t2060 * (*) (List_1_t463 *, const MethodInfo*))List_1_AsReadOnly_m14600_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Clear()
extern "C" void List_1_Clear_m14601_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_Clear_m14601(__this, method) (( void (*) (List_1_t463 *, const MethodInfo*))List_1_Clear_m14601_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Contains(T)
extern "C" bool List_1_Contains_m14602_gshared (List_1_t463 * __this, UILineInfo_t311  ___item, const MethodInfo* method);
#define List_1_Contains_m14602(__this, ___item, method) (( bool (*) (List_1_t463 *, UILineInfo_t311 , const MethodInfo*))List_1_Contains_m14602_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14603_gshared (List_1_t463 * __this, UILineInfoU5BU5D_t593* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14603(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t463 *, UILineInfoU5BU5D_t593*, int32_t, const MethodInfo*))List_1_CopyTo_m14603_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Find(System.Predicate`1<T>)
extern "C" UILineInfo_t311  List_1_Find_m14604_gshared (List_1_t463 * __this, Predicate_1_t2064 * ___match, const MethodInfo* method);
#define List_1_Find_m14604(__this, ___match, method) (( UILineInfo_t311  (*) (List_1_t463 *, Predicate_1_t2064 *, const MethodInfo*))List_1_Find_m14604_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14605_gshared (Object_t * __this /* static, unused */, Predicate_1_t2064 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14605(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2064 *, const MethodInfo*))List_1_CheckMatch_m14605_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14606_gshared (List_1_t463 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2064 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14606(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t463 *, int32_t, int32_t, Predicate_1_t2064 *, const MethodInfo*))List_1_GetIndex_m14606_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UILineInfo>::GetEnumerator()
extern "C" Enumerator_t2059  List_1_GetEnumerator_m14607_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14607(__this, method) (( Enumerator_t2059  (*) (List_1_t463 *, const MethodInfo*))List_1_GetEnumerator_m14607_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14608_gshared (List_1_t463 * __this, UILineInfo_t311  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14608(__this, ___item, method) (( int32_t (*) (List_1_t463 *, UILineInfo_t311 , const MethodInfo*))List_1_IndexOf_m14608_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14609_gshared (List_1_t463 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14609(__this, ___start, ___delta, method) (( void (*) (List_1_t463 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14609_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14610_gshared (List_1_t463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14610(__this, ___index, method) (( void (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14610_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14611_gshared (List_1_t463 * __this, int32_t ___index, UILineInfo_t311  ___item, const MethodInfo* method);
#define List_1_Insert_m14611(__this, ___index, ___item, method) (( void (*) (List_1_t463 *, int32_t, UILineInfo_t311 , const MethodInfo*))List_1_Insert_m14611_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14612_gshared (List_1_t463 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14612(__this, ___collection, method) (( void (*) (List_1_t463 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14612_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Remove(T)
extern "C" bool List_1_Remove_m14613_gshared (List_1_t463 * __this, UILineInfo_t311  ___item, const MethodInfo* method);
#define List_1_Remove_m14613(__this, ___item, method) (( bool (*) (List_1_t463 *, UILineInfo_t311 , const MethodInfo*))List_1_Remove_m14613_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14614_gshared (List_1_t463 * __this, Predicate_1_t2064 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14614(__this, ___match, method) (( int32_t (*) (List_1_t463 *, Predicate_1_t2064 *, const MethodInfo*))List_1_RemoveAll_m14614_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14615_gshared (List_1_t463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14615(__this, ___index, method) (( void (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14615_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Reverse()
extern "C" void List_1_Reverse_m14616_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_Reverse_m14616(__this, method) (( void (*) (List_1_t463 *, const MethodInfo*))List_1_Reverse_m14616_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort()
extern "C" void List_1_Sort_m14617_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_Sort_m14617(__this, method) (( void (*) (List_1_t463 *, const MethodInfo*))List_1_Sort_m14617_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14618_gshared (List_1_t463 * __this, Comparison_1_t2067 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14618(__this, ___comparison, method) (( void (*) (List_1_t463 *, Comparison_1_t2067 *, const MethodInfo*))List_1_Sort_m14618_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UILineInfo>::ToArray()
extern "C" UILineInfoU5BU5D_t593* List_1_ToArray_m14619_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_ToArray_m14619(__this, method) (( UILineInfoU5BU5D_t593* (*) (List_1_t463 *, const MethodInfo*))List_1_ToArray_m14619_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14620_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14620(__this, method) (( void (*) (List_1_t463 *, const MethodInfo*))List_1_TrimExcess_m14620_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14621_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14621(__this, method) (( int32_t (*) (List_1_t463 *, const MethodInfo*))List_1_get_Capacity_m14621_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14622_gshared (List_1_t463 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14622(__this, ___value, method) (( void (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14622_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14623_gshared (List_1_t463 * __this, const MethodInfo* method);
#define List_1_get_Count_m14623(__this, method) (( int32_t (*) (List_1_t463 *, const MethodInfo*))List_1_get_Count_m14623_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UILineInfo>::get_Item(System.Int32)
extern "C" UILineInfo_t311  List_1_get_Item_m14624_gshared (List_1_t463 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14624(__this, ___index, method) (( UILineInfo_t311  (*) (List_1_t463 *, int32_t, const MethodInfo*))List_1_get_Item_m14624_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UILineInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14625_gshared (List_1_t463 * __this, int32_t ___index, UILineInfo_t311  ___value, const MethodInfo* method);
#define List_1_set_Item_m14625(__this, ___index, ___value, method) (( void (*) (List_1_t463 *, int32_t, UILineInfo_t311 , const MethodInfo*))List_1_set_Item_m14625_gshared)(__this, ___index, ___value, method)

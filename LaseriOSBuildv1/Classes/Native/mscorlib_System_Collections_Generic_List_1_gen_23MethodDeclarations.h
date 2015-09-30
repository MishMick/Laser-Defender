#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t462;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UICharInfo>
struct IEnumerator_1_t2487;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.UICharInfo>
struct ICollection_1_t2488;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UICharInfo>
struct IEnumerable_1_t2489;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UICharInfo>
struct ReadOnlyCollection_1_t2051;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t592;
// System.Predicate`1<UnityEngine.UICharInfo>
struct Predicate_1_t2055;
// System.Comparison`1<UnityEngine.UICharInfo>
struct Comparison_1_t2058;
// UnityEngine.UICharInfo
#include "UnityEngine_UnityEngine_UICharInfo.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UICharInfo>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_24.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor()
extern "C" void List_1__ctor_m14436_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1__ctor_m14436(__this, method) (( void (*) (List_1_t462 *, const MethodInfo*))List_1__ctor_m14436_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3140_gshared (List_1_t462 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3140(__this, ___capacity, method) (( void (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1__ctor_m3140_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::.cctor()
extern "C" void List_1__cctor_m14437_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m14437(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m14437_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14438_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14438(__this, method) (( Object_t* (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m14438_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m14439_gshared (List_1_t462 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m14439(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t462 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m14439_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m14440_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m14440(__this, method) (( Object_t * (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m14440_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m14441_gshared (List_1_t462 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m14441(__this, ___item, method) (( int32_t (*) (List_1_t462 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m14441_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m14442_gshared (List_1_t462 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m14442(__this, ___item, method) (( bool (*) (List_1_t462 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m14442_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m14443_gshared (List_1_t462 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m14443(__this, ___item, method) (( int32_t (*) (List_1_t462 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m14443_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m14444_gshared (List_1_t462 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m14444(__this, ___index, ___item, method) (( void (*) (List_1_t462 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m14444_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m14445_gshared (List_1_t462 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m14445(__this, ___item, method) (( void (*) (List_1_t462 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m14445_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14446_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14446(__this, method) (( bool (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m14446_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m14447_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m14447(__this, method) (( bool (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m14447_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m14448_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m14448(__this, method) (( Object_t * (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m14448_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m14449_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m14449(__this, method) (( bool (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m14449_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m14450_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m14450(__this, method) (( bool (*) (List_1_t462 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m14450_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m14451_gshared (List_1_t462 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m14451(__this, ___index, method) (( Object_t * (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m14451_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m14452_gshared (List_1_t462 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m14452(__this, ___index, ___value, method) (( void (*) (List_1_t462 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m14452_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Add(T)
extern "C" void List_1_Add_m14453_gshared (List_1_t462 * __this, UICharInfo_t313  ___item, const MethodInfo* method);
#define List_1_Add_m14453(__this, ___item, method) (( void (*) (List_1_t462 *, UICharInfo_t313 , const MethodInfo*))List_1_Add_m14453_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m14454_gshared (List_1_t462 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m14454(__this, ___newCount, method) (( void (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m14454_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m14455_gshared (List_1_t462 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m14455(__this, ___collection, method) (( void (*) (List_1_t462 *, Object_t*, const MethodInfo*))List_1_AddCollection_m14455_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m14456_gshared (List_1_t462 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m14456(__this, ___enumerable, method) (( void (*) (List_1_t462 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m14456_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m14457_gshared (List_1_t462 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m14457(__this, ___collection, method) (( void (*) (List_1_t462 *, Object_t*, const MethodInfo*))List_1_AddRange_m14457_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t2051 * List_1_AsReadOnly_m14458_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m14458(__this, method) (( ReadOnlyCollection_1_t2051 * (*) (List_1_t462 *, const MethodInfo*))List_1_AsReadOnly_m14458_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Clear()
extern "C" void List_1_Clear_m14459_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_Clear_m14459(__this, method) (( void (*) (List_1_t462 *, const MethodInfo*))List_1_Clear_m14459_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Contains(T)
extern "C" bool List_1_Contains_m14460_gshared (List_1_t462 * __this, UICharInfo_t313  ___item, const MethodInfo* method);
#define List_1_Contains_m14460(__this, ___item, method) (( bool (*) (List_1_t462 *, UICharInfo_t313 , const MethodInfo*))List_1_Contains_m14460_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m14461_gshared (List_1_t462 * __this, UICharInfoU5BU5D_t592* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m14461(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t462 *, UICharInfoU5BU5D_t592*, int32_t, const MethodInfo*))List_1_CopyTo_m14461_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Find(System.Predicate`1<T>)
extern "C" UICharInfo_t313  List_1_Find_m14462_gshared (List_1_t462 * __this, Predicate_1_t2055 * ___match, const MethodInfo* method);
#define List_1_Find_m14462(__this, ___match, method) (( UICharInfo_t313  (*) (List_1_t462 *, Predicate_1_t2055 *, const MethodInfo*))List_1_Find_m14462_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m14463_gshared (Object_t * __this /* static, unused */, Predicate_1_t2055 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m14463(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t2055 *, const MethodInfo*))List_1_CheckMatch_m14463_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m14464_gshared (List_1_t462 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t2055 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m14464(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t462 *, int32_t, int32_t, Predicate_1_t2055 *, const MethodInfo*))List_1_GetIndex_m14464_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UICharInfo>::GetEnumerator()
extern "C" Enumerator_t2050  List_1_GetEnumerator_m14465_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m14465(__this, method) (( Enumerator_t2050  (*) (List_1_t462 *, const MethodInfo*))List_1_GetEnumerator_m14465_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m14466_gshared (List_1_t462 * __this, UICharInfo_t313  ___item, const MethodInfo* method);
#define List_1_IndexOf_m14466(__this, ___item, method) (( int32_t (*) (List_1_t462 *, UICharInfo_t313 , const MethodInfo*))List_1_IndexOf_m14466_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m14467_gshared (List_1_t462 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m14467(__this, ___start, ___delta, method) (( void (*) (List_1_t462 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m14467_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m14468_gshared (List_1_t462 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m14468(__this, ___index, method) (( void (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_CheckIndex_m14468_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m14469_gshared (List_1_t462 * __this, int32_t ___index, UICharInfo_t313  ___item, const MethodInfo* method);
#define List_1_Insert_m14469(__this, ___index, ___item, method) (( void (*) (List_1_t462 *, int32_t, UICharInfo_t313 , const MethodInfo*))List_1_Insert_m14469_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m14470_gshared (List_1_t462 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m14470(__this, ___collection, method) (( void (*) (List_1_t462 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m14470_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Remove(T)
extern "C" bool List_1_Remove_m14471_gshared (List_1_t462 * __this, UICharInfo_t313  ___item, const MethodInfo* method);
#define List_1_Remove_m14471(__this, ___item, method) (( bool (*) (List_1_t462 *, UICharInfo_t313 , const MethodInfo*))List_1_Remove_m14471_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m14472_gshared (List_1_t462 * __this, Predicate_1_t2055 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m14472(__this, ___match, method) (( int32_t (*) (List_1_t462 *, Predicate_1_t2055 *, const MethodInfo*))List_1_RemoveAll_m14472_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m14473_gshared (List_1_t462 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m14473(__this, ___index, method) (( void (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_RemoveAt_m14473_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Reverse()
extern "C" void List_1_Reverse_m14474_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_Reverse_m14474(__this, method) (( void (*) (List_1_t462 *, const MethodInfo*))List_1_Reverse_m14474_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort()
extern "C" void List_1_Sort_m14475_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_Sort_m14475(__this, method) (( void (*) (List_1_t462 *, const MethodInfo*))List_1_Sort_m14475_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m14476_gshared (List_1_t462 * __this, Comparison_1_t2058 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m14476(__this, ___comparison, method) (( void (*) (List_1_t462 *, Comparison_1_t2058 *, const MethodInfo*))List_1_Sort_m14476_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UICharInfo>::ToArray()
extern "C" UICharInfoU5BU5D_t592* List_1_ToArray_m14477_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_ToArray_m14477(__this, method) (( UICharInfoU5BU5D_t592* (*) (List_1_t462 *, const MethodInfo*))List_1_ToArray_m14477_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::TrimExcess()
extern "C" void List_1_TrimExcess_m14478_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m14478(__this, method) (( void (*) (List_1_t462 *, const MethodInfo*))List_1_TrimExcess_m14478_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m14479_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m14479(__this, method) (( int32_t (*) (List_1_t462 *, const MethodInfo*))List_1_get_Capacity_m14479_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m14480_gshared (List_1_t462 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m14480(__this, ___value, method) (( void (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_set_Capacity_m14480_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Count()
extern "C" int32_t List_1_get_Count_m14481_gshared (List_1_t462 * __this, const MethodInfo* method);
#define List_1_get_Count_m14481(__this, method) (( int32_t (*) (List_1_t462 *, const MethodInfo*))List_1_get_Count_m14481_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UICharInfo>::get_Item(System.Int32)
extern "C" UICharInfo_t313  List_1_get_Item_m14482_gshared (List_1_t462 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m14482(__this, ___index, method) (( UICharInfo_t313  (*) (List_1_t462 *, int32_t, const MethodInfo*))List_1_get_Item_m14482_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UICharInfo>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m14483_gshared (List_1_t462 * __this, int32_t ___index, UICharInfo_t313  ___value, const MethodInfo* method);
#define List_1_set_Item_m14483(__this, ___index, ___value, method) (( void (*) (List_1_t462 *, int32_t, UICharInfo_t313 , const MethodInfo*))List_1_set_Item_m14483_gshared)(__this, ___index, ___value, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t161;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UIVertex>
struct IEnumerator_1_t2408;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>
struct ICollection_1_t322;
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t2411;
// System.Collections.ObjectModel.ReadOnlyCollection`1<UnityEngine.UIVertex>
struct ReadOnlyCollection_1_t1900;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t158;
// System.Predicate`1<UnityEngine.UIVertex>
struct Predicate_1_t1901;
// System.Comparison`1<UnityEngine.UIVertex>
struct Comparison_1_t1903;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"
// System.Collections.Generic.List`1/Enumerator<UnityEngine.UIVertex>
#include "mscorlib_System_Collections_Generic_List_1_Enumerator_gen_13.h"

// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
extern "C" void List_1__ctor_m1593_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1__ctor_m1593(__this, method) (( void (*) (List_1_t161 *, const MethodInfo*))List_1__ctor_m1593_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor(System.Int32)
extern "C" void List_1__ctor_m3139_gshared (List_1_t161 * __this, int32_t ___capacity, const MethodInfo* method);
#define List_1__ctor_m3139(__this, ___capacity, method) (( void (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1__ctor_m3139_gshared)(__this, ___capacity, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.cctor()
extern "C" void List_1__cctor_m12336_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define List_1__cctor_m12336(__this /* static, unused */, method) (( void (*) (Object_t * /* static, unused */, const MethodInfo*))List_1__cctor_m12336_gshared)(__this /* static, unused */, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12337_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12337(__this, method) (( Object_t* (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m12337_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void List_1_System_Collections_ICollection_CopyTo_m12338_gshared (List_1_t161 * __this, Array_t * ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_System_Collections_ICollection_CopyTo_m12338(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t161 *, Array_t *, int32_t, const MethodInfo*))List_1_System_Collections_ICollection_CopyTo_m12338_gshared)(__this, ___array, ___arrayIndex, method)
// System.Collections.IEnumerator System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * List_1_System_Collections_IEnumerable_GetEnumerator_m12339_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_IEnumerable_GetEnumerator_m12339(__this, method) (( Object_t * (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_IEnumerable_GetEnumerator_m12339_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Add(System.Object)
extern "C" int32_t List_1_System_Collections_IList_Add_m12340_gshared (List_1_t161 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Add_m12340(__this, ___item, method) (( int32_t (*) (List_1_t161 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Add_m12340_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Contains(System.Object)
extern "C" bool List_1_System_Collections_IList_Contains_m12341_gshared (List_1_t161 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Contains_m12341(__this, ___item, method) (( bool (*) (List_1_t161 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Contains_m12341_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.IndexOf(System.Object)
extern "C" int32_t List_1_System_Collections_IList_IndexOf_m12342_gshared (List_1_t161 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_IndexOf_m12342(__this, ___item, method) (( int32_t (*) (List_1_t161 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_IndexOf_m12342_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Insert(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_Insert_m12343_gshared (List_1_t161 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Insert_m12343(__this, ___index, ___item, method) (( void (*) (List_1_t161 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Insert_m12343_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.Remove(System.Object)
extern "C" void List_1_System_Collections_IList_Remove_m12344_gshared (List_1_t161 * __this, Object_t * ___item, const MethodInfo* method);
#define List_1_System_Collections_IList_Remove_m12344(__this, ___item, method) (( void (*) (List_1_t161 *, Object_t *, const MethodInfo*))List_1_System_Collections_IList_Remove_m12344_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12345_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12345(__this, method) (( bool (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m12345_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool List_1_System_Collections_ICollection_get_IsSynchronized_m12346_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_IsSynchronized_m12346(__this, method) (( bool (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_ICollection_get_IsSynchronized_m12346_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * List_1_System_Collections_ICollection_get_SyncRoot_m12347_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_ICollection_get_SyncRoot_m12347(__this, method) (( Object_t * (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_ICollection_get_SyncRoot_m12347_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsFixedSize()
extern "C" bool List_1_System_Collections_IList_get_IsFixedSize_m12348_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsFixedSize_m12348(__this, method) (( bool (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_IList_get_IsFixedSize_m12348_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_IsReadOnly()
extern "C" bool List_1_System_Collections_IList_get_IsReadOnly_m12349_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_System_Collections_IList_get_IsReadOnly_m12349(__this, method) (( bool (*) (List_1_t161 *, const MethodInfo*))List_1_System_Collections_IList_get_IsReadOnly_m12349_gshared)(__this, method)
// System.Object System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.get_Item(System.Int32)
extern "C" Object_t * List_1_System_Collections_IList_get_Item_m12350_gshared (List_1_t161 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_System_Collections_IList_get_Item_m12350(__this, ___index, method) (( Object_t * (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_System_Collections_IList_get_Item_m12350_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::System.Collections.IList.set_Item(System.Int32,System.Object)
extern "C" void List_1_System_Collections_IList_set_Item_m12351_gshared (List_1_t161 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define List_1_System_Collections_IList_set_Item_m12351(__this, ___index, ___value, method) (( void (*) (List_1_t161 *, int32_t, Object_t *, const MethodInfo*))List_1_System_Collections_IList_set_Item_m12351_gshared)(__this, ___index, ___value, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
extern "C" void List_1_Add_m12352_gshared (List_1_t161 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Add_m12352(__this, ___item, method) (( void (*) (List_1_t161 *, UIVertex_t159 , const MethodInfo*))List_1_Add_m12352_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::GrowIfNeeded(System.Int32)
extern "C" void List_1_GrowIfNeeded_m12353_gshared (List_1_t161 * __this, int32_t ___newCount, const MethodInfo* method);
#define List_1_GrowIfNeeded_m12353(__this, ___newCount, method) (( void (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_GrowIfNeeded_m12353_gshared)(__this, ___newCount, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddCollection(System.Collections.Generic.ICollection`1<T>)
extern "C" void List_1_AddCollection_m12354_gshared (List_1_t161 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddCollection_m12354(__this, ___collection, method) (( void (*) (List_1_t161 *, Object_t*, const MethodInfo*))List_1_AddCollection_m12354_gshared)(__this, ___collection, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddEnumerable(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddEnumerable_m12355_gshared (List_1_t161 * __this, Object_t* ___enumerable, const MethodInfo* method);
#define List_1_AddEnumerable_m12355(__this, ___enumerable, method) (( void (*) (List_1_t161 *, Object_t*, const MethodInfo*))List_1_AddEnumerable_m12355_gshared)(__this, ___enumerable, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_AddRange_m12356_gshared (List_1_t161 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_AddRange_m12356(__this, ___collection, method) (( void (*) (List_1_t161 *, Object_t*, const MethodInfo*))List_1_AddRange_m12356_gshared)(__this, ___collection, method)
// System.Collections.ObjectModel.ReadOnlyCollection`1<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::AsReadOnly()
extern "C" ReadOnlyCollection_1_t1900 * List_1_AsReadOnly_m12357_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_AsReadOnly_m12357(__this, method) (( ReadOnlyCollection_1_t1900 * (*) (List_1_t161 *, const MethodInfo*))List_1_AsReadOnly_m12357_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
extern "C" void List_1_Clear_m12358_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_Clear_m12358(__this, method) (( void (*) (List_1_t161 *, const MethodInfo*))List_1_Clear_m12358_gshared)(__this, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Contains(T)
extern "C" bool List_1_Contains_m12359_gshared (List_1_t161 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Contains_m12359(__this, ___item, method) (( bool (*) (List_1_t161 *, UIVertex_t159 , const MethodInfo*))List_1_Contains_m12359_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CopyTo(T[],System.Int32)
extern "C" void List_1_CopyTo_m12360_gshared (List_1_t161 * __this, UIVertexU5BU5D_t158* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define List_1_CopyTo_m12360(__this, ___array, ___arrayIndex, method) (( void (*) (List_1_t161 *, UIVertexU5BU5D_t158*, int32_t, const MethodInfo*))List_1_CopyTo_m12360_gshared)(__this, ___array, ___arrayIndex, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::Find(System.Predicate`1<T>)
extern "C" UIVertex_t159  List_1_Find_m12361_gshared (List_1_t161 * __this, Predicate_1_t1901 * ___match, const MethodInfo* method);
#define List_1_Find_m12361(__this, ___match, method) (( UIVertex_t159  (*) (List_1_t161 *, Predicate_1_t1901 *, const MethodInfo*))List_1_Find_m12361_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckMatch(System.Predicate`1<T>)
extern "C" void List_1_CheckMatch_m12362_gshared (Object_t * __this /* static, unused */, Predicate_1_t1901 * ___match, const MethodInfo* method);
#define List_1_CheckMatch_m12362(__this /* static, unused */, ___match, method) (( void (*) (Object_t * /* static, unused */, Predicate_1_t1901 *, const MethodInfo*))List_1_CheckMatch_m12362_gshared)(__this /* static, unused */, ___match, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetIndex(System.Int32,System.Int32,System.Predicate`1<T>)
extern "C" int32_t List_1_GetIndex_m12363_gshared (List_1_t161 * __this, int32_t ___startIndex, int32_t ___count, Predicate_1_t1901 * ___match, const MethodInfo* method);
#define List_1_GetIndex_m12363(__this, ___startIndex, ___count, ___match, method) (( int32_t (*) (List_1_t161 *, int32_t, int32_t, Predicate_1_t1901 *, const MethodInfo*))List_1_GetIndex_m12363_gshared)(__this, ___startIndex, ___count, ___match, method)
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<UnityEngine.UIVertex>::GetEnumerator()
extern "C" Enumerator_t1902  List_1_GetEnumerator_m12364_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_GetEnumerator_m12364(__this, method) (( Enumerator_t1902  (*) (List_1_t161 *, const MethodInfo*))List_1_GetEnumerator_m12364_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::IndexOf(T)
extern "C" int32_t List_1_IndexOf_m12365_gshared (List_1_t161 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_IndexOf_m12365(__this, ___item, method) (( int32_t (*) (List_1_t161 *, UIVertex_t159 , const MethodInfo*))List_1_IndexOf_m12365_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Shift(System.Int32,System.Int32)
extern "C" void List_1_Shift_m12366_gshared (List_1_t161 * __this, int32_t ___start, int32_t ___delta, const MethodInfo* method);
#define List_1_Shift_m12366(__this, ___start, ___delta, method) (( void (*) (List_1_t161 *, int32_t, int32_t, const MethodInfo*))List_1_Shift_m12366_gshared)(__this, ___start, ___delta, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckIndex(System.Int32)
extern "C" void List_1_CheckIndex_m12367_gshared (List_1_t161 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_CheckIndex_m12367(__this, ___index, method) (( void (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_CheckIndex_m12367_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Insert(System.Int32,T)
extern "C" void List_1_Insert_m12368_gshared (List_1_t161 * __this, int32_t ___index, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Insert_m12368(__this, ___index, ___item, method) (( void (*) (List_1_t161 *, int32_t, UIVertex_t159 , const MethodInfo*))List_1_Insert_m12368_gshared)(__this, ___index, ___item, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::CheckCollection(System.Collections.Generic.IEnumerable`1<T>)
extern "C" void List_1_CheckCollection_m12369_gshared (List_1_t161 * __this, Object_t* ___collection, const MethodInfo* method);
#define List_1_CheckCollection_m12369(__this, ___collection, method) (( void (*) (List_1_t161 *, Object_t*, const MethodInfo*))List_1_CheckCollection_m12369_gshared)(__this, ___collection, method)
// System.Boolean System.Collections.Generic.List`1<UnityEngine.UIVertex>::Remove(T)
extern "C" bool List_1_Remove_m12370_gshared (List_1_t161 * __this, UIVertex_t159  ___item, const MethodInfo* method);
#define List_1_Remove_m12370(__this, ___item, method) (( bool (*) (List_1_t161 *, UIVertex_t159 , const MethodInfo*))List_1_Remove_m12370_gshared)(__this, ___item, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAll(System.Predicate`1<T>)
extern "C" int32_t List_1_RemoveAll_m12371_gshared (List_1_t161 * __this, Predicate_1_t1901 * ___match, const MethodInfo* method);
#define List_1_RemoveAll_m12371(__this, ___match, method) (( int32_t (*) (List_1_t161 *, Predicate_1_t1901 *, const MethodInfo*))List_1_RemoveAll_m12371_gshared)(__this, ___match, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveAt(System.Int32)
extern "C" void List_1_RemoveAt_m12372_gshared (List_1_t161 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_RemoveAt_m12372(__this, ___index, method) (( void (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_RemoveAt_m12372_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Reverse()
extern "C" void List_1_Reverse_m12373_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_Reverse_m12373(__this, method) (( void (*) (List_1_t161 *, const MethodInfo*))List_1_Reverse_m12373_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort()
extern "C" void List_1_Sort_m12374_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_Sort_m12374(__this, method) (( void (*) (List_1_t161 *, const MethodInfo*))List_1_Sort_m12374_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Sort(System.Comparison`1<T>)
extern "C" void List_1_Sort_m12375_gshared (List_1_t161 * __this, Comparison_1_t1903 * ___comparison, const MethodInfo* method);
#define List_1_Sort_m12375(__this, ___comparison, method) (( void (*) (List_1_t161 *, Comparison_1_t1903 *, const MethodInfo*))List_1_Sort_m12375_gshared)(__this, ___comparison, method)
// T[] System.Collections.Generic.List`1<UnityEngine.UIVertex>::ToArray()
extern "C" UIVertexU5BU5D_t158* List_1_ToArray_m1654_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_ToArray_m1654(__this, method) (( UIVertexU5BU5D_t158* (*) (List_1_t161 *, const MethodInfo*))List_1_ToArray_m1654_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::TrimExcess()
extern "C" void List_1_TrimExcess_m12376_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_TrimExcess_m12376(__this, method) (( void (*) (List_1_t161 *, const MethodInfo*))List_1_TrimExcess_m12376_gshared)(__this, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Capacity()
extern "C" int32_t List_1_get_Capacity_m1499_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_get_Capacity_m1499(__this, method) (( int32_t (*) (List_1_t161 *, const MethodInfo*))List_1_get_Capacity_m1499_gshared)(__this, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Capacity(System.Int32)
extern "C" void List_1_set_Capacity_m1500_gshared (List_1_t161 * __this, int32_t ___value, const MethodInfo* method);
#define List_1_set_Capacity_m1500(__this, ___value, method) (( void (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_set_Capacity_m1500_gshared)(__this, ___value, method)
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
extern "C" int32_t List_1_get_Count_m12377_gshared (List_1_t161 * __this, const MethodInfo* method);
#define List_1_get_Count_m12377(__this, method) (( int32_t (*) (List_1_t161 *, const MethodInfo*))List_1_get_Count_m12377_gshared)(__this, method)
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
extern "C" UIVertex_t159  List_1_get_Item_m12378_gshared (List_1_t161 * __this, int32_t ___index, const MethodInfo* method);
#define List_1_get_Item_m12378(__this, ___index, method) (( UIVertex_t159  (*) (List_1_t161 *, int32_t, const MethodInfo*))List_1_get_Item_m12378_gshared)(__this, ___index, method)
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
extern "C" void List_1_set_Item_m12379_gshared (List_1_t161 * __this, int32_t ___index, UIVertex_t159  ___value, const MethodInfo* method);
#define List_1_set_Item_m12379(__this, ___index, ___value, method) (( void (*) (List_1_t161 *, int32_t, UIVertex_t159 , const MethodInfo*))List_1_set_Item_m12379_gshared)(__this, ___index, ___value, method)

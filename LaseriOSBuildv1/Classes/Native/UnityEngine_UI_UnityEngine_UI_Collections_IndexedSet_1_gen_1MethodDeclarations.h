﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
struct IndexedSet_1_t1855;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Object[]
struct ObjectU5BU5D_t274;
// System.Predicate`1<System.Object>
struct Predicate_1_t1753;
// System.Comparison`1<System.Object>
struct Comparison_1_t1759;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::.ctor()
extern "C" void IndexedSet_1__ctor_m11682_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1__ctor_m11682(__this, method) (( void (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1__ctor_m11682_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11684_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11684(__this, method) (( Object_t * (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11684_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Add(T)
extern "C" void IndexedSet_1_Add_m11686_gshared (IndexedSet_1_t1855 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Add_m11686(__this, ___item, method) (( void (*) (IndexedSet_1_t1855 *, Object_t *, const MethodInfo*))IndexedSet_1_Add_m11686_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Remove(T)
extern "C" bool IndexedSet_1_Remove_m11688_gshared (IndexedSet_1_t1855 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Remove_m11688(__this, ___item, method) (( bool (*) (IndexedSet_1_t1855 *, Object_t *, const MethodInfo*))IndexedSet_1_Remove_m11688_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<System.Object>::GetEnumerator()
extern "C" Object_t* IndexedSet_1_GetEnumerator_m11690_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1_GetEnumerator_m11690(__this, method) (( Object_t* (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11690_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Clear()
extern "C" void IndexedSet_1_Clear_m11692_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1_Clear_m11692(__this, method) (( void (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1_Clear_m11692_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Contains(T)
extern "C" bool IndexedSet_1_Contains_m11694_gshared (IndexedSet_1_t1855 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Contains_m11694(__this, ___item, method) (( bool (*) (IndexedSet_1_t1855 *, Object_t *, const MethodInfo*))IndexedSet_1_Contains_m11694_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void IndexedSet_1_CopyTo_m11696_gshared (IndexedSet_1_t1855 * __this, ObjectU5BU5D_t274* ___array, int32_t ___arrayIndex, const MethodInfo* method);
#define IndexedSet_1_CopyTo_m11696(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t1855 *, ObjectU5BU5D_t274*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11696_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Count()
extern "C" int32_t IndexedSet_1_get_Count_m11698_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1_get_Count_m11698(__this, method) (( int32_t (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1_get_Count_m11698_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_IsReadOnly()
extern "C" bool IndexedSet_1_get_IsReadOnly_m11700_gshared (IndexedSet_1_t1855 * __this, const MethodInfo* method);
#define IndexedSet_1_get_IsReadOnly_m11700(__this, method) (( bool (*) (IndexedSet_1_t1855 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11700_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<System.Object>::IndexOf(T)
extern "C" int32_t IndexedSet_1_IndexOf_m11702_gshared (IndexedSet_1_t1855 * __this, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_IndexOf_m11702(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t1855 *, Object_t *, const MethodInfo*))IndexedSet_1_IndexOf_m11702_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Insert(System.Int32,T)
extern "C" void IndexedSet_1_Insert_m11704_gshared (IndexedSet_1_t1855 * __this, int32_t ___index, Object_t * ___item, const MethodInfo* method);
#define IndexedSet_1_Insert_m11704(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t1855 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_Insert_m11704_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAt(System.Int32)
extern "C" void IndexedSet_1_RemoveAt_m11706_gshared (IndexedSet_1_t1855 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_RemoveAt_m11706(__this, ___index, method) (( void (*) (IndexedSet_1_t1855 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11706_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<System.Object>::get_Item(System.Int32)
extern "C" Object_t * IndexedSet_1_get_Item_m11708_gshared (IndexedSet_1_t1855 * __this, int32_t ___index, const MethodInfo* method);
#define IndexedSet_1_get_Item_m11708(__this, ___index, method) (( Object_t * (*) (IndexedSet_1_t1855 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11708_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::set_Item(System.Int32,T)
extern "C" void IndexedSet_1_set_Item_m11710_gshared (IndexedSet_1_t1855 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method);
#define IndexedSet_1_set_Item_m11710(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t1855 *, int32_t, Object_t *, const MethodInfo*))IndexedSet_1_set_Item_m11710_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::RemoveAll(System.Predicate`1<T>)
extern "C" void IndexedSet_1_RemoveAll_m11711_gshared (IndexedSet_1_t1855 * __this, Predicate_1_t1753 * ___match, const MethodInfo* method);
#define IndexedSet_1_RemoveAll_m11711(__this, ___match, method) (( void (*) (IndexedSet_1_t1855 *, Predicate_1_t1753 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11711_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<System.Object>::Sort(System.Comparison`1<T>)
extern "C" void IndexedSet_1_Sort_m11712_gshared (IndexedSet_1_t1855 * __this, Comparison_1_t1759 * ___sortLayoutFunction, const MethodInfo* method);
#define IndexedSet_1_Sort_m11712(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t1855 *, Comparison_1_t1759 *, const MethodInfo*))IndexedSet_1_Sort_m11712_gshared)(__this, ___sortLayoutFunction, method)

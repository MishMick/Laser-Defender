#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>
struct IndexedSet_1_t303;
// UnityEngine.UI.Graphic
struct Graphic_t122;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.IEnumerator`1<UnityEngine.UI.Graphic>
struct IEnumerator_1_t2415;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t1917;
// System.Predicate`1<UnityEngine.UI.Graphic>
struct Predicate_1_t1919;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t125;

// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::.ctor()
// UnityEngine.UI.Collections.IndexedSet`1<System.Object>
#include "UnityEngine_UI_UnityEngine_UI_Collections_IndexedSet_1_gen_1MethodDeclarations.h"
#define IndexedSet_1__ctor_m1524(__this, method) (( void (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1__ctor_m11682_gshared)(__this, method)
// System.Collections.IEnumerator UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::System.Collections.IEnumerable.GetEnumerator()
#define IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m12726(__this, method) (( Object_t * (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1_System_Collections_IEnumerable_GetEnumerator_m11684_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Add(T)
#define IndexedSet_1_Add_m12727(__this, ___item, method) (( void (*) (IndexedSet_1_t303 *, Graphic_t122 *, const MethodInfo*))IndexedSet_1_Add_m11686_gshared)(__this, ___item, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Remove(T)
#define IndexedSet_1_Remove_m12728(__this, ___item, method) (( bool (*) (IndexedSet_1_t303 *, Graphic_t122 *, const MethodInfo*))IndexedSet_1_Remove_m11688_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<T> UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::GetEnumerator()
#define IndexedSet_1_GetEnumerator_m12729(__this, method) (( Object_t* (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1_GetEnumerator_m11690_gshared)(__this, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Clear()
#define IndexedSet_1_Clear_m12730(__this, method) (( void (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1_Clear_m11692_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Contains(T)
#define IndexedSet_1_Contains_m12731(__this, ___item, method) (( bool (*) (IndexedSet_1_t303 *, Graphic_t122 *, const MethodInfo*))IndexedSet_1_Contains_m11694_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::CopyTo(T[],System.Int32)
#define IndexedSet_1_CopyTo_m12732(__this, ___array, ___arrayIndex, method) (( void (*) (IndexedSet_1_t303 *, GraphicU5BU5D_t1917*, int32_t, const MethodInfo*))IndexedSet_1_CopyTo_m11696_gshared)(__this, ___array, ___arrayIndex, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Count()
#define IndexedSet_1_get_Count_m12733(__this, method) (( int32_t (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1_get_Count_m11698_gshared)(__this, method)
// System.Boolean UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_IsReadOnly()
#define IndexedSet_1_get_IsReadOnly_m12734(__this, method) (( bool (*) (IndexedSet_1_t303 *, const MethodInfo*))IndexedSet_1_get_IsReadOnly_m11700_gshared)(__this, method)
// System.Int32 UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::IndexOf(T)
#define IndexedSet_1_IndexOf_m12735(__this, ___item, method) (( int32_t (*) (IndexedSet_1_t303 *, Graphic_t122 *, const MethodInfo*))IndexedSet_1_IndexOf_m11702_gshared)(__this, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Insert(System.Int32,T)
#define IndexedSet_1_Insert_m12736(__this, ___index, ___item, method) (( void (*) (IndexedSet_1_t303 *, int32_t, Graphic_t122 *, const MethodInfo*))IndexedSet_1_Insert_m11704_gshared)(__this, ___index, ___item, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAt(System.Int32)
#define IndexedSet_1_RemoveAt_m12737(__this, ___index, method) (( void (*) (IndexedSet_1_t303 *, int32_t, const MethodInfo*))IndexedSet_1_RemoveAt_m11706_gshared)(__this, ___index, method)
// T UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::get_Item(System.Int32)
#define IndexedSet_1_get_Item_m12738(__this, ___index, method) (( Graphic_t122 * (*) (IndexedSet_1_t303 *, int32_t, const MethodInfo*))IndexedSet_1_get_Item_m11708_gshared)(__this, ___index, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::set_Item(System.Int32,T)
#define IndexedSet_1_set_Item_m12739(__this, ___index, ___value, method) (( void (*) (IndexedSet_1_t303 *, int32_t, Graphic_t122 *, const MethodInfo*))IndexedSet_1_set_Item_m11710_gshared)(__this, ___index, ___value, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::RemoveAll(System.Predicate`1<T>)
#define IndexedSet_1_RemoveAll_m12740(__this, ___match, method) (( void (*) (IndexedSet_1_t303 *, Predicate_1_t1919 *, const MethodInfo*))IndexedSet_1_RemoveAll_m11711_gshared)(__this, ___match, method)
// System.Void UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>::Sort(System.Comparison`1<T>)
#define IndexedSet_1_Sort_m12741(__this, ___sortLayoutFunction, method) (( void (*) (IndexedSet_1_t303 *, Comparison_1_t125 *, const MethodInfo*))IndexedSet_1_Sort_m11712_gshared)(__this, ___sortLayoutFunction, method)

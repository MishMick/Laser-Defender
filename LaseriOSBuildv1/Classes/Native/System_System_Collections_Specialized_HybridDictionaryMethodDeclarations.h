﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.HybridDictionary
struct HybridDictionary_t894;
// System.Collections.IDictionary
struct IDictionary_t980;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1045;

// System.Void System.Collections.Specialized.HybridDictionary::.ctor()
extern "C" void HybridDictionary__ctor_m4317 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::.ctor(System.Int32,System.Boolean)
extern "C" void HybridDictionary__ctor_m4318 (HybridDictionary_t894 * __this, int32_t ___initialSize, bool ___caseInsensitive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.HybridDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HybridDictionary_System_Collections_IEnumerable_GetEnumerator_m4319 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Collections.Specialized.HybridDictionary::get_inner()
extern "C" Object_t * HybridDictionary_get_inner_m4320 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.HybridDictionary::get_Count()
extern "C" int32_t HybridDictionary_get_Count_m4321 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::get_IsSynchronized()
extern "C" bool HybridDictionary_get_IsSynchronized_m4322 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_Item(System.Object)
extern "C" Object_t * HybridDictionary_get_Item_m4323 (HybridDictionary_t894 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::set_Item(System.Object,System.Object)
extern "C" void HybridDictionary_set_Item_m4324 (HybridDictionary_t894 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.HybridDictionary::get_SyncRoot()
extern "C" Object_t * HybridDictionary_get_SyncRoot_m4325 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Add(System.Object,System.Object)
extern "C" void HybridDictionary_Add_m4326 (HybridDictionary_t894 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.HybridDictionary::Contains(System.Object)
extern "C" bool HybridDictionary_Contains_m4327 (HybridDictionary_t894 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::CopyTo(System.Array,System.Int32)
extern "C" void HybridDictionary_CopyTo_m4328 (HybridDictionary_t894 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.HybridDictionary::GetEnumerator()
extern "C" Object_t * HybridDictionary_GetEnumerator_m4329 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Remove(System.Object)
extern "C" void HybridDictionary_Remove_m4330 (HybridDictionary_t894 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.HybridDictionary::Switch()
extern "C" void HybridDictionary_Switch_m4331 (HybridDictionary_t894 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
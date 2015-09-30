#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>
struct DefaultComparer_t1907;
// UnityEngine.UIVertex
#include "UnityEngine_UnityEngine_UIVertex.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::.ctor()
extern "C" void DefaultComparer__ctor_m12424_gshared (DefaultComparer_t1907 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m12424(__this, method) (( void (*) (DefaultComparer_t1907 *, const MethodInfo*))DefaultComparer__ctor_m12424_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m12425_gshared (DefaultComparer_t1907 * __this, UIVertex_t159  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m12425(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1907 *, UIVertex_t159 , const MethodInfo*))DefaultComparer_GetHashCode_m12425_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.UIVertex>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m12426_gshared (DefaultComparer_t1907 * __this, UIVertex_t159  ___x, UIVertex_t159  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m12426(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1907 *, UIVertex_t159 , UIVertex_t159 , const MethodInfo*))DefaultComparer_Equals_m12426_gshared)(__this, ___x, ___y, method)

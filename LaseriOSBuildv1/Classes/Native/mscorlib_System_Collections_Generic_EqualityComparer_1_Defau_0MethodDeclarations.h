#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>
struct DefaultComparer_t1790;
// UnityEngine.EventSystems.RaycastResult
#include "UnityEngine_UI_UnityEngine_EventSystems_RaycastResult.h"

// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::.ctor()
extern "C" void DefaultComparer__ctor_m10867_gshared (DefaultComparer_t1790 * __this, const MethodInfo* method);
#define DefaultComparer__ctor_m10867(__this, method) (( void (*) (DefaultComparer_t1790 *, const MethodInfo*))DefaultComparer__ctor_m10867_gshared)(__this, method)
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::GetHashCode(T)
extern "C" int32_t DefaultComparer_GetHashCode_m10868_gshared (DefaultComparer_t1790 * __this, RaycastResult_t72  ___obj, const MethodInfo* method);
#define DefaultComparer_GetHashCode_m10868(__this, ___obj, method) (( int32_t (*) (DefaultComparer_t1790 *, RaycastResult_t72 , const MethodInfo*))DefaultComparer_GetHashCode_m10868_gshared)(__this, ___obj, method)
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<UnityEngine.EventSystems.RaycastResult>::Equals(T,T)
extern "C" bool DefaultComparer_Equals_m10869_gshared (DefaultComparer_t1790 * __this, RaycastResult_t72  ___x, RaycastResult_t72  ___y, const MethodInfo* method);
#define DefaultComparer_Equals_m10869(__this, ___x, ___y, method) (( bool (*) (DefaultComparer_t1790 *, RaycastResult_t72 , RaycastResult_t72 , const MethodInfo*))DefaultComparer_Equals_m10869_gshared)(__this, ___x, ___y, method)

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GUILayer
struct GUILayer_t366;
// UnityEngine.GUIElement
struct GUIElement_t365;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// UnityEngine.GUIElement UnityEngine.GUILayer::HitTest(UnityEngine.Vector3)
extern "C" GUIElement_t365 * GUILayer_HitTest_m1954 (GUILayer_t366 * __this, Vector3_t6  ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIElement UnityEngine.GUILayer::INTERNAL_CALL_HitTest(UnityEngine.GUILayer,UnityEngine.Vector3&)
extern "C" GUIElement_t365 * GUILayer_INTERNAL_CALL_HitTest_m1955 (Object_t * __this /* static, unused */, GUILayer_t366 * ___self, Vector3_t6 * ___screenPosition, const MethodInfo* method) IL2CPP_METHOD_ATTR;

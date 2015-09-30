#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t286;
// UnityEngine.Collider2D
struct Collider2D_t17;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t20;
// UnityEngine.Transform
struct Transform_t18;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern "C" Vector2_t23  RaycastHit2D_get_point_m1420 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern "C" Vector2_t23  RaycastHit2D_get_normal_m1421 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.RaycastHit2D::get_fraction()
extern "C" float RaycastHit2D_get_fraction_m1511 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern "C" Collider2D_t17 * RaycastHit2D_get_collider_m1417 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody2D UnityEngine.RaycastHit2D::get_rigidbody()
extern "C" Rigidbody2D_t20 * RaycastHit2D_get_rigidbody_m2517 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.RaycastHit2D::get_transform()
extern "C" Transform_t18 * RaycastHit2D_get_transform_m1418 (RaycastHit2D_t286 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

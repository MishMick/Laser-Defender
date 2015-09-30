#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Projectile
struct Projectile_t13;
// UnityEngine.Collision2D
struct Collision2D_t19;

// System.Void Projectile::.ctor()
extern "C" void Projectile__ctor_m31 (Projectile_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::Hit()
extern "C" void Projectile_Hit_m32 (Projectile_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Projectile::getDamage()
extern "C" float Projectile_getDamage_m33 (Projectile_t13 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void Projectile_OnCollisionEnter2D_m34 (Projectile_t13 * __this, Collision2D_t19 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;

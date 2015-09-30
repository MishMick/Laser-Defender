#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PlayerController
struct PlayerController_t11;
// UnityEngine.Collider2D
struct Collider2D_t17;

// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m21 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::.cctor()
extern "C" void PlayerController__cctor_m22 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Start()
extern "C" void PlayerController_Start_m23 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::movement()
extern "C" void PlayerController_movement_m24 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::respawn()
extern "C" void PlayerController_respawn_m25 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Fire()
extern "C" void PlayerController_Fire_m26 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::Update()
extern "C" void PlayerController_Update_m27 (PlayerController_t11 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void PlayerController_OnTriggerEnter2D_m28 (PlayerController_t11 * __this, Collider2D_t17 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;

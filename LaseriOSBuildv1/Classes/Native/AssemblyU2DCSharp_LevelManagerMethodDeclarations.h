#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// LevelManager
struct LevelManager_t8;
// System.String
struct String_t;

// System.Void LevelManager::.ctor()
extern "C" void LevelManager__ctor_m12 (LevelManager_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadLevel(System.String)
extern "C" void LevelManager_LoadLevel_m13 (LevelManager_t8 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::QuitRequest()
extern "C" void LevelManager_QuitRequest_m14 (LevelManager_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LevelManager::LoadNextLevel()
extern "C" void LevelManager_LoadNextLevel_m15 (LevelManager_t8 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

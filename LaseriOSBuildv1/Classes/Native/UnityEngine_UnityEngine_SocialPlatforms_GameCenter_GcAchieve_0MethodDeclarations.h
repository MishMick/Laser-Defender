#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t528;
struct GcAchievementData_t528_marshaled;
// UnityEngine.SocialPlatforms.Impl.Achievement
struct Achievement_t537;

// UnityEngine.SocialPlatforms.Impl.Achievement UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::ToAchievement()
extern "C" Achievement_t537 * GcAchievementData_ToAchievement_m2903 (GcAchievementData_t528 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcAchievementData_t528_marshal(const GcAchievementData_t528& unmarshaled, GcAchievementData_t528_marshaled& marshaled);
void GcAchievementData_t528_marshal_back(const GcAchievementData_t528_marshaled& marshaled, GcAchievementData_t528& unmarshaled);
void GcAchievementData_t528_marshal_cleanup(GcAchievementData_t528_marshaled& marshaled);

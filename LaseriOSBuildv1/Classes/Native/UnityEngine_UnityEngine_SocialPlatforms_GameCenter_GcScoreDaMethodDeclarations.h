#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t529;
struct GcScoreData_t529_marshaled;
// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t539;

// UnityEngine.SocialPlatforms.Impl.Score UnityEngine.SocialPlatforms.GameCenter.GcScoreData::ToScore()
extern "C" Score_t539 * GcScoreData_ToScore_m2904 (GcScoreData_t529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void GcScoreData_t529_marshal(const GcScoreData_t529& unmarshaled, GcScoreData_t529_marshaled& marshaled);
void GcScoreData_t529_marshal_back(const GcScoreData_t529_marshaled& marshaled, GcScoreData_t529& unmarshaled);
void GcScoreData_t529_marshal_cleanup(GcScoreData_t529_marshaled& marshaled);

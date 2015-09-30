#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.SkeletonBone
struct SkeletonBone_t455;
struct SkeletonBone_t455_marshaled;

void SkeletonBone_t455_marshal(const SkeletonBone_t455& unmarshaled, SkeletonBone_t455_marshaled& marshaled);
void SkeletonBone_t455_marshal_back(const SkeletonBone_t455_marshaled& marshaled, SkeletonBone_t455& unmarshaled);
void SkeletonBone_t455_marshal_cleanup(SkeletonBone_t455_marshaled& marshaled);

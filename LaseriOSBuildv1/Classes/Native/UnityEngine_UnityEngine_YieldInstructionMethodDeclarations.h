#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.YieldInstruction
struct YieldInstruction_t345;
struct YieldInstruction_t345_marshaled;

// System.Void UnityEngine.YieldInstruction::.ctor()
extern "C" void YieldInstruction__ctor_m2488 (YieldInstruction_t345 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void YieldInstruction_t345_marshal(const YieldInstruction_t345& unmarshaled, YieldInstruction_t345_marshaled& marshaled);
void YieldInstruction_t345_marshal_back(const YieldInstruction_t345_marshaled& marshaled, YieldInstruction_t345& unmarshaled);
void YieldInstruction_t345_marshal_cleanup(YieldInstruction_t345_marshaled& marshaled);

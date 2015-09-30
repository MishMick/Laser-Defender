#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Gradient
struct Gradient_t369;
struct Gradient_t369_marshaled;

// System.Void UnityEngine.Gradient::.ctor()
extern "C" void Gradient__ctor_m1958 (Gradient_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Init()
extern "C" void Gradient_Init_m1959 (Gradient_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Cleanup()
extern "C" void Gradient_Cleanup_m1960 (Gradient_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Gradient::Finalize()
extern "C" void Gradient_Finalize_m1961 (Gradient_t369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Gradient_t369_marshal(const Gradient_t369& unmarshaled, Gradient_t369_marshaled& marshaled);
void Gradient_t369_marshal_back(const Gradient_t369_marshaled& marshaled, Gradient_t369& unmarshaled);
void Gradient_t369_marshal_cleanup(Gradient_t369_marshaled& marshaled);

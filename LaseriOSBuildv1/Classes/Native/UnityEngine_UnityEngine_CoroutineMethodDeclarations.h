#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Coroutine
struct Coroutine_t162;
struct Coroutine_t162_marshaled;

// System.Void UnityEngine.Coroutine::.ctor()
extern "C" void Coroutine__ctor_m1843 (Coroutine_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::ReleaseCoroutine()
extern "C" void Coroutine_ReleaseCoroutine_m1844 (Coroutine_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Coroutine::Finalize()
extern "C" void Coroutine_Finalize_m1845 (Coroutine_t162 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void Coroutine_t162_marshal(const Coroutine_t162& unmarshaled, Coroutine_t162_marshaled& marshaled);
void Coroutine_t162_marshal_back(const Coroutine_t162_marshaled& marshaled, Coroutine_t162& unmarshaled);
void Coroutine_t162_marshal_cleanup(Coroutine_t162_marshaled& marshaled);

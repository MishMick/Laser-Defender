#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WaitForSeconds
struct WaitForSeconds_t306;
struct WaitForSeconds_t306_marshaled;

// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
extern "C" void WaitForSeconds__ctor_m1576 (WaitForSeconds_t306 * __this, float ___seconds, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void WaitForSeconds_t306_marshal(const WaitForSeconds_t306& unmarshaled, WaitForSeconds_t306_marshaled& marshaled);
void WaitForSeconds_t306_marshal_back(const WaitForSeconds_t306_marshaled& marshaled, WaitForSeconds_t306& unmarshaled);
void WaitForSeconds_t306_marshal_cleanup(WaitForSeconds_t306_marshaled& marshaled);

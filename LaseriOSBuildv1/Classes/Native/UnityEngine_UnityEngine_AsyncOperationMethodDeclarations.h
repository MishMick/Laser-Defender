#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AsyncOperation
struct AsyncOperation_t337;
struct AsyncOperation_t337_marshaled;

// System.Void UnityEngine.AsyncOperation::.ctor()
extern "C" void AsyncOperation__ctor_m2358 (AsyncOperation_t337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::InternalDestroy()
extern "C" void AsyncOperation_InternalDestroy_m2359 (AsyncOperation_t337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AsyncOperation::Finalize()
extern "C" void AsyncOperation_Finalize_m2360 (AsyncOperation_t337 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
void AsyncOperation_t337_marshal(const AsyncOperation_t337& unmarshaled, AsyncOperation_t337_marshaled& marshaled);
void AsyncOperation_t337_marshal_back(const AsyncOperation_t337_marshaled& marshaled, AsyncOperation_t337& unmarshaled);
void AsyncOperation_t337_marshal_cleanup(AsyncOperation_t337_marshaled& marshaled);

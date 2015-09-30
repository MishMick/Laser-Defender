#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.MulticastNotSupportedException
struct MulticastNotSupportedException_t1642;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.MulticastNotSupportedException::.ctor()
extern "C" void MulticastNotSupportedException__ctor_m9919 (MulticastNotSupportedException_t1642 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MulticastNotSupportedException::.ctor(System.String)
extern "C" void MulticastNotSupportedException__ctor_m9920 (MulticastNotSupportedException_t1642 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.MulticastNotSupportedException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void MulticastNotSupportedException__ctor_m9921 (MulticastNotSupportedException_t1642 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;

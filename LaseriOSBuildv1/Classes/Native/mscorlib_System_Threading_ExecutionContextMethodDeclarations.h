﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.ExecutionContext
struct ExecutionContext_t1385;
// System.Security.SecurityContext
struct SecurityContext_t1535;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t612;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Threading.ExecutionContext::.ctor()
extern "C" void ExecutionContext__ctor_m9274 (ExecutionContext_t1385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Threading.ExecutionContext)
extern "C" void ExecutionContext__ctor_m9275 (ExecutionContext_t1385 * __this, ExecutionContext_t1385 * ___ec, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext__ctor_m9276 (ExecutionContext_t1385 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.ExecutionContext::Capture()
extern "C" ExecutionContext_t1385 * ExecutionContext_Capture_m9277 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void ExecutionContext_GetObjectData_m9278 (ExecutionContext_t1385 * __this, SerializationInfo_t612 * ___info, StreamingContext_t613  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityContext System.Threading.ExecutionContext::get_SecurityContext()
extern "C" SecurityContext_t1535 * ExecutionContext_get_SecurityContext_m9279 (ExecutionContext_t1385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ExecutionContext::set_SecurityContext(System.Security.SecurityContext)
extern "C" void ExecutionContext_set_SecurityContext_m9280 (ExecutionContext_t1385 * __this, SecurityContext_t1535 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::get_FlowSuppressed()
extern "C" bool ExecutionContext_get_FlowSuppressed_m9281 (ExecutionContext_t1385 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.ExecutionContext::IsFlowSuppressed()
extern "C" bool ExecutionContext_IsFlowSuppressed_m9282 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;

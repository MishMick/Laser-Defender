﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Reflection.MonoMethodInfo
struct MonoMethodInfo_t1319;
// System.Type
struct Type_t;
// System.Reflection.ParameterInfo[]
struct ParameterInfoU5BU5D_t665;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.Reflection.MonoMethodInfo
#include "mscorlib_System_Reflection_MonoMethodInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"

// System.Void System.Reflection.MonoMethodInfo::get_method_info(System.IntPtr,System.Reflection.MonoMethodInfo&)
extern "C" void MonoMethodInfo_get_method_info_m7891 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MonoMethodInfo_t1319 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MonoMethodInfo System.Reflection.MonoMethodInfo::GetMethodInfo(System.IntPtr)
extern "C" MonoMethodInfo_t1319  MonoMethodInfo_GetMethodInfo_m7892 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetDeclaringType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetDeclaringType_m7893 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Reflection.MonoMethodInfo::GetReturnType(System.IntPtr)
extern "C" Type_t * MonoMethodInfo_GetReturnType_m7894 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodAttributes System.Reflection.MonoMethodInfo::GetAttributes(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetAttributes_m7895 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.CallingConventions System.Reflection.MonoMethodInfo::GetCallingConvention(System.IntPtr)
extern "C" int32_t MonoMethodInfo_GetCallingConvention_m7896 (Object_t * __this /* static, unused */, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::get_parameter_info(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t665* MonoMethodInfo_get_parameter_info_m7897 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.ParameterInfo[] System.Reflection.MonoMethodInfo::GetParametersInfo(System.IntPtr,System.Reflection.MemberInfo)
extern "C" ParameterInfoU5BU5D_t665* MonoMethodInfo_GetParametersInfo_m7898 (Object_t * __this /* static, unused */, IntPtr_t ___handle, MemberInfo_t * ___member, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.PermissionSet
struct PermissionSet_t1287;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t416;

// System.Void System.Security.PermissionSet::.ctor()
extern "C" void PermissionSet__ctor_m8964 (PermissionSet_t1287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::.ctor(System.String)
extern "C" void PermissionSet__ctor_m8965 (PermissionSet_t1287 * __this, String_t* ___xml, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.PermissionSet::set_DeclarativeSecurity(System.Boolean)
extern "C" void PermissionSet_set_DeclarativeSecurity_m8966 (PermissionSet_t1287 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.PermissionSet System.Security.PermissionSet::CreateFromBinaryFormat(System.Byte[])
extern "C" PermissionSet_t1287 * PermissionSet_CreateFromBinaryFormat_m8967 (Object_t * __this /* static, unused */, ByteU5BU5D_t416* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;

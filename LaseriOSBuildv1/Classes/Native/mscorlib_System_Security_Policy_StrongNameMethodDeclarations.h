﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.StrongName
struct StrongName_t1530;
// System.String
struct String_t;
// System.Security.Permissions.StrongNamePublicKeyBlob
struct StrongNamePublicKeyBlob_t1525;
// System.Version
struct Version_t922;
// System.Object
struct Object_t;

// System.String System.Security.Policy.StrongName::get_Name()
extern "C" String_t* StrongName_get_Name_m8945 (StrongName_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.StrongNamePublicKeyBlob System.Security.Policy.StrongName::get_PublicKey()
extern "C" StrongNamePublicKeyBlob_t1525 * StrongName_get_PublicKey_m8946 (StrongName_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Security.Policy.StrongName::get_Version()
extern "C" Version_t922 * StrongName_get_Version_m8947 (StrongName_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.StrongName::Equals(System.Object)
extern "C" bool StrongName_Equals_m8948 (StrongName_t1530 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Policy.StrongName::GetHashCode()
extern "C" int32_t StrongName_GetHashCode_m8949 (StrongName_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Policy.StrongName::ToString()
extern "C" String_t* StrongName_ToString_m8950 (StrongName_t1530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

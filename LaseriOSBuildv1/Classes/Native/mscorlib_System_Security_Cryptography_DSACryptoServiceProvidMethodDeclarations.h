﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSACryptoServiceProvider
struct DSACryptoServiceProvider_t858;
// System.Security.Cryptography.CspParameters
struct CspParameters_t854;
// System.Byte[]
struct ByteU5BU5D_t416;
// System.Object
struct Object_t;
// System.EventArgs
struct EventArgs_t736;
// System.Security.Cryptography.DSAParameters
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor()
extern "C" void DSACryptoServiceProvider__ctor_m8630 (DSACryptoServiceProvider_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32)
extern "C" void DSACryptoServiceProvider__ctor_m4228 (DSACryptoServiceProvider_t858 * __this, int32_t ___dwKeySize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.ctor(System.Int32,System.Security.Cryptography.CspParameters)
extern "C" void DSACryptoServiceProvider__ctor_m8631 (DSACryptoServiceProvider_t858 * __this, int32_t ___dwKeySize, CspParameters_t854 * ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::.cctor()
extern "C" void DSACryptoServiceProvider__cctor_m8632 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Finalize()
extern "C" void DSACryptoServiceProvider_Finalize_m8633 (DSACryptoServiceProvider_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.DSACryptoServiceProvider::get_KeySize()
extern "C" int32_t DSACryptoServiceProvider_get_KeySize_m8634 (DSACryptoServiceProvider_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::get_PublicOnly()
extern "C" bool DSACryptoServiceProvider_get_PublicOnly_m5230 (DSACryptoServiceProvider_t858 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters System.Security.Cryptography.DSACryptoServiceProvider::ExportParameters(System.Boolean)
extern "C" DSAParameters_t849  DSACryptoServiceProvider_ExportParameters_m8635 (DSACryptoServiceProvider_t858 * __this, bool ___includePrivateParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::ImportParameters(System.Security.Cryptography.DSAParameters)
extern "C" void DSACryptoServiceProvider_ImportParameters_m8636 (DSACryptoServiceProvider_t858 * __this, DSAParameters_t849  ___parameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.DSACryptoServiceProvider::CreateSignature(System.Byte[])
extern "C" ByteU5BU5D_t416* DSACryptoServiceProvider_CreateSignature_m8637 (DSACryptoServiceProvider_t858 * __this, ByteU5BU5D_t416* ___rgbHash, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.DSACryptoServiceProvider::VerifySignature(System.Byte[],System.Byte[])
extern "C" bool DSACryptoServiceProvider_VerifySignature_m8638 (DSACryptoServiceProvider_t858 * __this, ByteU5BU5D_t416* ___rgbHash, ByteU5BU5D_t416* ___rgbSignature, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::Dispose(System.Boolean)
extern "C" void DSACryptoServiceProvider_Dispose_m8639 (DSACryptoServiceProvider_t858 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.DSACryptoServiceProvider::OnKeyGenerated(System.Object,System.EventArgs)
extern "C" void DSACryptoServiceProvider_OnKeyGenerated_m8640 (DSACryptoServiceProvider_t858 * __this, Object_t * ___sender, EventArgs_t736 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;

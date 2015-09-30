#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t937;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t935;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t837;
// System.Security.Cryptography.Oid
struct Oid_t936;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t747;
// System.Byte[]
struct ByteU5BU5D_t416;
// System.Security.Cryptography.DSA
struct DSA_t745;
// System.Security.Cryptography.RSA
struct RSA_t739;

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m4525 (PublicKey_t937 * __this, X509Certificate_t747 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t935 * PublicKey_get_EncodedKeyValue_m4526 (PublicKey_t937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t935 * PublicKey_get_EncodedParameters_m4527 (PublicKey_t937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t837 * PublicKey_get_Key_m4528 (PublicKey_t937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t936 * PublicKey_get_Oid_m4529 (PublicKey_t937 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t416* PublicKey_GetUnsignedBigInteger_m4530 (Object_t * __this /* static, unused */, ByteU5BU5D_t416* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t745 * PublicKey_DecodeDSA_m4531 (Object_t * __this /* static, unused */, ByteU5BU5D_t416* ___rawPublicKey, ByteU5BU5D_t416* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t739 * PublicKey_DecodeRSA_m4532 (Object_t * __this /* static, unused */, ByteU5BU5D_t416* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;

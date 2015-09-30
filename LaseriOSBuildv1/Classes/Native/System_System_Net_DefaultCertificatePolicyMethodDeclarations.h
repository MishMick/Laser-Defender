#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.DefaultCertificatePolicy
struct DefaultCertificatePolicy_t913;
// System.Net.ServicePoint
struct ServicePoint_t875;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t818;
// System.Net.WebRequest
struct WebRequest_t879;

// System.Void System.Net.DefaultCertificatePolicy::.ctor()
extern "C" void DefaultCertificatePolicy__ctor_m4408 (DefaultCertificatePolicy_t913 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DefaultCertificatePolicy::CheckValidationResult(System.Net.ServicePoint,System.Security.Cryptography.X509Certificates.X509Certificate,System.Net.WebRequest,System.Int32)
extern "C" bool DefaultCertificatePolicy_CheckValidationResult_m4409 (DefaultCertificatePolicy_t913 * __this, ServicePoint_t875 * ___point, X509Certificate_t818 * ___certificate, WebRequest_t879 * ___request, int32_t ___certificateProblem, const MethodInfo* method) IL2CPP_METHOD_ATTR;

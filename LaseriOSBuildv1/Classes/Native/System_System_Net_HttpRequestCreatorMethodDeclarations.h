#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.HttpRequestCreator
struct HttpRequestCreator_t921;
// System.Net.WebRequest
struct WebRequest_t879;
// System.Uri
struct Uri_t490;

// System.Void System.Net.HttpRequestCreator::.ctor()
extern "C" void HttpRequestCreator__ctor_m4422 (HttpRequestCreator_t921 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.HttpRequestCreator::Create(System.Uri)
extern "C" WebRequest_t879 * HttpRequestCreator_Create_m4423 (HttpRequestCreator_t921 * __this, Uri_t490 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;

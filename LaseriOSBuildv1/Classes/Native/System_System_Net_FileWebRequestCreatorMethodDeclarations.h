#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebRequestCreator
struct FileWebRequestCreator_t917;
// System.Net.WebRequest
struct WebRequest_t879;
// System.Uri
struct Uri_t490;

// System.Void System.Net.FileWebRequestCreator::.ctor()
extern "C" void FileWebRequestCreator__ctor_m4414 (FileWebRequestCreator_t917 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.FileWebRequestCreator::Create(System.Uri)
extern "C" WebRequest_t879 * FileWebRequestCreator_Create_m4415 (FileWebRequestCreator_t917 * __this, Uri_t490 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;

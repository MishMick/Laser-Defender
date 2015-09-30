#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.InteropServices.DllImportAttribute
struct DllImportAttribute_t1074;
// System.String
struct String_t;

// System.Void System.Runtime.InteropServices.DllImportAttribute::.ctor(System.String)
extern "C" void DllImportAttribute__ctor_m6108 (DllImportAttribute_t1074 * __this, String_t* ___dllName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.InteropServices.DllImportAttribute::get_Value()
extern "C" String_t* DllImportAttribute_get_Value_m6109 (DllImportAttribute_t1074 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

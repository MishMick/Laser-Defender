﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.CodePointIndexer
struct CodePointIndexer_t1101;
// System.Int32[]
struct Int32U5BU5D_t836;

// System.Void Mono.Globalization.Unicode.CodePointIndexer::.ctor(System.Int32[],System.Int32[],System.Int32,System.Int32)
extern "C" void CodePointIndexer__ctor_m6143 (CodePointIndexer_t1101 * __this, Int32U5BU5D_t836* ___starts, Int32U5BU5D_t836* ___ends, int32_t ___defaultIndex, int32_t ___defaultCP, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.CodePointIndexer::ToIndex(System.Int32)
extern "C" int32_t CodePointIndexer_ToIndex_m6144 (CodePointIndexer_t1101 * __this, int32_t ___cp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

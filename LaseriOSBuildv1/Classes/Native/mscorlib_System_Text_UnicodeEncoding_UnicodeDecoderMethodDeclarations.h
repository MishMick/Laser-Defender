﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Text.UnicodeEncoding/UnicodeDecoder
struct UnicodeDecoder_t1571;
// System.Byte[]
struct ByteU5BU5D_t416;
// System.Char[]
struct CharU5BU5D_t157;

// System.Void System.Text.UnicodeEncoding/UnicodeDecoder::.ctor(System.Boolean)
extern "C" void UnicodeDecoder__ctor_m9243 (UnicodeDecoder_t1571 * __this, bool ___bigEndian, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Text.UnicodeEncoding/UnicodeDecoder::GetChars(System.Byte[],System.Int32,System.Int32,System.Char[],System.Int32)
extern "C" int32_t UnicodeDecoder_GetChars_m9244 (UnicodeDecoder_t1571 * __this, ByteU5BU5D_t416* ___bytes, int32_t ___byteIndex, int32_t ___byteCount, CharU5BU5D_t157* ___chars, int32_t ___charIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
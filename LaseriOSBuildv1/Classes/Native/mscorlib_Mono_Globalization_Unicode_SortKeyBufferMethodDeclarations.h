#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Globalization.Unicode.SortKeyBuffer
struct SortKeyBuffer_t1119;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t416;
// System.Globalization.SortKey
struct SortKey_t1118;
// System.Globalization.CompareOptions
#include "mscorlib_System_Globalization_CompareOptions.h"

// System.Void Mono.Globalization.Unicode.SortKeyBuffer::.ctor(System.Int32)
extern "C" void SortKeyBuffer__ctor_m6238 (SortKeyBuffer_t1119 * __this, int32_t ___lcid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Reset()
extern "C" void SortKeyBuffer_Reset_m6239 (SortKeyBuffer_t1119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::Initialize(System.Globalization.CompareOptions,System.Int32,System.String,System.Boolean)
extern "C" void SortKeyBuffer_Initialize_m6240 (SortKeyBuffer_t1119 * __this, int32_t ___options, int32_t ___lcid, String_t* ___s, bool ___frenchSort, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendCJKExtension(System.Byte,System.Byte)
extern "C" void SortKeyBuffer_AppendCJKExtension_m6241 (SortKeyBuffer_t1119 * __this, uint8_t ___lv1msb, uint8_t ___lv1lsb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendKana(System.Byte,System.Byte,System.Byte,System.Byte,System.Boolean,System.Byte,System.Boolean,System.Boolean)
extern "C" void SortKeyBuffer_AppendKana_m6242 (SortKeyBuffer_t1119 * __this, uint8_t ___category, uint8_t ___lv1, uint8_t ___lv2, uint8_t ___lv3, bool ___isSmallKana, uint8_t ___markType, bool ___isKatakana, bool ___isHalfWidth, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendNormal(System.Byte,System.Byte,System.Byte,System.Byte)
extern "C" void SortKeyBuffer_AppendNormal_m6243 (SortKeyBuffer_t1119 * __this, uint8_t ___category, uint8_t ___lv1, uint8_t ___lv2, uint8_t ___lv3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendLevel5(System.Byte,System.Byte)
extern "C" void SortKeyBuffer_AppendLevel5_m6244 (SortKeyBuffer_t1119 * __this, uint8_t ___category, uint8_t ___lv1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Globalization.Unicode.SortKeyBuffer::AppendBufferPrimitive(System.Byte,System.Byte[]&,System.Int32&)
extern "C" void SortKeyBuffer_AppendBufferPrimitive_m6245 (SortKeyBuffer_t1119 * __this, uint8_t ___value, ByteU5BU5D_t416** ___buf, int32_t* ___bidx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResultAndReset()
extern "C" SortKey_t1118 * SortKeyBuffer_GetResultAndReset_m6246 (SortKeyBuffer_t1119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Globalization.Unicode.SortKeyBuffer::GetOptimizedLength(System.Byte[],System.Int32,System.Byte)
extern "C" int32_t SortKeyBuffer_GetOptimizedLength_m6247 (SortKeyBuffer_t1119 * __this, ByteU5BU5D_t416* ___data, int32_t ___len, uint8_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.SortKey Mono.Globalization.Unicode.SortKeyBuffer::GetResult()
extern "C" SortKey_t1118 * SortKeyBuffer_GetResult_m6248 (SortKeyBuffer_t1119 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;

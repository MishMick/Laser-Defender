﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Char
struct Char_t305;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.IFormatProvider
struct IFormatProvider_t1692;
// System.String
struct String_t;
// System.Globalization.CultureInfo
struct CultureInfo_t639;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.UnicodeCategory
#include "mscorlib_System_Globalization_UnicodeCategory.h"
// System.TypeCode
#include "mscorlib_System_TypeCode.h"

// System.Void System.Char::.cctor()
extern "C" void Char__cctor_m5528 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Char::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Char_System_IConvertible_ToType_m5529 (uint16_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Char_System_IConvertible_ToBoolean_m5530 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Char::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Char_System_IConvertible_ToByte_m5531 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Char_System_IConvertible_ToChar_m5532 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Char::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t375  Char_System_IConvertible_ToDateTime_m5533 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Char::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t644  Char_System_IConvertible_ToDecimal_m5534 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Char::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Char_System_IConvertible_ToDouble_m5535 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Char::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Char_System_IConvertible_ToInt16_m5536 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Char_System_IConvertible_ToInt32_m5537 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Char::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Char_System_IConvertible_ToInt64_m5538 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Char::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Char_System_IConvertible_ToSByte_m5539 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Char::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Char_System_IConvertible_ToSingle_m5540 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Char::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Char_System_IConvertible_ToUInt16_m5541 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Char::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Char_System_IConvertible_ToUInt32_m5542 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Char::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Char_System_IConvertible_ToUInt64_m5543 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::GetDataTablePointers(System.Byte*&,System.Byte*&,System.Double*&,System.UInt16*&,System.UInt16*&,System.UInt16*&,System.UInt16*&)
extern "C" void Char_GetDataTablePointers_m5544 (Object_t * __this /* static, unused */, uint8_t** ___category_data, uint8_t** ___numeric_data, double** ___numeric_data_values, uint16_t** ___to_lower_data_low, uint16_t** ___to_lower_data_high, uint16_t** ___to_upper_data_low, uint16_t** ___to_upper_data_high, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Object)
extern "C" int32_t Char_CompareTo_m5545 (uint16_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Object)
extern "C" bool Char_Equals_m5546 (uint16_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::CompareTo(System.Char)
extern "C" int32_t Char_CompareTo_m5547 (uint16_t* __this, uint16_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::Equals(System.Char)
extern "C" bool Char_Equals_m5548 (uint16_t* __this, uint16_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Char::GetHashCode()
extern "C" int32_t Char_GetHashCode_m5549 (uint16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.UnicodeCategory System.Char::GetUnicodeCategory(System.Char)
extern "C" int32_t Char_GetUnicodeCategory_m5259 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsDigit(System.Char)
extern "C" bool Char_IsDigit_m5257 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetter(System.Char)
extern "C" bool Char_IsLetter_m1674 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLetterOrDigit(System.Char)
extern "C" bool Char_IsLetterOrDigit_m5256 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsLower(System.Char)
extern "C" bool Char_IsLower_m1675 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsSurrogate(System.Char)
extern "C" bool Char_IsSurrogate_m5550 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsUpper(System.Char)
extern "C" bool Char_IsUpper_m1677 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.Char)
extern "C" bool Char_IsWhiteSpace_m5258 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Char::IsWhiteSpace(System.String,System.Int32)
extern "C" bool Char_IsWhiteSpace_m5231 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Char::CheckParameter(System.String,System.Int32)
extern "C" void Char_CheckParameter_m5551 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::Parse(System.String)
extern "C" uint16_t Char_Parse_m5552 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char)
extern "C" uint16_t Char_ToLower_m1678 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLowerInvariant(System.Char)
extern "C" uint16_t Char_ToLowerInvariant_m5553 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToLower(System.Char,System.Globalization.CultureInfo)
extern "C" uint16_t Char_ToLower_m5554 (Object_t * __this /* static, unused */, uint16_t ___c, CultureInfo_t639 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpper(System.Char)
extern "C" uint16_t Char_ToUpper_m1676 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Char::ToUpperInvariant(System.Char)
extern "C" uint16_t Char_ToUpperInvariant_m5233 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString()
extern "C" String_t* Char_ToString_m1639 (uint16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Char::ToString(System.IFormatProvider)
extern "C" String_t* Char_ToString_m5555 (uint16_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TypeCode System.Char::GetTypeCode()
extern "C" int32_t Char_GetTypeCode_m5556 (uint16_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
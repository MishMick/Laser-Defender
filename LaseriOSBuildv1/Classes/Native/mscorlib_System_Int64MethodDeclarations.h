﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Int64
struct Int64_t642;
// System.IFormatProvider
struct IFormatProvider_t1692;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t24;
// System.DateTime
#include "mscorlib_System_DateTime.h"
// System.Decimal
#include "mscorlib_System_Decimal.h"
// System.Globalization.NumberStyles
#include "mscorlib_System_Globalization_NumberStyles.h"

// System.Boolean System.Int64::System.IConvertible.ToBoolean(System.IFormatProvider)
extern "C" bool Int64_System_IConvertible_ToBoolean_m5338 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte System.Int64::System.IConvertible.ToByte(System.IFormatProvider)
extern "C" uint8_t Int64_System_IConvertible_ToByte_m5339 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Int64::System.IConvertible.ToChar(System.IFormatProvider)
extern "C" uint16_t Int64_System_IConvertible_ToChar_m5340 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Int64::System.IConvertible.ToDateTime(System.IFormatProvider)
extern "C" DateTime_t375  Int64_System_IConvertible_ToDateTime_m5341 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Decimal System.Int64::System.IConvertible.ToDecimal(System.IFormatProvider)
extern "C" Decimal_t644  Int64_System_IConvertible_ToDecimal_m5342 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double System.Int64::System.IConvertible.ToDouble(System.IFormatProvider)
extern "C" double Int64_System_IConvertible_ToDouble_m5343 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Int64::System.IConvertible.ToInt16(System.IFormatProvider)
extern "C" int16_t Int64_System_IConvertible_ToInt16_m5344 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::System.IConvertible.ToInt32(System.IFormatProvider)
extern "C" int32_t Int64_System_IConvertible_ToInt32_m5345 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::System.IConvertible.ToInt64(System.IFormatProvider)
extern "C" int64_t Int64_System_IConvertible_ToInt64_m5346 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.SByte System.Int64::System.IConvertible.ToSByte(System.IFormatProvider)
extern "C" int8_t Int64_System_IConvertible_ToSByte_m5347 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single System.Int64::System.IConvertible.ToSingle(System.IFormatProvider)
extern "C" float Int64_System_IConvertible_ToSingle_m5348 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Int64::System.IConvertible.ToType(System.Type,System.IFormatProvider)
extern "C" Object_t * Int64_System_IConvertible_ToType_m5349 (int64_t* __this, Type_t * ___targetType, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Int64::System.IConvertible.ToUInt16(System.IFormatProvider)
extern "C" uint16_t Int64_System_IConvertible_ToUInt16_m5350 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 System.Int64::System.IConvertible.ToUInt32(System.IFormatProvider)
extern "C" uint32_t Int64_System_IConvertible_ToUInt32_m5351 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 System.Int64::System.IConvertible.ToUInt64(System.IFormatProvider)
extern "C" uint64_t Int64_System_IConvertible_ToUInt64_m5352 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Object)
extern "C" int32_t Int64_CompareTo_m5353 (int64_t* __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Object)
extern "C" bool Int64_Equals_m5354 (int64_t* __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::GetHashCode()
extern "C" int32_t Int64_GetHashCode_m5355 (int64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Int64::CompareTo(System.Int64)
extern "C" int32_t Int64_CompareTo_m5356 (int64_t* __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Equals(System.Int64)
extern "C" bool Int64_Equals_m5357 (int64_t* __this, int64_t ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Boolean,System.Int64&,System.Exception&)
extern "C" bool Int64_Parse_m5358 (Object_t * __this /* static, unused */, String_t* ___s, bool ___tryParse, int64_t* ___result, Exception_t24 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.IFormatProvider)
extern "C" int64_t Int64_Parse_m5359 (Object_t * __this /* static, unused */, String_t* ___s, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Boolean,System.Int64&,System.Exception&)
extern "C" bool Int64_Parse_m5360 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___fp, bool ___tryParse, int64_t* ___result, Exception_t24 ** ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String)
extern "C" int64_t Int64_Parse_m5361 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Int64::Parse(System.String,System.Globalization.NumberStyles,System.IFormatProvider)
extern "C" int64_t Int64_Parse_m5362 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Int64&)
extern "C" bool Int64_TryParse_m5363 (Object_t * __this /* static, unused */, String_t* ___s, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Int64::TryParse(System.String,System.Globalization.NumberStyles,System.IFormatProvider,System.Int64&)
extern "C" bool Int64_TryParse_m3183 (Object_t * __this /* static, unused */, String_t* ___s, int32_t ___style, Object_t * ___provider, int64_t* ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString()
extern "C" String_t* Int64_ToString_m5216 (int64_t* __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.IFormatProvider)
extern "C" String_t* Int64_ToString_m3184 (int64_t* __this, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String)
extern "C" String_t* Int64_ToString_m5364 (int64_t* __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Int64::ToString(System.String,System.IFormatProvider)
extern "C" String_t* Int64_ToString_m5365 (int64_t* __this, String_t* ___format, Object_t * ___provider, const MethodInfo* method) IL2CPP_METHOD_ATTR;

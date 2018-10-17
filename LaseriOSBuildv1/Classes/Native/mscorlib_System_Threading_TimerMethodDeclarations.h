﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Threading.Timer
struct Timer_t1380;
// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m9348 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C" bool Timer_Change_m9349 (Timer_t1380 * __this, TimeSpan_t955  ___dueTime, TimeSpan_t955  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m9350 (Timer_t1380 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m9351 (Timer_t1380 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
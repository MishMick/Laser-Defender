﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Stack
struct Stack_t580;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t25;

// System.Void System.Collections.Stack::.ctor()
extern "C" void Stack__ctor_m3249 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Resize(System.Int32)
extern "C" void Stack_Resize_m6900 (Stack_t580 * __this, int32_t ___ncapacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Stack::get_Count()
extern "C" int32_t Stack_get_Count_m6901 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Stack::get_IsSynchronized()
extern "C" bool Stack_get_IsSynchronized_m6902 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::get_SyncRoot()
extern "C" Object_t * Stack_get_SyncRoot_m6903 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Clear()
extern "C" void Stack_Clear_m6904 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::CopyTo(System.Array,System.Int32)
extern "C" void Stack_CopyTo_m6905 (Stack_t580 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Stack::GetEnumerator()
extern "C" Object_t * Stack_GetEnumerator_m6906 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Peek()
extern "C" Object_t * Stack_Peek_m6907 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Stack::Pop()
extern "C" Object_t * Stack_Pop_m6908 (Stack_t580 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Stack::Push(System.Object)
extern "C" void Stack_Push_m6909 (Stack_t580 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t1773;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1972;
// System.Collections.IEnumerator
struct IEnumerator_t25;
// System.Collections.Generic.Stack`1/Enumerator<System.Object>
#include "System_System_Collections_Generic_Stack_1_Enumerator_gen.h"

// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
extern "C" void Stack_1__ctor_m10610_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1__ctor_m10610(__this, method) (( void (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1__ctor_m10610_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool Stack_1_System_Collections_ICollection_get_IsSynchronized_m10611_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_IsSynchronized_m10611(__this, method) (( bool (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_IsSynchronized_m10611_gshared)(__this, method)
// System.Object System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * Stack_1_System_Collections_ICollection_get_SyncRoot_m10612_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_get_SyncRoot_m10612(__this, method) (( Object_t * (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_System_Collections_ICollection_get_SyncRoot_m10612_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void Stack_1_System_Collections_ICollection_CopyTo_m10613_gshared (Stack_1_t1773 * __this, Array_t * ___dest, int32_t ___idx, const MethodInfo* method);
#define Stack_1_System_Collections_ICollection_CopyTo_m10613(__this, ___dest, ___idx, method) (( void (*) (Stack_1_t1773 *, Array_t *, int32_t, const MethodInfo*))Stack_1_System_Collections_ICollection_CopyTo_m10613_gshared)(__this, ___dest, ___idx, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.Stack`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10614_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10614(__this, method) (( Object_t* (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m10614_gshared)(__this, method)
// System.Collections.IEnumerator System.Collections.Generic.Stack`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * Stack_1_System_Collections_IEnumerable_GetEnumerator_m10615_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_System_Collections_IEnumerable_GetEnumerator_m10615(__this, method) (( Object_t * (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_System_Collections_IEnumerable_GetEnumerator_m10615_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
extern "C" Object_t * Stack_1_Peek_m10616_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_Peek_m10616(__this, method) (( Object_t * (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_Peek_m10616_gshared)(__this, method)
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
extern "C" Object_t * Stack_1_Pop_m10617_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_Pop_m10617(__this, method) (( Object_t * (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_Pop_m10617_gshared)(__this, method)
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
extern "C" void Stack_1_Push_m10618_gshared (Stack_1_t1773 * __this, Object_t * ___t, const MethodInfo* method);
#define Stack_1_Push_m10618(__this, ___t, method) (( void (*) (Stack_1_t1773 *, Object_t *, const MethodInfo*))Stack_1_Push_m10618_gshared)(__this, ___t, method)
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
extern "C" int32_t Stack_1_get_Count_m10619_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_get_Count_m10619(__this, method) (( int32_t (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_get_Count_m10619_gshared)(__this, method)
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t1776  Stack_1_GetEnumerator_m10620_gshared (Stack_1_t1773 * __this, const MethodInfo* method);
#define Stack_1_GetEnumerator_m10620(__this, method) (( Enumerator_t1776  (*) (Stack_1_t1773 *, const MethodInfo*))Stack_1_GetEnumerator_m10620_gshared)(__this, method)

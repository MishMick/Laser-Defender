#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3E.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
// <Module>
#include "AssemblyU2DCSharp_U3CModuleU3EMethodDeclarations.h"


// System.Array
#include "mscorlib_System_Array.h"

// EnemyBehavior
#include "AssemblyU2DCSharp_EnemyBehavior.h"
#ifndef _MSC_VER
#else
#endif
// EnemyBehavior
#include "AssemblyU2DCSharp_EnemyBehaviorMethodDeclarations.h"

// System.Void
#include "mscorlib_System_Void.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// System.Single
#include "mscorlib_System_Single.h"
// System.String
#include "mscorlib_System_String.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObject.h"
// ScoreKeeper
#include "AssemblyU2DCSharp_ScoreKeeper.h"
// UnityEngine.Collider2D
#include "UnityEngine_UnityEngine_Collider2D.h"
// Projectile
#include "AssemblyU2DCSharp_Projectile.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// UnityEngine.AudioClip
#include "UnityEngine_UnityEngine_AudioClip.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_Transform.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2D.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3MethodDeclarations.h"
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviourMethodDeclarations.h"
// UnityEngine.GameObject
#include "UnityEngine_UnityEngine_GameObjectMethodDeclarations.h"
// UnityEngine.Time
#include "UnityEngine_UnityEngine_TimeMethodDeclarations.h"
// UnityEngine.Random
#include "UnityEngine_UnityEngine_RandomMethodDeclarations.h"
// UnityEngine.Component
#include "UnityEngine_UnityEngine_ComponentMethodDeclarations.h"
// UnityEngine.Object
#include "UnityEngine_UnityEngine_ObjectMethodDeclarations.h"
// Projectile
#include "AssemblyU2DCSharp_ProjectileMethodDeclarations.h"
// UnityEngine.Transform
#include "UnityEngine_UnityEngine_TransformMethodDeclarations.h"
// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSourceMethodDeclarations.h"
// ScoreKeeper
#include "AssemblyU2DCSharp_ScoreKeeperMethodDeclarations.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_QuaternionMethodDeclarations.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2MethodDeclarations.h"
// UnityEngine.Rigidbody2D
#include "UnityEngine_UnityEngine_Rigidbody2DMethodDeclarations.h"
struct GameObject_t1;
struct ScoreKeeper_t2;
struct GameObject_t1;
struct Object_t;
// Declaration !!0 UnityEngine.GameObject::GetComponent<System.Object>()
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
extern "C" Object_t * GameObject_GetComponent_TisObject_t_m46_gshared (GameObject_t1 * __this, const MethodInfo* method);
#define GameObject_GetComponent_TisObject_t_m46(__this, method) (( Object_t * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)
// Declaration !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
// !!0 UnityEngine.GameObject::GetComponent<ScoreKeeper>()
#define GameObject_GetComponent_TisScoreKeeper_t2_m45(__this, method) (( ScoreKeeper_t2 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)
struct GameObject_t1;
struct Projectile_t13;
// Declaration !!0 UnityEngine.GameObject::GetComponent<Projectile>()
// !!0 UnityEngine.GameObject::GetComponent<Projectile>()
#define GameObject_GetComponent_TisProjectile_t13_m47(__this, method) (( Projectile_t13 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)
struct GameObject_t1;
struct Rigidbody2D_t20;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody2D>()
#define GameObject_GetComponent_TisRigidbody2D_t20_m48(__this, method) (( Rigidbody2D_t20 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)


// System.Void EnemyBehavior::.ctor()
extern "C" void EnemyBehavior__ctor_m0 (EnemyBehavior_t4 * __this, const MethodInfo* method)
{
	{
		Vector3_t6  L_0 = {0};
		Vector3__ctor_m49(&L_0, (0.0f), (-0.5f), (0.0f), /*hidden argument*/NULL);
		__this->___offset_3 = L_0;
		__this->___health_4 = (150.0f);
		__this->___projectileSpeed_5 = (10.0f);
		__this->___shotsPerSecond_6 = (0.5f);
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyBehavior::Start()
extern const MethodInfo* GameObject_GetComponent_TisScoreKeeper_t2_m45_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral0;
extern "C" void EnemyBehavior_Start_m1 (EnemyBehavior_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisScoreKeeper_t2_m45_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483649);
		_stringLiteral0 = il2cpp_codegen_string_literal_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		GameObject_t1 * L_0 = GameObject_Find_m51(NULL /*static, unused*/, _stringLiteral0, /*hidden argument*/NULL);
		NullCheck(L_0);
		ScoreKeeper_t2 * L_1 = GameObject_GetComponent_TisScoreKeeper_t2_m45(L_0, /*hidden argument*/GameObject_GetComponent_TisScoreKeeper_t2_m45_MethodInfo_var);
		__this->___scorekeeper_7 = L_1;
		return;
	}
}
// System.Void EnemyBehavior::Update()
extern "C" void EnemyBehavior_Update_m2 (EnemyBehavior_t4 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_1 = (__this->___shotsPerSecond_6);
		V_0 = ((float)((float)L_0*(float)L_1));
		float L_2 = Random_get_value_m53(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_3 = V_0;
		if ((!(((float)L_2) < ((float)L_3))))
		{
			goto IL_001e;
		}
	}
	{
		EnemyBehavior_FireAtPlayer_m4(__this, /*hidden argument*/NULL);
	}

IL_001e:
	{
		return;
	}
}
// System.Void EnemyBehavior::OnTriggerEnter2D(UnityEngine.Collider2D)
extern const MethodInfo* GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var;
extern "C" void EnemyBehavior_OnTriggerEnter2D_m3 (EnemyBehavior_t4 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		s_Il2CppMethodIntialized = true;
	}
	Projectile_t13 * V_0 = {0};
	{
		Collider2D_t17 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m54(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Projectile_t13 * L_2 = GameObject_GetComponent_TisProjectile_t13_m47(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var);
		V_0 = L_2;
		Projectile_t13 * L_3 = V_0;
		bool L_4 = Object_op_Implicit_m55(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		Projectile_t13 * L_5 = V_0;
		NullCheck(L_5);
		Projectile_Hit_m32(L_5, /*hidden argument*/NULL);
		float L_6 = (__this->___health_4);
		Projectile_t13 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = Projectile_getDamage_m33(L_7, /*hidden argument*/NULL);
		__this->___health_4 = ((float)((float)L_6-(float)L_8));
		float L_9 = (__this->___health_4);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0071;
		}
	}
	{
		GameObject_t1 * L_10 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		AudioClip_t3 * L_11 = (__this->___enemydown_8);
		Transform_t18 * L_12 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t6  L_13 = Transform_get_position_m58(L_12, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m59(NULL /*static, unused*/, L_11, L_13, (0.7f), /*hidden argument*/NULL);
		ScoreKeeper_t2 * L_14 = (__this->___scorekeeper_7);
		NullCheck(L_14);
		ScoreKeeper_Score_m40(L_14, /*hidden argument*/NULL);
	}

IL_0071:
	{
		return;
	}
}
// System.Void EnemyBehavior::FireAtPlayer()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern "C" void EnemyBehavior_FireAtPlayer_m4 (EnemyBehavior_t4 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t6  V_0 = {0};
	GameObject_t1 * V_1 = {0};
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m58(L_0, /*hidden argument*/NULL);
		Vector3_t6  L_2 = {0};
		Vector3__ctor_m49(&L_2, (0.0f), (-1.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t6  L_3 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_1, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		GameObject_t1 * L_4 = (__this->___enemylaser_2);
		Vector3_t6  L_5 = V_0;
		Quaternion_t21  L_6 = Quaternion_get_identity_m61(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t22 * L_7 = Object_Instantiate_m62(NULL /*static, unused*/, L_4, L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)IsInst(L_7, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_8 = V_1;
		NullCheck(L_8);
		Rigidbody2D_t20 * L_9 = GameObject_GetComponent_TisRigidbody2D_t20_m48(L_8, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		float L_10 = (__this->___projectileSpeed_5);
		Vector3_t6  L_11 = {0};
		Vector3__ctor_m63(&L_11, (0.0f), ((-L_10)), /*hidden argument*/NULL);
		Vector2_t23  L_12 = Vector2_op_Implicit_m64(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		NullCheck(L_9);
		Rigidbody2D_set_velocity_m65(L_9, L_12, /*hidden argument*/NULL);
		return;
	}
}
// EnemySpawner
#include "AssemblyU2DCSharp_EnemySpawner.h"
#ifndef _MSC_VER
#else
#endif
// EnemySpawner
#include "AssemblyU2DCSharp_EnemySpawnerMethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_Camera.h"
// UnityEngine.Camera
#include "UnityEngine_UnityEngine_CameraMethodDeclarations.h"
// UnityEngine.Gizmos
#include "UnityEngine_UnityEngine_GizmosMethodDeclarations.h"


// System.Void EnemySpawner::.ctor()
extern "C" void EnemySpawner__ctor_m5 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	{
		__this->___width_3 = (10.0f);
		__this->___height_4 = (5.0f);
		__this->___movingRight_5 = 1;
		__this->___speed_6 = (5.0f);
		__this->___spawnDelay_13 = (0.5f);
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.Transform EnemySpawner::NextFreePosition()
extern TypeInfo* IEnumerator_t25_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t18_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t26_il2cpp_TypeInfo_var;
extern "C" Transform_t18 * EnemySpawner_NextFreePosition_m6 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Transform_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t18 * V_0 = {0};
	Object_t * V_1 = {0};
	Transform_t18 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t24 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t24 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_002f;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t25_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t18 *)Castclass(L_3, Transform_t18_il2cpp_TypeInfo_var));
			Transform_t18 * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = Transform_get_childCount_m66(L_4, /*hidden argument*/NULL);
			if (L_5)
			{
				goto IL_002f;
			}
		}

IL_0028:
		{
			Transform_t18 * L_6 = V_0;
			V_2 = L_6;
			IL2CPP_LEAVE(0x53, FINALLY_003f);
		}

IL_002f:
		{
			Object_t * L_7 = V_1;
			NullCheck(L_7);
			bool L_8 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t25_il2cpp_TypeInfo_var, L_7);
			if (L_8)
			{
				goto IL_0011;
			}
		}

IL_003a:
		{
			IL2CPP_LEAVE(0x51, FINALLY_003f);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t24 *)e.ex;
		goto FINALLY_003f;
	}

FINALLY_003f:
	{ // begin finally (depth: 1)
		{
			Object_t * L_9 = V_1;
			V_3 = ((Object_t *)IsInst(L_9, IDisposable_t26_il2cpp_TypeInfo_var));
			Object_t * L_10 = V_3;
			if (L_10)
			{
				goto IL_004a;
			}
		}

IL_0049:
		{
			IL2CPP_END_FINALLY(63)
		}

IL_004a:
		{
			Object_t * L_11 = V_3;
			NullCheck(L_11);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t26_il2cpp_TypeInfo_var, L_11);
			IL2CPP_END_FINALLY(63)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(63)
	{
		IL2CPP_JUMP_TBL(0x53, IL_0053)
		IL2CPP_JUMP_TBL(0x51, IL_0051)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t24 *)
	}

IL_0051:
	{
		return (Transform_t18 *)NULL;
	}

IL_0053:
	{
		Transform_t18 * L_12 = V_2;
		return L_12;
	}
}
// System.Boolean EnemySpawner::AllMembersDead()
extern TypeInfo* IEnumerator_t25_il2cpp_TypeInfo_var;
extern TypeInfo* Transform_t18_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t26_il2cpp_TypeInfo_var;
extern "C" bool EnemySpawner_AllMembersDead_m7 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IEnumerator_t25_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(5);
		Transform_t18_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		IDisposable_t26_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t18 * V_0 = {0};
	Object_t * V_1 = {0};
	bool V_2 = false;
	Object_t * V_3 = {0};
	Exception_t24 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t24 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)VirtFuncInvoker0< Object_t * >::Invoke(4 /* System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator() */, L_0);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0030;
		}

IL_0011:
		{
			Object_t * L_2 = V_1;
			NullCheck(L_2);
			Object_t * L_3 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t25_il2cpp_TypeInfo_var, L_2);
			V_0 = ((Transform_t18 *)Castclass(L_3, Transform_t18_il2cpp_TypeInfo_var));
			Transform_t18 * L_4 = V_0;
			NullCheck(L_4);
			int32_t L_5 = Transform_get_childCount_m66(L_4, /*hidden argument*/NULL);
			if ((((int32_t)L_5) <= ((int32_t)0)))
			{
				goto IL_0030;
			}
		}

IL_0029:
		{
			V_2 = 0;
			IL2CPP_LEAVE(0x54, FINALLY_0040);
		}

IL_0030:
		{
			Object_t * L_6 = V_1;
			NullCheck(L_6);
			bool L_7 = (bool)InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t25_il2cpp_TypeInfo_var, L_6);
			if (L_7)
			{
				goto IL_0011;
			}
		}

IL_003b:
		{
			IL2CPP_LEAVE(0x52, FINALLY_0040);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t24 *)e.ex;
		goto FINALLY_0040;
	}

FINALLY_0040:
	{ // begin finally (depth: 1)
		{
			Object_t * L_8 = V_1;
			V_3 = ((Object_t *)IsInst(L_8, IDisposable_t26_il2cpp_TypeInfo_var));
			Object_t * L_9 = V_3;
			if (L_9)
			{
				goto IL_004b;
			}
		}

IL_004a:
		{
			IL2CPP_END_FINALLY(64)
		}

IL_004b:
		{
			Object_t * L_10 = V_3;
			NullCheck(L_10);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t26_il2cpp_TypeInfo_var, L_10);
			IL2CPP_END_FINALLY(64)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(64)
	{
		IL2CPP_JUMP_TBL(0x54, IL_0054)
		IL2CPP_JUMP_TBL(0x52, IL_0052)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t24 *)
	}

IL_0052:
	{
		return 1;
	}

IL_0054:
	{
		bool L_11 = V_2;
		return L_11;
	}
}
// System.Void EnemySpawner::Start()
extern "C" void EnemySpawner_Start_m8 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	float V_0 = 0.0f;
	Vector3_t6  V_1 = {0};
	Vector3_t6  V_2 = {0};
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m58(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		float L_2 = ((&V_1)->___z_3);
		Camera_t27 * L_3 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_t18 * L_4 = Component_get_transform_m57(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t6  L_5 = Transform_get_position_m58(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		float L_6 = ((&V_2)->___z_3);
		V_0 = ((float)((float)L_2-(float)L_6));
		Camera_t27 * L_7 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_8 = V_0;
		Vector3_t6  L_9 = {0};
		Vector3__ctor_m49(&L_9, (0.0f), (0.0f), L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		Vector3_t6  L_10 = Camera_ViewportToWorldPoint_m68(L_7, L_9, /*hidden argument*/NULL);
		__this->___leftEdge_9 = L_10;
		Camera_t27 * L_11 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_12 = V_0;
		Vector3_t6  L_13 = {0};
		Vector3__ctor_m49(&L_13, (1.0f), (0.0f), L_12, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t6  L_14 = Camera_ViewportToWorldPoint_m68(L_11, L_13, /*hidden argument*/NULL);
		__this->___rightEdge_10 = L_14;
		Vector3_t6 * L_15 = &(__this->___leftEdge_9);
		float L_16 = (L_15->___x_1);
		__this->___xmin_11 = L_16;
		Vector3_t6 * L_17 = &(__this->___rightEdge_10);
		float L_18 = (L_17->___x_1);
		__this->___xmax_12 = L_18;
		EnemySpawner_SpawnUntilFull_m10(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::OnDrawGizmos()
extern "C" void EnemySpawner_OnDrawGizmos_m9 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m58(L_0, /*hidden argument*/NULL);
		float L_2 = (__this->___width_3);
		float L_3 = (__this->___height_4);
		Vector3_t6  L_4 = {0};
		Vector3__ctor_m49(&L_4, L_2, L_3, (0.0f), /*hidden argument*/NULL);
		Gizmos_DrawWireCube_m69(NULL /*static, unused*/, L_1, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemySpawner::SpawnUntilFull()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1;
extern "C" void EnemySpawner_SpawnUntilFull_m10 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		_stringLiteral1 = il2cpp_codegen_string_literal_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	Transform_t18 * V_0 = {0};
	GameObject_t1 * V_1 = {0};
	{
		Transform_t18 * L_0 = EnemySpawner_NextFreePosition_m6(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		Transform_t18 * L_1 = V_0;
		bool L_2 = Object_op_Implicit_m55(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		GameObject_t1 * L_3 = (__this->___enemyPrefab_2);
		Transform_t18 * L_4 = V_0;
		NullCheck(L_4);
		Vector3_t6  L_5 = Transform_get_position_m58(L_4, /*hidden argument*/NULL);
		Quaternion_t21  L_6 = Quaternion_get_identity_m61(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t22 * L_7 = Object_Instantiate_m62(NULL /*static, unused*/, L_3, L_5, L_6, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)IsInst(L_7, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_8 = V_1;
		NullCheck(L_8);
		Transform_t18 * L_9 = GameObject_get_transform_m70(L_8, /*hidden argument*/NULL);
		Transform_t18 * L_10 = V_0;
		NullCheck(L_9);
		Transform_set_parent_m71(L_9, L_10, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Transform_t18 * L_11 = EnemySpawner_NextFreePosition_m6(__this, /*hidden argument*/NULL);
		bool L_12 = Object_op_Implicit_m55(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		float L_13 = (__this->___spawnDelay_13);
		MonoBehaviour_Invoke_m72(__this, _stringLiteral1, L_13, /*hidden argument*/NULL);
	}

IL_005b:
	{
		return;
	}
}
// System.Void EnemySpawner::Update()
extern "C" void EnemySpawner_Update_m11 (EnemySpawner_t7 * __this, const MethodInfo* method)
{
	Vector3_t6  V_0 = {0};
	Vector3_t6  V_1 = {0};
	{
		bool L_0 = (__this->___movingRight_5);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		Transform_t18 * L_1 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Transform_t18 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t6  L_3 = Transform_get_position_m58(L_2, /*hidden argument*/NULL);
		float L_4 = (__this->___speed_6);
		float L_5 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_6 = {0};
		Vector3__ctor_m63(&L_6, ((float)((float)L_4*(float)L_5)), (0.0f), /*hidden argument*/NULL);
		Vector3_t6  L_7 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_3, L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m73(L_2, L_7, /*hidden argument*/NULL);
		goto IL_0069;
	}

IL_003c:
	{
		Transform_t18 * L_8 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Transform_t18 * L_9 = L_8;
		NullCheck(L_9);
		Vector3_t6  L_10 = Transform_get_position_m58(L_9, /*hidden argument*/NULL);
		float L_11 = (__this->___speed_6);
		float L_12 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_13 = {0};
		Vector3__ctor_m63(&L_13, ((float)((float)((-L_11))*(float)L_12)), (0.0f), /*hidden argument*/NULL);
		Vector3_t6  L_14 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_10, L_13, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_set_position_m73(L_9, L_14, /*hidden argument*/NULL);
	}

IL_0069:
	{
		Transform_t18 * L_15 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t6  L_16 = Transform_get_position_m58(L_15, /*hidden argument*/NULL);
		V_0 = L_16;
		float L_17 = ((&V_0)->___x_1);
		float L_18 = (__this->___width_3);
		__this->___leftEdgeOfFormation_7 = ((float)((float)L_17-(float)((float)((float)(0.5f)*(float)L_18))));
		Transform_t18 * L_19 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		Vector3_t6  L_20 = Transform_get_position_m58(L_19, /*hidden argument*/NULL);
		V_1 = L_20;
		float L_21 = ((&V_1)->___x_1);
		float L_22 = (__this->___width_3);
		__this->___rightEdgeOfFormation_8 = ((float)((float)L_21+(float)((float)((float)(0.5f)*(float)L_22))));
		float L_23 = (__this->___leftEdgeOfFormation_7);
		float L_24 = (__this->___xmin_11);
		if ((!(((float)L_23) < ((float)L_24))))
		{
			goto IL_00d2;
		}
	}
	{
		__this->___movingRight_5 = 1;
		goto IL_00ea;
	}

IL_00d2:
	{
		float L_25 = (__this->___rightEdgeOfFormation_8);
		float L_26 = (__this->___xmax_12);
		if ((!(((float)L_25) > ((float)L_26))))
		{
			goto IL_00ea;
		}
	}
	{
		__this->___movingRight_5 = 0;
	}

IL_00ea:
	{
		bool L_27 = EnemySpawner_AllMembersDead_m7(__this, /*hidden argument*/NULL);
		if (!L_27)
		{
			goto IL_00fb;
		}
	}
	{
		EnemySpawner_SpawnUntilFull_m10(__this, /*hidden argument*/NULL);
	}

IL_00fb:
	{
		return;
	}
}
// LevelManager
#include "AssemblyU2DCSharp_LevelManager.h"
#ifndef _MSC_VER
#else
#endif
// LevelManager
#include "AssemblyU2DCSharp_LevelManagerMethodDeclarations.h"

// UnityEngine.Application
#include "UnityEngine_UnityEngine_ApplicationMethodDeclarations.h"


// System.Void LevelManager::.ctor()
extern "C" void LevelManager__ctor_m12 (LevelManager_t8 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadLevel(System.String)
extern "C" void LevelManager_LoadLevel_m13 (LevelManager_t8 * __this, String_t* ___name, const MethodInfo* method)
{
	{
		String_t* L_0 = ___name;
		Application_LoadLevel_m74(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::QuitRequest()
extern "C" void LevelManager_QuitRequest_m14 (LevelManager_t8 * __this, const MethodInfo* method)
{
	{
		Application_Quit_m75(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
// System.Void LevelManager::LoadNextLevel()
extern "C" void LevelManager_LoadNextLevel_m15 (LevelManager_t8 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = Application_get_loadedLevel_m76(NULL /*static, unused*/, /*hidden argument*/NULL);
		Application_LoadLevel_m77(NULL /*static, unused*/, ((int32_t)((int32_t)L_0+(int32_t)1)), /*hidden argument*/NULL);
		return;
	}
}
// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayer.h"
#ifndef _MSC_VER
#else
#endif
// MusicPlayer
#include "AssemblyU2DCSharp_MusicPlayerMethodDeclarations.h"

// UnityEngine.AudioSource
#include "UnityEngine_UnityEngine_AudioSource.h"
struct Component_t28;
struct AudioSource_t10;
// UnityEngine.Component
#include "UnityEngine_UnityEngine_Component.h"
struct Component_t28;
struct Object_t;
// Declaration !!0 UnityEngine.Component::GetComponent<System.Object>()
// !!0 UnityEngine.Component::GetComponent<System.Object>()
extern "C" Object_t * Component_GetComponent_TisObject_t_m79_gshared (Component_t28 * __this, const MethodInfo* method);
#define Component_GetComponent_TisObject_t_m79(__this, method) (( Object_t * (*) (Component_t28 *, const MethodInfo*))Component_GetComponent_TisObject_t_m79_gshared)(__this, method)
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
#define Component_GetComponent_TisAudioSource_t10_m78(__this, method) (( AudioSource_t10 * (*) (Component_t28 *, const MethodInfo*))Component_GetComponent_TisObject_t_m79_gshared)(__this, method)


// System.Void MusicPlayer::.ctor()
extern "C" void MusicPlayer__ctor_m16 (MusicPlayer_t9 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::.cctor()
extern "C" void MusicPlayer__cctor_m17 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void MusicPlayer::Awake()
extern TypeInfo* MusicPlayer_t9_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisAudioSource_t10_m78_MethodInfo_var;
extern "C" void MusicPlayer_Awake_m18 (MusicPlayer_t9 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MusicPlayer_t9_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(9);
		Component_GetComponent_TisAudioSource_t10_m78_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483652);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t9_il2cpp_TypeInfo_var);
		MusicPlayer_t9 * L_0 = ((MusicPlayer_t9_StaticFields*)MusicPlayer_t9_il2cpp_TypeInfo_var->static_fields)->___instance_2;
		bool L_1 = Object_op_Inequality_m80(NULL /*static, unused*/, L_0, (Object_t22 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		MusicPlayer_DestroyThis_m20(__this, /*hidden argument*/NULL);
		goto IL_0060;
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(MusicPlayer_t9_il2cpp_TypeInfo_var);
		((MusicPlayer_t9_StaticFields*)MusicPlayer_t9_il2cpp_TypeInfo_var->static_fields)->___instance_2 = __this;
		GameObject_t1 * L_2 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_DontDestroyOnLoad_m81(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		AudioSource_t10 * L_3 = Component_GetComponent_TisAudioSource_t10_m78(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_t10_m78_MethodInfo_var);
		__this->___music_6 = L_3;
		AudioSource_t10 * L_4 = (__this->___music_6);
		AudioClip_t3 * L_5 = (__this->___startClip_3);
		NullCheck(L_4);
		AudioSource_set_clip_m82(L_4, L_5, /*hidden argument*/NULL);
		AudioSource_t10 * L_6 = (__this->___music_6);
		NullCheck(L_6);
		AudioSource_set_loop_m83(L_6, 1, /*hidden argument*/NULL);
		AudioSource_t10 * L_7 = (__this->___music_6);
		NullCheck(L_7);
		AudioSource_Play_m84(L_7, /*hidden argument*/NULL);
	}

IL_0060:
	{
		return;
	}
}
// System.Void MusicPlayer::OnLevelWasLoaded(System.Int32)
extern "C" void MusicPlayer_OnLevelWasLoaded_m19 (MusicPlayer_t9 * __this, int32_t ___level, const MethodInfo* method)
{
	{
		AudioSource_t10 * L_0 = (__this->___music_6);
		NullCheck(L_0);
		AudioSource_Stop_m85(L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___level;
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		AudioSource_t10 * L_2 = (__this->___music_6);
		AudioClip_t3 * L_3 = (__this->___startClip_3);
		NullCheck(L_2);
		AudioSource_set_clip_m82(L_2, L_3, /*hidden argument*/NULL);
	}

IL_0022:
	{
		int32_t L_4 = ___level;
		if ((!(((uint32_t)L_4) == ((uint32_t)1))))
		{
			goto IL_003a;
		}
	}
	{
		AudioSource_t10 * L_5 = (__this->___music_6);
		AudioClip_t3 * L_6 = (__this->___gameClip_4);
		NullCheck(L_5);
		AudioSource_set_clip_m82(L_5, L_6, /*hidden argument*/NULL);
	}

IL_003a:
	{
		int32_t L_7 = ___level;
		if ((!(((uint32_t)L_7) == ((uint32_t)2))))
		{
			goto IL_0052;
		}
	}
	{
		AudioSource_t10 * L_8 = (__this->___music_6);
		AudioClip_t3 * L_9 = (__this->___endClip_5);
		NullCheck(L_8);
		AudioSource_set_clip_m82(L_8, L_9, /*hidden argument*/NULL);
	}

IL_0052:
	{
		AudioSource_t10 * L_10 = (__this->___music_6);
		NullCheck(L_10);
		AudioSource_Play_m84(L_10, /*hidden argument*/NULL);
		return;
	}
}
// System.Void MusicPlayer::DestroyThis()
extern "C" void MusicPlayer_DestroyThis_m20 (MusicPlayer_t9 * __this, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// PlayerController
#include "AssemblyU2DCSharp_PlayerController.h"
#ifndef _MSC_VER
#else
#endif
// PlayerController
#include "AssemblyU2DCSharp_PlayerControllerMethodDeclarations.h"

// UnityEngine.KeyCode
#include "UnityEngine_UnityEngine_KeyCode.h"
// UnityEngine.PolygonCollider2D
#include "UnityEngine_UnityEngine_PolygonCollider2D.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_Touch.h"
// UnityEngine.TouchPhase
#include "UnityEngine_UnityEngine_TouchPhase.h"
// UnityEngine.Input
#include "UnityEngine_UnityEngine_InputMethodDeclarations.h"
// UnityEngine.Mathf
#include "UnityEngine_UnityEngine_MathfMethodDeclarations.h"
// UnityEngine.Debug
#include "UnityEngine_UnityEngine_DebugMethodDeclarations.h"
// UnityEngine.Behaviour
#include "UnityEngine_UnityEngine_BehaviourMethodDeclarations.h"
// UnityEngine.Touch
#include "UnityEngine_UnityEngine_TouchMethodDeclarations.h"
struct Object_t22;
struct MusicPlayer_t9;
struct Object_t22;
struct Object_t;
// Declaration !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
extern "C" Object_t * Object_FindObjectOfType_TisObject_t_m87_gshared (Object_t * __this /* static, unused */, const MethodInfo* method);
#define Object_FindObjectOfType_TisObject_t_m87(__this /* static, unused */, method) (( Object_t * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m87_gshared)(__this /* static, unused */, method)
// Declaration !!0 UnityEngine.Object::FindObjectOfType<MusicPlayer>()
// !!0 UnityEngine.Object::FindObjectOfType<MusicPlayer>()
#define Object_FindObjectOfType_TisMusicPlayer_t9_m86(__this /* static, unused */, method) (( MusicPlayer_t9 * (*) (Object_t * /* static, unused */, const MethodInfo*))Object_FindObjectOfType_TisObject_t_m87_gshared)(__this /* static, unused */, method)
struct GameObject_t1;
struct PlayerController_t11;
// Declaration !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
// !!0 UnityEngine.GameObject::GetComponent<PlayerController>()
#define GameObject_GetComponent_TisPlayerController_t11_m88(__this, method) (( PlayerController_t11 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)
struct GameObject_t1;
struct PolygonCollider2D_t29;
// Declaration !!0 UnityEngine.GameObject::GetComponent<UnityEngine.PolygonCollider2D>()
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.PolygonCollider2D>()
#define GameObject_GetComponent_TisPolygonCollider2D_t29_m89(__this, method) (( PolygonCollider2D_t29 * (*) (GameObject_t1 *, const MethodInfo*))GameObject_GetComponent_TisObject_t_m46_gshared)(__this, method)


// System.Void PlayerController::.ctor()
extern "C" void PlayerController__ctor_m21 (PlayerController_t11 * __this, const MethodInfo* method)
{
	{
		__this->___speed_2 = (10.0f);
		__this->___health_9 = (200.0f);
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.cctor()
extern TypeInfo* PlayerController_t11_il2cpp_TypeInfo_var;
extern "C" void PlayerController__cctor_m22 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		s_Il2CppMethodIntialized = true;
	}
	{
		((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___padding_6 = (0.5f);
		((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___repeatRate_7 = (0.2f);
		((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___lives_12 = 3;
		return;
	}
}
// System.Void PlayerController::Start()
extern TypeInfo* PlayerController_t11_il2cpp_TypeInfo_var;
extern const MethodInfo* Object_FindObjectOfType_TisMusicPlayer_t9_m86_MethodInfo_var;
extern "C" void PlayerController_Start_m23 (PlayerController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PlayerController_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Object_FindObjectOfType_TisMusicPlayer_t9_m86_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483653);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t6  V_0 = {0};
	Vector3_t6  V_1 = {0};
	Vector3_t6  V_2 = {0};
	Vector3_t6  V_3 = {0};
	{
		MusicPlayer_t9 * L_0 = Object_FindObjectOfType_TisMusicPlayer_t9_m86(NULL /*static, unused*/, /*hidden argument*/Object_FindObjectOfType_TisMusicPlayer_t9_m86_MethodInfo_var);
		__this->___musicplayer_11 = L_0;
		Transform_t18 * L_1 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t6  L_2 = Transform_get_position_m58(L_1, /*hidden argument*/NULL);
		V_2 = L_2;
		float L_3 = ((&V_2)->___z_3);
		Camera_t27 * L_4 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_t18 * L_5 = Component_get_transform_m57(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t6  L_6 = Transform_get_position_m58(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		float L_7 = ((&V_3)->___z_3);
		__this->___CameraDistance_3 = ((float)((float)L_3-(float)L_7));
		Camera_t27 * L_8 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_9 = (__this->___CameraDistance_3);
		Vector3_t6  L_10 = {0};
		Vector3__ctor_m49(&L_10, (0.0f), (0.0f), L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t6  L_11 = Camera_ViewportToWorldPoint_m68(L_8, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		Camera_t27 * L_12 = Camera_get_main_m67(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_13 = (__this->___CameraDistance_3);
		Vector3_t6  L_14 = {0};
		Vector3__ctor_m49(&L_14, (1.0f), (0.0f), L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		Vector3_t6  L_15 = Camera_ViewportToWorldPoint_m68(L_12, L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		float L_16 = ((&V_0)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t11_il2cpp_TypeInfo_var);
		((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___xmin_4 = L_16;
		float L_17 = ((&V_1)->___x_1);
		((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___xmax_5 = L_17;
		return;
	}
}
// System.Void PlayerController::movement()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern TypeInfo* PlayerController_t11_il2cpp_TypeInfo_var;
extern TypeInfo* Mathf_t31_il2cpp_TypeInfo_var;
extern "C" void PlayerController_movement_m24 (PlayerController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		PlayerController_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		Mathf_t31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(12);
		s_Il2CppMethodIntialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t6  V_1 = {0};
	Vector3_t6  V_2 = {0};
	Vector3_t6  V_3 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKey_m90(NULL /*static, unused*/, ((int32_t)276), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003f;
		}
	}
	{
		Transform_t18 * L_1 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Transform_t18 * L_2 = L_1;
		NullCheck(L_2);
		Vector3_t6  L_3 = Transform_get_position_m58(L_2, /*hidden argument*/NULL);
		Vector3_t6  L_4 = Vector3_get_left_m91(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_5 = (__this->___speed_2);
		Vector3_t6  L_6 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_4, L_5, /*hidden argument*/NULL);
		float L_7 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_8 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_6, L_7, /*hidden argument*/NULL);
		Vector3_t6  L_9 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_3, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_m73(L_2, L_9, /*hidden argument*/NULL);
	}

IL_003f:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_10 = Input_GetKey_m90(NULL /*static, unused*/, ((int32_t)275), /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		Transform_t18 * L_11 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Transform_t18 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t6  L_13 = Transform_get_position_m58(L_12, /*hidden argument*/NULL);
		Vector3_t6  L_14 = Vector3_get_right_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		float L_15 = (__this->___speed_2);
		Vector3_t6  L_16 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_14, L_15, /*hidden argument*/NULL);
		float L_17 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_18 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_16, L_17, /*hidden argument*/NULL);
		Vector3_t6  L_19 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_13, L_18, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_m73(L_12, L_19, /*hidden argument*/NULL);
	}

IL_007e:
	{
		Transform_t18 * L_20 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		Vector3_t6  L_21 = Transform_get_position_m58(L_20, /*hidden argument*/NULL);
		V_1 = L_21;
		float L_22 = ((&V_1)->___x_1);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t11_il2cpp_TypeInfo_var);
		float L_23 = ((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___xmin_4;
		float L_24 = ((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___padding_6;
		float L_25 = ((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___xmax_5;
		float L_26 = ((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___padding_6;
		IL2CPP_RUNTIME_CLASS_INIT(Mathf_t31_il2cpp_TypeInfo_var);
		float L_27 = Mathf_Clamp_m94(NULL /*static, unused*/, L_22, ((float)((float)L_23+(float)L_24)), ((float)((float)L_25-(float)L_26)), /*hidden argument*/NULL);
		V_0 = L_27;
		Transform_t18 * L_28 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		float L_29 = V_0;
		Transform_t18 * L_30 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_30);
		Vector3_t6  L_31 = Transform_get_position_m58(L_30, /*hidden argument*/NULL);
		V_2 = L_31;
		float L_32 = ((&V_2)->___y_2);
		Transform_t18 * L_33 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t6  L_34 = Transform_get_position_m58(L_33, /*hidden argument*/NULL);
		V_3 = L_34;
		float L_35 = ((&V_3)->___z_3);
		Vector3_t6  L_36 = {0};
		Vector3__ctor_m49(&L_36, L_29, L_32, L_35, /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_position_m73(L_28, L_36, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::respawn()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPlayerController_t11_m88_MethodInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisPolygonCollider2D_t29_m89_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral2;
extern "C" void PlayerController_respawn_m25 (PlayerController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisPlayerController_t11_m88_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483654);
		GameObject_GetComponent_TisPolygonCollider2D_t29_m89_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483655);
		_stringLiteral2 = il2cpp_codegen_string_literal_from_index(2);
		s_Il2CppMethodIntialized = true;
	}
	GameObject_t1 * V_0 = {0};
	{
		Debug_Log_m95(NULL /*static, unused*/, _stringLiteral2, /*hidden argument*/NULL);
		GameObject_t1 * L_0 = (__this->___playerPrefab_14);
		Transform_t18 * L_1 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t6  L_2 = Transform_get_position_m58(L_1, /*hidden argument*/NULL);
		Quaternion_t21  L_3 = Quaternion_get_identity_m61(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t22 * L_4 = Object_Instantiate_m62(NULL /*static, unused*/, L_0, L_2, L_3, /*hidden argument*/NULL);
		V_0 = ((GameObject_t1 *)IsInst(L_4, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_5 = V_0;
		NullCheck(L_5);
		PlayerController_t11 * L_6 = GameObject_GetComponent_TisPlayerController_t11_m88(L_5, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t11_m88_MethodInfo_var);
		NullCheck(L_6);
		Behaviour_set_enabled_m96(L_6, 1, /*hidden argument*/NULL);
		GameObject_t1 * L_7 = V_0;
		NullCheck(L_7);
		PolygonCollider2D_t29 * L_8 = GameObject_GetComponent_TisPolygonCollider2D_t29_m89(L_7, /*hidden argument*/GameObject_GetComponent_TisPolygonCollider2D_t29_m89_MethodInfo_var);
		NullCheck(L_8);
		Behaviour_set_enabled_m96(L_8, 1, /*hidden argument*/NULL);
		GameObject_t1 * L_9 = V_0;
		NullCheck(L_9);
		PlayerController_t11 * L_10 = GameObject_GetComponent_TisPlayerController_t11_m88(L_9, /*hidden argument*/GameObject_GetComponent_TisPlayerController_t11_m88_MethodInfo_var);
		NullCheck(L_10);
		L_10->___health_9 = (200.0f);
		return;
	}
}
// System.Void PlayerController::Fire()
extern TypeInfo* GameObject_t1_il2cpp_TypeInfo_var;
extern const MethodInfo* GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var;
extern "C" void PlayerController_Fire_m26 (PlayerController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_t1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483651);
		s_Il2CppMethodIntialized = true;
	}
	Vector3_t6  V_0 = {0};
	GameObject_t1 * V_1 = {0};
	{
		Vector3__ctor_m49((&V_0), (0.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		GameObject_t1 * L_0 = (__this->___laser_13);
		Transform_t18 * L_1 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t6  L_2 = Transform_get_position_m58(L_1, /*hidden argument*/NULL);
		Vector3_t6  L_3 = V_0;
		Vector3_t6  L_4 = Vector3_op_Addition_m60(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		Quaternion_t21  L_5 = Quaternion_get_identity_m61(NULL /*static, unused*/, /*hidden argument*/NULL);
		Object_t22 * L_6 = Object_Instantiate_m62(NULL /*static, unused*/, L_0, L_4, L_5, /*hidden argument*/NULL);
		V_1 = ((GameObject_t1 *)IsInst(L_6, GameObject_t1_il2cpp_TypeInfo_var));
		GameObject_t1 * L_7 = V_1;
		NullCheck(L_7);
		Rigidbody2D_t20 * L_8 = GameObject_GetComponent_TisRigidbody2D_t20_m48(L_7, /*hidden argument*/GameObject_GetComponent_TisRigidbody2D_t20_m48_MethodInfo_var);
		float L_9 = (__this->___projectileSpeed_8);
		Vector3_t6  L_10 = {0};
		Vector3__ctor_m63(&L_10, (0.0f), L_9, /*hidden argument*/NULL);
		Vector2_t23  L_11 = Vector2_op_Implicit_m64(NULL /*static, unused*/, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		Rigidbody2D_set_velocity_m65(L_8, L_11, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::Update()
extern TypeInfo* Input_t30_il2cpp_TypeInfo_var;
extern TypeInfo* PlayerController_t11_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3;
extern "C" void PlayerController_Update_m27 (PlayerController_t11 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Input_t30_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		PlayerController_t11_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(10);
		_stringLiteral3 = il2cpp_codegen_string_literal_from_index(3);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector2_t23  V_2 = {0};
	Touch_t32  V_3 = {0};
	Touch_t32  V_4 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_0 = Input_GetKeyDown_m97(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_t11_il2cpp_TypeInfo_var);
		float L_1 = ((PlayerController_t11_StaticFields*)PlayerController_t11_il2cpp_TypeInfo_var->static_fields)->___repeatRate_7;
		MonoBehaviour_InvokeRepeating_m98(__this, _stringLiteral3, (0.0001f), L_1, /*hidden argument*/NULL);
	}

IL_0021:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		bool L_2 = Input_GetKeyUp_m99(NULL /*static, unused*/, ((int32_t)32), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0033;
		}
	}
	{
		MonoBehaviour_CancelInvoke_m100(__this, /*hidden argument*/NULL);
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		int32_t L_3 = Input_get_touchCount_m101(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = 0;
		goto IL_00dc;
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		Touch_t32  L_4 = Input_GetTouch_m102(NULL /*static, unused*/, 0, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = Touch_get_phase_m103((&V_3), /*hidden argument*/NULL);
		if (L_5)
		{
			goto IL_0059;
		}
	}
	{
		PlayerController_Fire_m26(__this, /*hidden argument*/NULL);
	}

IL_0059:
	{
		IL2CPP_RUNTIME_CLASS_INIT(Input_t30_il2cpp_TypeInfo_var);
		Touch_t32  L_6 = Input_GetTouch_m102(NULL /*static, unused*/, 1, /*hidden argument*/NULL);
		V_4 = L_6;
		Vector2_t23  L_7 = Touch_get_deltaPosition_m104((&V_4), /*hidden argument*/NULL);
		V_2 = L_7;
		float L_8 = ((&V_2)->___x_1);
		if ((!(((float)L_8) < ((float)(0.0f)))))
		{
			goto IL_00a3;
		}
	}
	{
		Transform_t18 * L_9 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Vector3_t6  L_10 = Vector3_get_left_m91(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_11 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_10, (10.0f), /*hidden argument*/NULL);
		float L_12 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_13 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_11, L_12, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_Translate_m105(L_9, L_13, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00a3:
	{
		float L_14 = ((&V_2)->___x_1);
		if ((!(((float)L_14) > ((float)(0.0f)))))
		{
			goto IL_00d8;
		}
	}
	{
		Transform_t18 * L_15 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		Vector3_t6  L_16 = Vector3_get_right_m93(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_17 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_16, (10.0f), /*hidden argument*/NULL);
		float L_18 = Time_get_deltaTime_m52(NULL /*static, unused*/, /*hidden argument*/NULL);
		Vector3_t6  L_19 = Vector3_op_Multiply_m92(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		NullCheck(L_15);
		Transform_Translate_m105(L_15, L_19, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		int32_t L_20 = V_1;
		V_1 = ((int32_t)((int32_t)L_20+(int32_t)1));
	}

IL_00dc:
	{
		int32_t L_21 = V_1;
		int32_t L_22 = V_0;
		if ((((int32_t)L_21) < ((int32_t)L_22)))
		{
			goto IL_0040;
		}
	}
	{
		PlayerController_movement_m24(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
extern const MethodInfo* GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4;
extern "C" void PlayerController_OnTriggerEnter2D_m28 (PlayerController_t11 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483650);
		_stringLiteral4 = il2cpp_codegen_string_literal_from_index(4);
		s_Il2CppMethodIntialized = true;
	}
	Projectile_t13 * V_0 = {0};
	{
		Collider2D_t17 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m54(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Projectile_t13 * L_2 = GameObject_GetComponent_TisProjectile_t13_m47(L_1, /*hidden argument*/GameObject_GetComponent_TisProjectile_t13_m47_MethodInfo_var);
		V_0 = L_2;
		Projectile_t13 * L_3 = V_0;
		bool L_4 = Object_op_Implicit_m55(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0070;
		}
	}
	{
		Projectile_t13 * L_5 = V_0;
		NullCheck(L_5);
		Projectile_Hit_m32(L_5, /*hidden argument*/NULL);
		float L_6 = (__this->___health_9);
		Projectile_t13 * L_7 = V_0;
		NullCheck(L_7);
		float L_8 = Projectile_getDamage_m33(L_7, /*hidden argument*/NULL);
		__this->___health_9 = ((float)((float)L_6-(float)L_8));
		float L_9 = (__this->___health_9);
		if ((!(((float)L_9) <= ((float)(0.0f)))))
		{
			goto IL_0070;
		}
	}
	{
		AudioClip_t3 * L_10 = (__this->___die_10);
		Transform_t18 * L_11 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t6  L_12 = Transform_get_position_m58(L_11, /*hidden argument*/NULL);
		AudioSource_PlayClipAtPoint_m59(NULL /*static, unused*/, L_10, L_12, (0.7f), /*hidden argument*/NULL);
		GameObject_t1 * L_13 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_13, /*hidden argument*/NULL);
		Application_LoadLevel_m74(NULL /*static, unused*/, _stringLiteral4, /*hidden argument*/NULL);
	}

IL_0070:
	{
		return;
	}
}
// Position
#include "AssemblyU2DCSharp_Position.h"
#ifndef _MSC_VER
#else
#endif
// Position
#include "AssemblyU2DCSharp_PositionMethodDeclarations.h"



// System.Void Position::.ctor()
extern "C" void Position__ctor_m29 (Position_t12 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Position::OnDrawGizmos()
extern "C" void Position_OnDrawGizmos_m30 (Position_t12 * __this, const MethodInfo* method)
{
	{
		Transform_t18 * L_0 = Component_get_transform_m57(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t6  L_1 = Transform_get_position_m58(L_0, /*hidden argument*/NULL);
		Gizmos_DrawWireSphere_m106(NULL /*static, unused*/, L_1, (1.0f), /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Collision2D
#include "UnityEngine_UnityEngine_Collision2D.h"


// System.Void Projectile::.ctor()
extern "C" void Projectile__ctor_m31 (Projectile_t13 * __this, const MethodInfo* method)
{
	{
		__this->___damage_2 = (50.0f);
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Projectile::Hit()
extern "C" void Projectile_Hit_m32 (Projectile_t13 * __this, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Single Projectile::getDamage()
extern "C" float Projectile_getDamage_m33 (Projectile_t13 * __this, const MethodInfo* method)
{
	{
		float L_0 = (__this->___damage_2);
		return L_0;
	}
}
// System.Void Projectile::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C" void Projectile_OnCollisionEnter2D_m34 (Projectile_t13 * __this, Collision2D_t19 * ___col, const MethodInfo* method)
{
	{
		GameObject_t1 * L_0 = Component_get_gameObject_m54(__this, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		return;
	}
}
// ScoreFinder
#include "AssemblyU2DCSharp_ScoreFinder.h"
#ifndef _MSC_VER
#else
#endif
// ScoreFinder
#include "AssemblyU2DCSharp_ScoreFinderMethodDeclarations.h"

// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_Text.h"
// System.Int32
#include "mscorlib_System_Int32MethodDeclarations.h"
// UnityEngine.UI.Text
#include "UnityEngine_UI_UnityEngine_UI_TextMethodDeclarations.h"
struct Component_t28;
struct Text_t14;
// Declaration !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
#define Component_GetComponent_TisText_t14_m107(__this, method) (( Text_t14 * (*) (Component_t28 *, const MethodInfo*))Component_GetComponent_TisObject_t_m79_gshared)(__this, method)


// System.Void ScoreFinder::.ctor()
extern "C" void ScoreFinder__ctor_m35 (ScoreFinder_t15 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreFinder::Start()
extern TypeInfo* ScoreKeeper_t2_il2cpp_TypeInfo_var;
extern const MethodInfo* Component_GetComponent_TisText_t14_m107_MethodInfo_var;
extern "C" void ScoreFinder_Start_m36 (ScoreFinder_t15 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreKeeper_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		Component_GetComponent_TisText_t14_m107_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t14 * L_0 = Component_GetComponent_TisText_t14_m107(__this, /*hidden argument*/Component_GetComponent_TisText_t14_m107_MethodInfo_var);
		__this->___myScore_2 = L_0;
		Text_t14 * L_1 = (__this->___myScore_2);
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2_il2cpp_TypeInfo_var);
		String_t* L_2 = Int32_ToString_m108((&((ScoreKeeper_t2_StaticFields*)ScoreKeeper_t2_il2cpp_TypeInfo_var->static_fields)->___score_2), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		ScoreKeeper_Reset_m42(NULL /*static, unused*/, /*hidden argument*/NULL);
		return;
	}
}
#ifndef _MSC_VER
#else
#endif



// System.Void ScoreKeeper::.ctor()
extern "C" void ScoreKeeper__ctor_m37 (ScoreKeeper_t2 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void ScoreKeeper::.cctor()
extern "C" void ScoreKeeper__cctor_m38 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void ScoreKeeper::Start()
extern const MethodInfo* Component_GetComponent_TisText_t14_m107_MethodInfo_var;
extern "C" void ScoreKeeper_Start_m39 (ScoreKeeper_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Component_GetComponent_TisText_t14_m107_MethodInfo_var = il2cpp_codegen_method_info_from_index(2147483656);
		s_Il2CppMethodIntialized = true;
	}
	{
		Text_t14 * L_0 = Component_GetComponent_TisText_t14_m107(__this, /*hidden argument*/Component_GetComponent_TisText_t14_m107_MethodInfo_var);
		__this->___myScore_3 = L_0;
		return;
	}
}
// System.Void ScoreKeeper::Score()
extern TypeInfo* ScoreKeeper_t2_il2cpp_TypeInfo_var;
extern "C" void ScoreKeeper_Score_m40 (ScoreKeeper_t2 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreKeeper_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2_il2cpp_TypeInfo_var);
		int32_t L_0 = ((ScoreKeeper_t2_StaticFields*)ScoreKeeper_t2_il2cpp_TypeInfo_var->static_fields)->___score_2;
		((ScoreKeeper_t2_StaticFields*)ScoreKeeper_t2_il2cpp_TypeInfo_var->static_fields)->___score_2 = ((int32_t)((int32_t)L_0+(int32_t)((int32_t)150)));
		Text_t14 * L_1 = (__this->___myScore_3);
		String_t* L_2 = Int32_ToString_m108((&((ScoreKeeper_t2_StaticFields*)ScoreKeeper_t2_il2cpp_TypeInfo_var->static_fields)->___score_2), /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(48 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		return;
	}
}
// System.String ScoreKeeper::getScore()
extern "C" String_t* ScoreKeeper_getScore_m41 (ScoreKeeper_t2 * __this, const MethodInfo* method)
{
	{
		Text_t14 * L_0 = (__this->___myScore_3);
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(47 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		return L_1;
	}
}
// System.Void ScoreKeeper::Reset()
extern TypeInfo* ScoreKeeper_t2_il2cpp_TypeInfo_var;
extern "C" void ScoreKeeper_Reset_m42 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ScoreKeeper_t2_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(ScoreKeeper_t2_il2cpp_TypeInfo_var);
		((ScoreKeeper_t2_StaticFields*)ScoreKeeper_t2_il2cpp_TypeInfo_var->static_fields)->___score_2 = 0;
		return;
	}
}
// Shredder
#include "AssemblyU2DCSharp_Shredder.h"
#ifndef _MSC_VER
#else
#endif
// Shredder
#include "AssemblyU2DCSharp_ShredderMethodDeclarations.h"



// System.Void Shredder::.ctor()
extern "C" void Shredder__ctor_m43 (Shredder_t16 * __this, const MethodInfo* method)
{
	{
		MonoBehaviour__ctor_m50(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Shredder::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C" void Shredder_OnTriggerEnter2D_m44 (Shredder_t16 * __this, Collider2D_t17 * ___col, const MethodInfo* method)
{
	{
		Collider2D_t17 * L_0 = ___col;
		NullCheck(L_0);
		GameObject_t1 * L_1 = Component_get_gameObject_m54(L_0, /*hidden argument*/NULL);
		Object_Destroy_m56(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif

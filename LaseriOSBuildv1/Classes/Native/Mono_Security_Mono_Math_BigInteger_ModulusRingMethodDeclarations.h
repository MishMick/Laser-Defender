#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t712;
// Mono.Math.BigInteger
struct BigInteger_t711;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3318 (ModulusRing_t712 * __this, BigInteger_t711 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3319 (ModulusRing_t712 * __this, BigInteger_t711 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t711 * ModulusRing_Multiply_m3320 (ModulusRing_t712 * __this, BigInteger_t711 * ___a, BigInteger_t711 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t711 * ModulusRing_Difference_m3321 (ModulusRing_t712 * __this, BigInteger_t711 * ___a, BigInteger_t711 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t711 * ModulusRing_Pow_m3322 (ModulusRing_t712 * __this, BigInteger_t711 * ___a, BigInteger_t711 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t711 * ModulusRing_Pow_m3323 (ModulusRing_t712 * __this, uint32_t ___b, BigInteger_t711 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;

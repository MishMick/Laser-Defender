#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.DSAParameters
struct DSAParameters_t849;
struct DSAParameters_t849_marshaled;

void DSAParameters_t849_marshal(const DSAParameters_t849& unmarshaled, DSAParameters_t849_marshaled& marshaled);
void DSAParameters_t849_marshal_back(const DSAParameters_t849_marshaled& marshaled, DSAParameters_t849& unmarshaled);
void DSAParameters_t849_marshal_cleanup(DSAParameters_t849_marshaled& marshaled);

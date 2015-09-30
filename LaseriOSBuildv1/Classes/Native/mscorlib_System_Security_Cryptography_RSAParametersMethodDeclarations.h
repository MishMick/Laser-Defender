#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Cryptography.RSAParameters
struct RSAParameters_t821;
struct RSAParameters_t821_marshaled;

void RSAParameters_t821_marshal(const RSAParameters_t821& unmarshaled, RSAParameters_t821_marshaled& marshaled);
void RSAParameters_t821_marshal_back(const RSAParameters_t821_marshaled& marshaled, RSAParameters_t821& unmarshaled);
void RSAParameters_t821_marshal_cleanup(RSAParameters_t821_marshaled& marshaled);

#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.CacheIndex
struct CacheIndex_t419;
struct CacheIndex_t419_marshaled;

void CacheIndex_t419_marshal(const CacheIndex_t419& unmarshaled, CacheIndex_t419_marshaled& marshaled);
void CacheIndex_t419_marshal_back(const CacheIndex_t419_marshaled& marshaled, CacheIndex_t419& unmarshaled);
void CacheIndex_t419_marshal_cleanup(CacheIndex_t419_marshaled& marshaled);

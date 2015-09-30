#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.ChannelData
struct ChannelData_t1431;
// System.Collections.ArrayList
struct ArrayList_t718;
// System.Collections.Hashtable
struct Hashtable_t783;

// System.Void System.Runtime.Remoting.ChannelData::.ctor()
extern "C" void ChannelData__ctor_m8367 (ChannelData_t1431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ServerProviders()
extern "C" ArrayList_t718 * ChannelData_get_ServerProviders_m8368 (ChannelData_t1431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Remoting.ChannelData::get_ClientProviders()
extern "C" ArrayList_t718 * ChannelData_get_ClientProviders_m8369 (ChannelData_t1431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Runtime.Remoting.ChannelData::get_CustomProperties()
extern "C" Hashtable_t783 * ChannelData_get_CustomProperties_m8370 (ChannelData_t1431 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.ChannelData::CopyFrom(System.Runtime.Remoting.ChannelData)
extern "C" void ChannelData_CopyFrom_m8371 (ChannelData_t1431 * __this, ChannelData_t1431 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;

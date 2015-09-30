#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult
struct ReceiveRecordAsyncResult_t799;
// System.IO.Stream
struct Stream_t798;
// System.Byte[]
struct ByteU5BU5D_t416;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t24;
// System.Threading.WaitHandle
struct WaitHandle_t850;
// System.AsyncCallback
struct AsyncCallback_t149;

// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.IO.Stream)
extern "C" void ReceiveRecordAsyncResult__ctor_m3857 (ReceiveRecordAsyncResult_t799 * __this, AsyncCallback_t149 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t416* ___initialBuffer, Stream_t798 * ___record, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_Record()
extern "C" Stream_t798 * ReceiveRecordAsyncResult_get_Record_m3858 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_ResultingBuffer()
extern "C" ByteU5BU5D_t416* ReceiveRecordAsyncResult_get_ResultingBuffer_m3859 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_InitialBuffer()
extern "C" ByteU5BU5D_t416* ReceiveRecordAsyncResult_get_InitialBuffer_m3860 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncState()
extern "C" Object_t * ReceiveRecordAsyncResult_get_AsyncState_m3861 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncException()
extern "C" Exception_t24 * ReceiveRecordAsyncResult_get_AsyncException_m3862 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_CompletedWithError()
extern "C" bool ReceiveRecordAsyncResult_get_CompletedWithError_m3863 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t850 * ReceiveRecordAsyncResult_get_AsyncWaitHandle_m3864 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::get_IsCompleted()
extern "C" bool ReceiveRecordAsyncResult_get_IsCompleted_m3865 (ReceiveRecordAsyncResult_t799 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception,System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3866 (ReceiveRecordAsyncResult_t799 * __this, Exception_t24 * ___ex, ByteU5BU5D_t416* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Exception)
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3867 (ReceiveRecordAsyncResult_t799 * __this, Exception_t24 * ___ex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.RecordProtocol/ReceiveRecordAsyncResult::SetComplete(System.Byte[])
extern "C" void ReceiveRecordAsyncResult_SetComplete_m3868 (ReceiveRecordAsyncResult_t799 * __this, ByteU5BU5D_t416* ___resultingBuffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;

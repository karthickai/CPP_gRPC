// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: unary.proto

#include "unary.pb.h"
#include "unary.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>
namespace unary {

static const char* Translate_method_names[] = {
  "/unary.Translate/TranslateMsg",
};

std::unique_ptr< Translate::Stub> Translate::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Translate::Stub> stub(new Translate::Stub(channel));
  return stub;
}

Translate::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_TranslateMsg_(Translate_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Translate::Stub::TranslateMsg(::grpc::ClientContext* context, const ::unary::TranslateRequest& request, ::unary::TranslateReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_TranslateMsg_, context, request, response);
}

void Translate::Stub::experimental_async::TranslateMsg(::grpc::ClientContext* context, const ::unary::TranslateRequest* request, ::unary::TranslateReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TranslateMsg_, context, request, response, std::move(f));
}

void Translate::Stub::experimental_async::TranslateMsg(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::TranslateReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_TranslateMsg_, context, request, response, std::move(f));
}

void Translate::Stub::experimental_async::TranslateMsg(::grpc::ClientContext* context, const ::unary::TranslateRequest* request, ::unary::TranslateReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TranslateMsg_, context, request, response, reactor);
}

void Translate::Stub::experimental_async::TranslateMsg(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::TranslateReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_TranslateMsg_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::unary::TranslateReply>* Translate::Stub::AsyncTranslateMsgRaw(::grpc::ClientContext* context, const ::unary::TranslateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::unary::TranslateReply>::Create(channel_.get(), cq, rpcmethod_TranslateMsg_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::unary::TranslateReply>* Translate::Stub::PrepareAsyncTranslateMsgRaw(::grpc::ClientContext* context, const ::unary::TranslateRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::unary::TranslateReply>::Create(channel_.get(), cq, rpcmethod_TranslateMsg_, context, request, false);
}

Translate::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Translate_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Translate::Service, ::unary::TranslateRequest, ::unary::TranslateReply>(
          [](Translate::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::unary::TranslateRequest* req,
             ::unary::TranslateReply* resp) {
               return service->TranslateMsg(ctx, req, resp);
             }, this)));
}

Translate::Service::~Service() {
}

::grpc::Status Translate::Service::TranslateMsg(::grpc::ServerContext* context, const ::unary::TranslateRequest* request, ::unary::TranslateReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace unary

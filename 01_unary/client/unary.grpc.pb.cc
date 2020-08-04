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

static const char* Emoji_method_names[] = {
  "/unary.Emoji/convertToEmoji",
};

std::unique_ptr< Emoji::Stub> Emoji::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Emoji::Stub> stub(new Emoji::Stub(channel));
  return stub;
}

Emoji::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_convertToEmoji_(Emoji_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Emoji::Stub::convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::unary::EmojiReply* response) {
  return ::grpc::internal::BlockingUnaryCall(channel_.get(), rpcmethod_convertToEmoji_, context, request, response);
}

void Emoji::Stub::experimental_async::convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_convertToEmoji_, context, request, response, std::move(f));
}

void Emoji::Stub::experimental_async::convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)> f) {
  ::grpc_impl::internal::CallbackUnaryCall(stub_->channel_.get(), stub_->rpcmethod_convertToEmoji_, context, request, response, std::move(f));
}

void Emoji::Stub::experimental_async::convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_convertToEmoji_, context, request, response, reactor);
}

void Emoji::Stub::experimental_async::convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc_impl::internal::ClientCallbackUnaryFactory::Create(stub_->channel_.get(), stub_->rpcmethod_convertToEmoji_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>* Emoji::Stub::AsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::unary::EmojiReply>::Create(channel_.get(), cq, rpcmethod_convertToEmoji_, context, request, true);
}

::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>* Emoji::Stub::PrepareAsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc_impl::internal::ClientAsyncResponseReaderFactory< ::unary::EmojiReply>::Create(channel_.get(), cq, rpcmethod_convertToEmoji_, context, request, false);
}

Emoji::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Emoji_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Emoji::Service, ::unary::EmojiRequest, ::unary::EmojiReply>(
          [](Emoji::Service* service,
             ::grpc_impl::ServerContext* ctx,
             const ::unary::EmojiRequest* req,
             ::unary::EmojiReply* resp) {
               return service->convertToEmoji(ctx, req, resp);
             }, this)));
}

Emoji::Service::~Service() {
}

::grpc::Status Emoji::Service::convertToEmoji(::grpc::ServerContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace unary


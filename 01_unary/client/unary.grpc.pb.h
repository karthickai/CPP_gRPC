// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: unary.proto
#ifndef GRPC_unary_2eproto__INCLUDED
#define GRPC_unary_2eproto__INCLUDED

#include "unary.pb.h"

#include <functional>
#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

namespace unary {

class Emoji final {
 public:
  static constexpr char const* service_full_name() {
    return "unary.Emoji";
  }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::unary::EmojiReply* response) = 0;
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>> AsyncconvertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>>(AsyncconvertToEmojiRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>> PrepareAsyncconvertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>>(PrepareAsyncconvertToEmojiRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)>) = 0;
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)>) = 0;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, ::grpc::ClientUnaryReactor* reactor) = 0;
      #else
      virtual void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
      #endif
    };
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
    #endif
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
    #endif
    virtual class experimental_async_interface* experimental_async() { return nullptr; }
  private:
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>* AsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface< ::unary::EmojiReply>* PrepareAsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel);
    ::grpc::Status convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::unary::EmojiReply* response) override;
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>> AsyncconvertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>>(AsyncconvertToEmojiRaw(context, request, cq));
    }
    std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>> PrepareAsyncconvertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) {
      return std::unique_ptr< ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>>(PrepareAsyncconvertToEmojiRaw(context, request, cq));
    }
    class experimental_async final :
      public StubInterface::experimental_async_interface {
     public:
      void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)>) override;
      void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, std::function<void(::grpc::Status)>) override;
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void convertToEmoji(::grpc::ClientContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
      #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, ::grpc::ClientUnaryReactor* reactor) override;
      #else
      void convertToEmoji(::grpc::ClientContext* context, const ::grpc::ByteBuffer* request, ::unary::EmojiReply* response, ::grpc::experimental::ClientUnaryReactor* reactor) override;
      #endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub): stub_(stub) { }
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override { return &async_stub_; }

   private:
    std::shared_ptr< ::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_{this};
    ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>* AsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader< ::unary::EmojiReply>* PrepareAsyncconvertToEmojiRaw(::grpc::ClientContext* context, const ::unary::EmojiRequest& request, ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_convertToEmoji_;
  };
  static std::unique_ptr<Stub> NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status convertToEmoji(::grpc::ServerContext* context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithAsyncMethod_convertToEmoji() {
      ::grpc::Service::MarkMethodAsync(0);
    }
    ~WithAsyncMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestconvertToEmoji(::grpc::ServerContext* context, ::unary::EmojiRequest* request, ::grpc::ServerAsyncResponseWriter< ::unary::EmojiReply>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_convertToEmoji<Service > AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithCallbackMethod_convertToEmoji() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::unary::EmojiRequest, ::unary::EmojiReply>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::unary::EmojiRequest* request, ::unary::EmojiReply* response) { return this->convertToEmoji(context, request, response); }));}
    void SetMessageAllocatorFor_convertToEmoji(
        ::grpc::experimental::MessageAllocator< ::unary::EmojiRequest, ::unary::EmojiReply>* allocator) {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::GetHandler(0);
    #else
      ::grpc::internal::MethodHandler* const handler = ::grpc::Service::experimental().GetHandler(0);
    #endif
      static_cast<::grpc_impl::internal::CallbackUnaryHandler< ::unary::EmojiRequest, ::unary::EmojiReply>*>(handler)
              ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* convertToEmoji(
      ::grpc::CallbackServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* convertToEmoji(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/)
    #endif
      { return nullptr; }
  };
  #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_convertToEmoji<Service > CallbackService;
  #endif

  typedef ExperimentalWithCallbackMethod_convertToEmoji<Service > ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithGenericMethod_convertToEmoji() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithRawMethod_convertToEmoji() {
      ::grpc::Service::MarkMethodRaw(0);
    }
    ~WithRawMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestconvertToEmoji(::grpc::ServerContext* context, ::grpc::ByteBuffer* request, ::grpc::ServerAsyncResponseWriter< ::grpc::ByteBuffer>* response, ::grpc::CompletionQueue* new_call_cq, ::grpc::ServerCompletionQueue* notification_cq, void *tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response, new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    ExperimentalWithRawCallbackMethod_convertToEmoji() {
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
    #else
      ::grpc::Service::experimental().
    #endif
        MarkMethodRawCallback(0,
          new ::grpc_impl::internal::CallbackUnaryHandler< ::grpc::ByteBuffer, ::grpc::ByteBuffer>(
            [this](
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                   ::grpc::CallbackServerContext*
    #else
                   ::grpc::experimental::CallbackServerContext*
    #endif
                     context, const ::grpc::ByteBuffer* request, ::grpc::ByteBuffer* response) { return this->convertToEmoji(context, request, response); }));
    }
    ~ExperimentalWithRawCallbackMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    #ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* convertToEmoji(
      ::grpc::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #else
    virtual ::grpc::experimental::ServerUnaryReactor* convertToEmoji(
      ::grpc::experimental::CallbackServerContext* /*context*/, const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
    #endif
      { return nullptr; }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_convertToEmoji : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}
   public:
    WithStreamedUnaryMethod_convertToEmoji() {
      ::grpc::Service::MarkMethodStreamed(0,
        new ::grpc::internal::StreamedUnaryHandler<
          ::unary::EmojiRequest, ::unary::EmojiReply>(
            [this](::grpc_impl::ServerContext* context,
                   ::grpc_impl::ServerUnaryStreamer<
                     ::unary::EmojiRequest, ::unary::EmojiReply>* streamer) {
                       return this->StreamedconvertToEmoji(context,
                         streamer);
                  }));
    }
    ~WithStreamedUnaryMethod_convertToEmoji() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status convertToEmoji(::grpc::ServerContext* /*context*/, const ::unary::EmojiRequest* /*request*/, ::unary::EmojiReply* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedconvertToEmoji(::grpc::ServerContext* context, ::grpc::ServerUnaryStreamer< ::unary::EmojiRequest,::unary::EmojiReply>* server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_convertToEmoji<Service > StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_convertToEmoji<Service > StreamedService;
};

}  // namespace unary


#endif  // GRPC_unary_2eproto__INCLUDED

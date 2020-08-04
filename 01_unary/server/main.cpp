#include <iostream>
#include <string>
#include <memory>
#include <grpcpp/grpcpp.h>

#include "unary.grpc.pb.h"


// Logic and data behind the server's behaviour
class TranslateServiceImpl final : public unary::Translate::Service {
    grpc::Status TranslateMsg(grpc::ServerContext* ctx, const unary::TranslateRequest *req,
            unary::TranslateReply* reply) override {
        std::string prefix("Hola ");
        reply->set_translatedmsg(prefix + req->originalmsg());
        return grpc::Status::OK;
    }
};

int main() {
    std::cout << "Welcome to C++ gRPC" << std::endl;
    std::string server_address("0.0.0.0:50051");

    grpc::ServerBuilder builder;
    // Listen on the server address without TLS
    builder.AddListeningPort(server_address, grpc::InsecureServerCredentials());
    // Register service as the instance through which we will communicate with clients
    TranslateServiceImpl service;
    builder.RegisterService(&service); //Synchronous

    // Finally assemble the server
    std::unique_ptr<grpc::Server> server(builder.BuildAndStart());
    std::cout << "Server Listing on " << server_address << std::endl;

    // Wait for server to shutdown
    server->Wait();
    return 0;
}

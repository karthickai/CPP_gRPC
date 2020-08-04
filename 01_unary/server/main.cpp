#include <iostream>
#include <string>
#include <memory>
#include <map>
#include <grpcpp/grpcpp.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/ext/proto_server_reflection_plugin.h>

#include "unary.grpc.pb.h"

static std::map<std::string, std::string> emojis = {
        {"wink", u8"\U0001F609"},
        {"relaxed" , u8"\U0000263A"},
        {"star" , u8"\U00002B50"},
        {"moon" , u8"\U0001F314"},
        {"ocean" , u8"\U0001F30A"},
        {"volcano" , u8"\U0001F30B"},
        {"trident" , u8"\U0001F531"},
        {"tongue" , u8"\U0001F445"},
        {"blush" , u8"\U0001F60A"},
        {"satisfied" , u8"\U0001F606"},
        {"smile" , u8"\U0001F604"},
        {"laughing" , u8"\U0001F606"},
        {"sunglasses" , u8"\U0001F60E"},
        {"innocent" , u8"\U0001F607"},
        {"sleepy" , u8"\U0001F62A"},

};




// Logic and data behind the server's behaviour
class TranslateServiceImpl final : public unary::Emoji::Service {
    grpc::Status convertToEmoji(grpc::ServerContext* ctx, const unary::EmojiRequest *req,
            unary::EmojiReply* reply) override {
        std::string prefix("Emoji for ");
        auto it = emojis.find(req->message());
        if (it == emojis.end()){
            std::cout << "Error in finding Emoji for request message" << std::endl;
            return grpc::Status::CANCELLED;
        }
        reply->set_emoji(prefix + req->message() + " : " + it->second);
        return grpc::Status::OK;
    }
};

int main() {
    std::cout << "Welcome to C++ gRPC" << std::endl;
    std::string server_address("0.0.0.0:50051");


    grpc::ServerBuilder builder;
    grpc::EnableDefaultHealthCheckService(true);
    grpc::reflection::InitProtoReflectionServerBuilderPlugin();
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

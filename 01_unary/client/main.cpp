#include <iostream>
#include <memory>
#include <string>
#include <grpcpp/grpcpp.h>

#include "unary.grpc.pb.h"

class EmojiClient {
public:
    explicit EmojiClient(const std::shared_ptr<grpc::Channel>& channel)
            : stub_(unary::Emoji::NewStub(channel)) {}


    std::string convertToEmoji(const std::string &msg) {
        // Data we are sending to the server
        unary::EmojiRequest request;
        request.set_message(msg);

        // Container for the data we expect from the server
        unary::EmojiReply reply;

        // Context for the client. It could be used to convey information to
        // the server and/or tweak certain RPC behaviour

        grpc::ClientContext context;

        // The Actual RPC.
        grpc::Status status = stub_->convertToEmoji(&context, request, &reply);

        // Act upon its status
        if (status.ok()) {
            return reply.emoji();
        } else {
            std::cout << status.error_code() << ": " << status.error_message() << std::endl;
            return "RPC failed";
        }

    }

private:
    std::unique_ptr<unary::Emoji::Stub> stub_;
};

int main(int argc, char** argv) {

    std::string message;
    if (argc > 1){
        message = argv[1];
    } else {
        message = "wink";
    }
    std::cout << "gRPC Client" << std::endl;
    std::string remote_address = "0.0.0.0:50051";
    EmojiClient emojiClient(grpc::CreateChannel(remote_address, grpc::InsecureChannelCredentials()));

    std::string reply = emojiClient.convertToEmoji(message);
    std::cout << "Emoji received: " << reply << std::endl;

    return 0;
}

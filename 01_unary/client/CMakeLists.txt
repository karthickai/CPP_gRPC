cmake_minimum_required(VERSION 3.16)
project(client)

set(CMAKE_CXX_STANDARD 14)

find_package(gRPC CONFIG REQUIRED)
include_directories("${CMAKE_CURRENT_BINARY_DIR}")
add_executable(client main.cpp unary.grpc.pb.cc unary.pb.cc)
target_link_libraries(client gRPC::grpc++)
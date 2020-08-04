cmake_minimum_required(VERSION 3.16)
project(server)

set(CMAKE_CXX_STANDARD 14)

find_package(gRPC CONFIG REQUIRED)
include_directories("${CMAKE_CURRENT_BINARY_DIR}")
add_executable(server main.cpp unary.grpc.pb.cc unary.pb.cc)
target_link_libraries(server gRPC::grpc++)
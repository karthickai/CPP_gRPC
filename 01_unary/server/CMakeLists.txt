cmake_minimum_required(VERSION 3.16)
project(server)

set(CMAKE_CXX_STANDARD 14)

find_package(gRPC CONFIG REQUIRED)

add_executable(server main.cpp)
target_link_libraries(server gRPC::grpc++)
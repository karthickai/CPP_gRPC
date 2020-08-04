#!/usr/bin/env bash

protoc -I ../../protos/ --grpc_out=. --plugin=protoc-gen-grpc=grpc_cpp_plugin ../../protos/unary.proto
protoc -I ../../protos --cpp_out=. ../../protos/unary.proto
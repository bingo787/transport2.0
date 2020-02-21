
cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 14)

add_executable(example main.cc)

install(TARGETS example RUNTIME DESTINATION bin )        # example 安装到 usr/bin
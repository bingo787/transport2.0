cmake_minimum_required(VERSION 3.10)

project(rosa)

set(CMAKE_CXX_STANDARD 14)

# rcl = rosa communication lib
set(rcl_root ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${rcl_root})

option(BUILD_TRANSPORT_EXAMPLES "Build transport examples" ON)

aux_source_directory(${rcl_root}/channel channel_SRCS)
aux_source_directory(${rcl_root}/client client_SRCS)
aux_source_directory(${rcl_root}/codec codec_SRCS)
aux_source_directory(${rcl_root}/security security_SRCS)
aux_source_directory(${rcl_root}/server server_SRCS)


add_library(rcl SHARED
        ${channel_SRCS}
        ${client_SRCS}
        ${codec_SRCS}
        ${security_SRCS}
        ${server_SRCS})

if (BUILD_TRANSPORT_EXAMPLES)
    add_subdirectory(examples)
endif ()
cmake_minimum_required(VERSION 3.10)

project(rosa)

set(CMAKE_CXX_STANDARD 14)

# rcl = rosa communication lib
set(transport_root ${CMAKE_CURRENT_SOURCE_DIR})

include_directories(${transport_root})

option(BUILD_TRANSPORT_EXAMPLES "Build transport examples" ON)

aux_source_directory(${transport_root}/channel channel_SRCS)
aux_source_directory(${transport_root}/client client_SRCS)
aux_source_directory(${transport_root}/codec codec_SRCS)
aux_source_directory(${transport_root}/security security_SRCS)
aux_source_directory(${transport_root}/server server_SRCS)


add_library(transport SHARED
        ${channel_SRCS}
        ${client_SRCS}
        ${codec_SRCS}
        ${security_SRCS}
        ${server_SRCS})

if (BUILD_TRANSPORT_EXAMPLES)
    add_subdirectory(examples)
endif ()

set(CMAKE_INSTALL_PREFIX ${transport_root}/build)
install(DIRECTORY doc/ DESTINATION share) # 安装项目文档
install(TARGETS transport LIBRARY DESTINATION lib)  # 安装到 usr/lib
#install(FILES mod1.h DESTINATION include/mod1) # 安装到 usr/include/mod1

cmake_minimum_required(VERSION 3.22)
project(cpp_server)

set(CMAKE_CXX_STANDARD 20)

add_library(server
        server.cpp)

add_subdirectory(server_feature)

target_link_libraries(server server_feature)

add_executable(${PROJECT_NAME} main.cpp )

target_link_libraries(${PROJECT_NAME} server)

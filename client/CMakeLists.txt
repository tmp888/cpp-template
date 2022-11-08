cmake_minimum_required(VERSION 3.22)
project(cpp_client)

set(CMAKE_CXX_STANDARD 20)

add_library(client
        client.cpp)

add_subdirectory(client_feature)

target_link_libraries(client client_feature)

add_executable(${PROJECT_NAME} main.cpp )

target_link_libraries(${PROJECT_NAME} client)
cmake_minimum_required(VERSION 3.16)
project(main LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0
)
FetchContent_MakeAvailable(googletest)
add_library(GMock::GMock INTERFACE IMPORTED)
target_link_libraries(GMock::GMock INTERFACE gmock_main)

add_executable(main main.cpp)

target_link_libraries(main
    PRIVATE
    GMock::GMock
)

add_subdirectory(tests)

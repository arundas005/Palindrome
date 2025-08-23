cmake_minimum_required(VERSION 3.10.0)
project(Palidrome VERSION 0.1.0 LANGUAGES C CXX)

add_executable(Palidrome StringOperations.cpp main.cpp)

# GoogleTest configuration
include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/refs/heads/main.zip
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()
add_executable(test_StringOperations test_StringOperations.cpp StringOperations.cpp)
target_link_libraries(test_StringOperations gtest_main)
add_test(NAME StringOperationsTest COMMAND test_StringOperations)


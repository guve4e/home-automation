cmake_minimum_required(VERSION 3.13)
project(google_test)

#set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=gnu++11")

add_subdirectory(3rdparty/googletest)

include_directories(3rdparty/googletest/googletest/include)
include_directories(3rdparty/googletest/googlemock/include)

add_executable(google_test tests/main.cpp tests/test.cpp)


target_link_libraries(google_test gtest gtest_main)
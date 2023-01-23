cmake_minimum_required(VERSION 3.18.4)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

project(learningBDll DESCRIPTION "" LANGUAGES CXX)

set(BOOST_ROOT $ENV{BOOST_HOME})
set(BOOST_INCLUDEDIR ${BOOST_ROOT}/include/)
set(BOOST_LIBRARYDIR %{BOOST_ROOT}/lib/)

add_definitions(-DBOOST_ALL_DYN_LINK)

find_package(Boost 1.81.0 REQUIRED COMPONENTS unit_test_framework-mt-x64 filesystem-mt-x64)

set(CMAKE_BUILD_RPATH "./" ${Boost_LIBRARY_DIRS})

include_directories(${Boost_INCLUDE_DIRS})

add_executable(helloWorld main.cpp)

add_library(helloFunction SHARED HelloFunction.cpp)

add_library(worldFunction SHARED WorldFunction.cpp)

target_link_libraries(helloWorld worldFunction helloFunction ${Boost_LIBRARIES} dl stdc++fs)

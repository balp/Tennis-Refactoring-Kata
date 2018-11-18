cmake_minimum_required(VERSION 3.5.1)
project(Tennis-Refactoring-Kata)

include(ExternalProject)
ExternalProject_Add(catch2
        PREFIX ${CMAKE_BINARY_DIR}/catch2
        URL https://raw.githubusercontent.com/catchorg/Catch2/master/single_include/catch2/catch.hpp
        DOWNLOAD_NO_EXTRACT 1
        CONFIGURE_COMMAND ""
        BUILD_COMMAND ""
        INSTALL_COMMAND ""
)
include_directories(${CMAKE_BINARY_DIR}/catch2/src)


enable_testing()


add_executable(tennis1
        catch_tests.cpp
        tennis1.cc
        tennis.h
)
add_dependencies(tennis1 catch2)
add_test(NAME tennis1 COMMAND tennis1)
set_property(TARGET tennis1 PROPERTY CXX_STANDARD 14)

add_executable(tennis2
        catch_tests.cpp
        tennis2.cc
        tennis.h
)
add_dependencies(tennis2 catch2)
add_test(NAME tennis2 COMMAND tennis2)
set_property(TARGET tennis2 PROPERTY CXX_STANDARD 14)

add_executable(tennis3
        catch_tests.cpp
        tennis3.cc
        tennis.h
)
add_dependencies(tennis3 catch2)
add_test(NAME tennis3 COMMAND tennis3)
set_property(TARGET tennis3 PROPERTY CXX_STANDARD 14)


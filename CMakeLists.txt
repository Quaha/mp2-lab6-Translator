cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

project(Translator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")

set(CMAKE_SUPPRESS_REGENERATION TRUE)

add_subdirectory(${CMAKE_SOURCE_DIR}/external/googletest)
include_directories(${CMAKE_SOURCE_DIR}/core/include)

file(GLOB CORE_SOURCES "${CMAKE_SOURCE_DIR}/core/src/*.c*")
file(GLOB CORE_HEADERS "${CMAKE_SOURCE_DIR}/core/include/*.h*")

file(GLOB GRAMMAR_SOURCES "${CMAKE_SOURCE_DIR}/grammar/grammar_build/*.c*")
file(GLOB GRAMMAR_HEADERS "${CMAKE_SOURCE_DIR}/grammar/grammar_build/*.h*")

set(antlr_lib_path "${CMAKE_SOURCE_DIR}/core/antlr/lib/antlr4-runtime.lib")
add_library(core ${CORE_SOURCES} ${CORE_HEADERS})
add_library(grammar ${GRAMMAR_SOURCES} ${GRAMMAR_HEADERS})

file(GLOB TESTS_SOURCES "${CMAKE_SOURCE_DIR}/tests/*.c*")
add_executable(tests ${TESTS_SOURCES})

file(GLOB INTERFACE_SOURCES "${CMAKE_SOURCE_DIR}/interface/*.c*")
add_executable(interface ${INTERFACE_SOURCES})

target_include_directories(core PUBLIC
    "${CMAKE_SOURCE_DIR}/core/include"
    "${CMAKE_SOURCE_DIR}/core/antlr/include/antlr4-runtime"
    "${CMAKE_SOURCE_DIR}/grammar/grammar_build"
)

target_include_directories(grammar PUBLIC
    "${CMAKE_SOURCE_DIR}/grammar/grammar_build"
    "${CMAKE_SOURCE_DIR}/core/antlr/include/antlr4-runtime"
)

target_link_libraries(core PUBLIC grammar ${antlr_lib_path})
target_link_libraries(tests core grammar gtest_main ${antlr_lib_path})
target_link_libraries(interface core grammar gtest_main ${antlr_lib_path})
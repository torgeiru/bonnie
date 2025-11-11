cmake_minimum_required(VERSION 3.5)
set(CMAKE_TRY_COMPILE_TARGET_TYPE STATIC_LIBRARY)

project(service)
include(os)

file(GLOB SRCS "*.cpp")

os_add_executable(main "Bonnie++ bench" ${SRCS})
os_add_stdout(main default_stdout)

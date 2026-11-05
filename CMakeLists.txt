cmake_minimum_required(VERSION 3.20)

project(GenCalculator)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB_RECURSE CORE_SOURCES
  CONFIGURE_DEPENDS
  "${CMAKE_SOURCE_DIR}/src/*.cpp"
)

add_library(Core ${CORE_SOURCES})

target_include_directories(
  Core
  PUBLIC
  ${CMAKE_CURRENT_SOURCE_DIR}/include_folder
)

add_executable(
  GenCalculator
  src/main.cpp
)

target_link_libraries(
  GenCalculator
  PRIVATE
  Core)


if(MSVC)
  add_compile_options(/utf-8)
endif()

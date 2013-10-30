# incr build root

cmake_minimum_required(VERSION 2.8.10)

project(incr)

set(${PROJECT_NAME}_SOURCES
  incr.c)

add_executable(${PROJECT_NAME}
  ${${PROJECT_NAME}_SOURCES})

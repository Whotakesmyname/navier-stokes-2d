cmake_minimum_required(VERSION 3.0.0)
project(navier-stokes-2d VERSION 0.1.0)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})

# build dependencies
add_subdirectory(dep)

# build source
add_subdirectory(src)
cmake_minimum_required(VERSION 3.8.1)

set(CPACK_PACKAGE_NAME "synapwork")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "1")
set(VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

if (NOT TARGET synapsenetc)
   message(STATUS "Using CMake version: ${CMAKE_VERSION}")
   message(STATUS "Compiling synapsenetc version: ${VERSION}")
endif()

project(synapwork)

set(sources)
set(headers)

set(synapworkcpp_dir synapworkcpp/)

include(${synapworkcpp_dir}core/core.cmake)
include(${synapworkcpp_dir}utils/utils.cmake)
include(${synapworkcpp_dir}cpy/cpy.cmake)


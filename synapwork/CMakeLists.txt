cmake_minimum_required(VERSION 2.8.12)
project(synapwork)

set(CPACK_PACKAGE_NAME "synapwork")
set(CPACK_PACKAGE_VERSION_MAJOR "0")
set(CPACK_PACKAGE_VERSION_MINOR "1")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(VERSION ${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH})

if (NOT TARGET synapsenetc)
   message(STATUS "Using CMake version: ${CMAKE_VERSION}")
   message(STATUS "Compiling synapsenetc version: ${VERSION}")
endif()

add_subdirectory(core)
add_subdirectory(test)
add_subdirectory(cpy)


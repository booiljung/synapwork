cmake_minimum_required(VERSION 2.8.12)
project(core)

set(
    headers
    sn_ndarray.hpp
)

add_library(
    synapwork STATIC
    sn_allocations.cpp
    sn_devices.cpp
    sn_ndarray.cpp
)

add_definitions(-Wall -O2)

install(TARGETS synapwork DESTINATION lib)
install(FILES headers DESTINATION include)

cmake_minimum_required(VERSION 2.8.12)
project(core)

set(
    headers
    sn_ndarray.h
)

add_library(
    synapwork STATIC
    sn_allocations.c
    sn_devices.c    
    sn_ndarray.c
)

add_definitions(-Wall -O2)

install(TARGETS synapwork DESTINATION lib)
install(FILES headers DESTINATION include)

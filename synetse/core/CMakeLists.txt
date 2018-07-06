cmake_minimum_required(VERSION 2.8.12)
project(core)

set(
    headers
    ndarray.h
)

add_library(
    sn STATIC
    ndarray.c
)

add_definitions(-Wall -O2)

install(TARGETS sn DESTINATION lib)
install(FILES headers DESTINATION include)

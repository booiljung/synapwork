cmake_minimum_required(VERSION 2.8.12)
project(containers)

add_library(
    synetse STATIC
    linkedlist.c
)

add_definitions(-Wall -O2)

install(TARGETS synetse DESTINATION lib)

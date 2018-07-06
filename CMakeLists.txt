cmake_minimum_required(VERSION 2.8.12)
project(synapwork)

get_directory_property(has_parent PARENT_DIRECTORY)
if(NOT has_parent)
   set(SNET_IN_PROJECT_BUILD false)
endif()

add_subdirectory(synapwork)


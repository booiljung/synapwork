cmake_minimum_required(VERSION 2.8.12)
project(synapwork)

get_directory_property(has_parent PARENT_DIRECTORY)
if(NOT has_parent)
   set(SNET_IN_PROJECT_BUILD false)
endif()

set(root_dir)

include(${root_dir}synapworkcpp/synapworkcpp.cmake)
add_library(synapwork STATIC ${sources})

install(TARGETS synapwork DESTINATION lib)
install(FILES headers DESTINATION include)

include(${root_dir}testcpp/testcpp.cmake)

set(test_srcs ${test_srcs})
add_executable(sn_test ${test_srcs})
target_link_libraries(sn_test synapwork)


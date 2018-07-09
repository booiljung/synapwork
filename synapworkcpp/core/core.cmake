set(core_dir synapworkcpp/core/)

set(
    headers
    ${headers}
    ${core_dir}sn_ndarray.hpp
)


set(
    sources
    ${sources}
    ${core_dir}sn_allocations.cpp
    ${core_dir}sn_device.cpp
    ${core_dir}sn_devices.cpp
    ${core_dir}sn_ndarray.cpp
    ${core_dir}sn_types.cpp
)


include(${core_dir}cpu/cpu.cmake)
include(${core_dir}cuda/cuda.cmake)



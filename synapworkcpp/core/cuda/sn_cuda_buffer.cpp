/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <cuda_runtime.h>

#include "../sn_types.hpp"


namespace sn {


	void* cuda_malloc(size_t size) {
		void *buffer;
		cudaMalloc((void**)&buffer, size);
		return buffer;
	}


	void cuda_free(void *buffer) {
		cudaFree(buffer);
	}

	
} // sn


/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 * /

#include <cuda_runtime.h>


namespace sn
{


	void* cuda_malloc(long long size)
	{
		void *buffer;
		cudaMalloc((void**)&buffer, size);
		return buffer;
	}


	void cuda_free(void *buffer)
	{
		cudaFree(buffer);
	}

	
} // sn


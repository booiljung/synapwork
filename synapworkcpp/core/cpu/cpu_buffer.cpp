/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <stdlib.h>


namespace sn
{


	void* cpu_malloc(long long size)
	{
		return malloc((size_t)size);
	}


	void cpu_free(void *buffer)
	{
		free(buffer);
	}

	
} // sn




/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <cstddef>
#include <stdlib.h>


#include "../sn_types.hpp"


using namespace std;


namespace sn {


	void* cpu_malloc(size_t size) {
		return malloc((size_t)size);
	}


	void cpu_free(void *&buffer)	{
		free(buffer);
		buffer = nullptr;
	}

	
} // sn



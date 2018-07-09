/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */


#include "../sn_device.hpp"


namespace sn {


	extern device_t *cuda;


	void* cuda_malloc(size_t size);
	void cuda_free(void *&buffer);


} // sn


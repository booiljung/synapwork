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


	extern device_t *cpu;


	void* cpu_malloc(size_t size);
	void cpu_free(void *&buffer);


} // sn


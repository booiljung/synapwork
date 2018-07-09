/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include "../sn_devices.hpp"
#include "../../utils/autorun.hpp"

namespace sn {

	device_t *cuda;

	static void register_cuda() {
		cuda = new device_t("cuda");
		devices.register_device(cuda);		
	}


	static void unregister_cuda() {
		devices.unregister_device(cuda);
		delete cuda;
		cuda = nullptr;
	}


	static autorun_t cuda_autorun(&register_cuda, &unregister_cuda);
	
} // sn




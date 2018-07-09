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

	device_t *cpu;

	static void register_cpu() {
		cpu = new device_t("cpu");
		devices.register_device(cpu);
	}


	static void unregister_cpu() {
		devices.unregister_device(cpu);
		delete cpu;
		cpu = nullptr;
	}


	static autorun_t cpu_autorun(&register_cpu, &unregister_cpu);
	
} // sn




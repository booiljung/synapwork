/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <assert.h>
#include <cstddef>
#include <iostream>
#include "../synapworkcpp/core/sn_devices.hpp"

using namespace std;
using namespace sn;

namespace testsn {

	bool test_devices() {
		cout << "test devices" << endl;

		device_t *cpu = devices.named_device("cpu");
		assert(cpu!=nullptr);
		cout << "    " << "cpu " << cpu->name() << endl;

		device_t *cuda = devices.named_device("cuda");
		assert(cuda!=nullptr);
		cout << "    " << "cuda " << cuda->name() << endl;

		return true;
	}

} // testsn

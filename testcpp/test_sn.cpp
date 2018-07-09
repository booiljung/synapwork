/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */


#include <assert.h>
#include <stdio.h>

namespace testsn {

	extern bool test_devices();
	extern bool test_ndarray();
	extern bool test_types();

	bool test() {
		puts("synapsenetcpp test...");
		assert(test_types());
		assert(test_devices());
		assert(test_ndarray());
		puts("synapsenetcpp test: ok.");
		return true;
	}
}


int main() {
	return testsn::test();
}


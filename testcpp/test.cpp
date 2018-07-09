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


namespace sntest
{
	extern bool test_types();
	extern bool test_ndarray();	
} // sntest


using namespace sntest;


int main() {
	puts("synapsenetcpp test...");

	assert(test_types());
	assert(test_ndarray());

	puts("synapsenetcpp test: ok.");
	return 0;
}


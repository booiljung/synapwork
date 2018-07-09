/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <string>
#include "./sn_device.hpp"

using namespace std;


namespace sn
{

	device_t::device_t(const string& name) {
		this->_name = name;
	}

} // sn


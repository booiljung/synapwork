/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <assert.h>
#include <string>
#include "./sn_devices.hpp"

using namespace std;

namespace sn {

	devices_t devices;


	void devices_t::register_device(device_t* device) {
		set<device_t*>::iterator it = this->_devices.find(device);
		if (it == this->_devices.end())
			this->_devices.insert(device);
	}


	void devices_t::unregister_device(device_t* device) {
		set<device_t*>::iterator it = this->_devices.find(device);
		if (it != this->_devices.end())
			this->_devices.erase(device);
	}


	bool devices_t::has_named_device(const string& name) {
		map<string, device_t*>::iterator it = this->_names.find(name);
		return (it != this->_names.end());
	}


	device_t* devices_t::named_device(const string& name) {
		map<string, device_t*>::iterator it = this->_names.find(name);
		if (it != this->_names.end())
			return (*it).second;
		return nullptr;
	}


}


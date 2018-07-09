/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#pragma once

#include <map>
#include <set>
#include <string>
#include "./sn_device.hpp"
#include "./sn_types.hpp"

using namespace std;

namespace sn {

	class devices_t {
	private:
		set<device_t*> _devices;
		map<string, device_t*> _names;

	public:
		void register_device(device_t* device);
		void unregister_device(device_t* device);
		bool has_named_device(const string& name);
		device_t* named_device(const string& name);
	};


	extern devices_t devices;


} // sn

/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <stddef.h>
#include <string>
#include "./sn_types.hpp"

using namespace std;


namespace sn {

	class device_t {
	private:
		string _name;

	public:
		string& name() { return this->_name; }

	public:
		device_t(const string& name);

	public:
		void* (*allocate)(size_t size);
		void (*free)(void *buffer);
		void (*lock)(void *buffer);
		void (*unlock)(void *buffer);
	};

}


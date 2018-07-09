/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <vector>

namespace sn {

	template <typename T>
	class devbuffer_t {

	};


	template <typename T>
	class devbuffers_t : std::vector<devbuffer_t<T>*> {

	};

}


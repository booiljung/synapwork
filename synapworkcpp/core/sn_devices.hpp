/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <string>

namespace sn
{

	class device
	{
	private:
		std::string _name;

	public:
		void (*allocate)();
		void (*free)(void *buffer);
		void (*lock)(void *buffer);
		void (*unlock)(void *buffer);
	};

}

/*

	Synetse

	July. 7th. 2017

	MIT license

*/

#include <vector>

namespace sn
{

	template <typename T>
	class devbuffer
	{

	};


	template <typename T>
	class devbuffers : std::vector<devbuffer<T>*>
	{

	};

}

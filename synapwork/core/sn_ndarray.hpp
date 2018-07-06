/*

	Synetse

	July. 7th. 2017

	MIT license

*/

#include <vector>

#include "./sn_types.h"
#include "./sn_devices.hpp"
#include "./sn_devbuffer.hpp"

namespace sn
{

	typedef std::vector<int> shapes;


	template <typename T>
	class ndarray
	{
	private:
		shapes _shapes;
		devbuffers<T> _devbuffers;

	public:
		ndarray();
		ndarray(int shapes[]);
		ndarray(int shapes[], T value);

	public:
		static ndarray* ones(int shapes[]);
		static ndarray* zeros(int shapes[]);
		static ndarray* values(int shapes[], T value);
	};

}
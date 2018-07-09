/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <vector>

#include "./sn_types.hpp"
#include "./sn_devices.hpp"
#include "./sn_devbuffer.hpp"

namespace sn
{

	typedef std::vector<int> shapes;




	typedef int cshape[];


	template <typename T>
	class ndarray
	{
	private:
		shapes _shapes;
		devbuffers<T> _devbuffers;

	public:
		ndarray() { }
		ndarray(cshape shape) { }
		ndarray(cshape shape, T value) { }

	public:
		static ndarray* values(cshape shape);
		static ndarray* values(cshape shape, T value);

	public:
		static ndarray* ones(cshape shape);
		static ndarray* zeros(cshape shape);

	};

}
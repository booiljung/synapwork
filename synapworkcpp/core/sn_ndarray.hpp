/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#pragma once

#include "./sn_types.hpp"
#include "./sn_devices.hpp"
#include "./sn_devbuffer.hpp"


namespace sn
{

	typedef std::vector<int> shape_t;

	/**
	 * @brief c형식의 shape 전달자.
	 * @details [0]은 dimension, 이후는 각 차원의 길이. 차원의 순서는 numpy와 동일.
	 */
	typedef int cshape_t[];

	template <typename T>
	class ndarray_t {
	private:
		shape_t _shape;
		devbuffers_t<T> _devbuffers;

	public:
		ndarray_t() { }
		ndarray_t(cshape_t cshape) { }
		ndarray_t(cshape_t cshape, T value) { }

	public:
		static ndarray_t* values(cshape_t cshape);
		static ndarray_t* values(cshape_t cshape, T value);

	public:
		static ndarray_t* ones(cshape_t cshape);
		static ndarray_t* zeros(cshape_t cshape);
	};
	
} // sn


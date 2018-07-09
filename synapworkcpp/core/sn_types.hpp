/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

namespace sn
{

	typedef char		int8;
	typedef short		int16;
	typedef int			int32;
	typedef long long	int64;
	typedef char		float8;       // cpu does not support float8
	typedef short		float16;      // cpu does not support float16
	typedef float		float32;
	typedef double		float64;

	extern const int type_none;
	extern const int type_int8;
	extern const int type_int16;
	extern const int type_int32;
	extern const int type_int64;
	extern const int type_float8;
	extern const int type_float16;
	extern const int type_float32;
	extern const int type_float64;
	#define sn_type_max 9
	extern const int type_max;

	extern const char* type_cstrs[];
	extern const char* type_to_cstr(const int sn_type);
	
} // namespace sn


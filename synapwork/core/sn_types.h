/*

	Synetse

	July. 7th. 2017

	MIT license

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

	const int type_none = 0;
	const int type_int8 = 1;
	const int type_int16 = 2;
	const int type_int32 = 3;
	const int type_int64 = 4;
	const int type_float8 = 5;
	const int type_float16 = 6;
	const int type_float32 = 7;
	const int type_float64 = 8;
	#define sn_type_max 9
	const int type_max = sn_type_max;

	extern const char* type_cstrs[];
	extern const char* type_to_cstr(int type);
	
}


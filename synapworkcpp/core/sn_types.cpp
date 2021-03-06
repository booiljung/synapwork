/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */


#include "./sn_types.hpp"


namespace sn
{

	const int type_none = 0;
	const int type_int8 = 1;
	const int type_int16 = 2;
	const int type_int32 = 3;
	const int type_int64 = 4;
	const int type_float8 = 5;
	const int type_float16 = 6;
	const int type_float32 = 7;
	const int type_float64 = 8;
	const int type_max = 9;


	const char* k_type_cstrs[] = {
		"nonetype",
		"int8",     // type_int8
		"int16",    // type_int16
		"int32",    // type_int32
		"int64",    // type_int64
		"float8",   // type_float8
		"float16",  // type_float16
		"float32",  // type_float32
		"float64",  // type_float64
	};

	const char *k_unknown_type_cstr = "unknown";

	const char* type_to_cstr(const int sn_type) {
		if (sn_type < 0 || type_max <= sn_type)
			return k_unknown_type_cstr;
		return k_type_cstrs[sn_type];
	}

	
} // sn



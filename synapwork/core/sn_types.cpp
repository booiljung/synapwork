/*

	Synetse

	July. 7th. 2017

	MIT license

*/

#include "./sn_types.h"

namespace sn
{

	const char* type_cstrs[] = {
		"nonetype",
		"int8",     // sn_type_int8
		"int16",    // sn_type_int16
		"int32",    // sn_type_int32
		"int64",    // sn_type_int64
		"float8",   // sn_type_float8
		"float16",  // sn_type_float16
		"float32",  // sn_type_float32
		"float64",  // sn_type_float64
	};

	const char *k_unknown_type_cstr = "unknown";

	const char* type_to_cstr(int sn_type) {
		if (sn_type < 0 || sn_type_max <= sn_type)
			return k_unknown_type_cstr;
		return type_cstrs[sn_type];
	}

}

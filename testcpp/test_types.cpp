/**
 * Synapwork
 * July. 7th. 2018
 * MIT license
 * 
 * 
 * 
 */

#include <assert.h>

#include <iostream>

#include "../synapworkcpp/core/sn_types.hpp"

using namespace std;
using namespace sn;

namespace sntest
{


	bool test_types()
	{
		cout << "test_types" << endl;
		for (int typenum = 0; typenum < type_max; typenum++)
		{
			const char *cs = type_to_cstr(typenum);
			cout << cs << " ";
		}
		cout << endl;
		return true;
	}


} // sn


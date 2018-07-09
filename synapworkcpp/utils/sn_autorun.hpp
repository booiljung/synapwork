#pragma once

#include <stdlib.h>

namespace sn {

	class autorun_t {
	private:
		void (*_fp2)();
		
	public:
		autorun_t(void (*fp1)(), void (*fp2)());
		~autorun_t();

	};

}
#include <cstddef>
#include "./sn_autorun.hpp"


using namespace std;


namespace sn {

	autorun_t::autorun_t(void (*fp1)(), void (*fp2)()) {
		if (fp1 != nullptr)
			fp1();
		this->_fp2 = fp2;
	}


	autorun_t::~autorun_t() {
		if (this->_fp2 != nullptr)
			this->_fp2();
	}

}
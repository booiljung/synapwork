/*

	Synetse

	July. 7th. 2017

	MIT license

*/

#ifdef __cplusplus
extern "C" {
#endif

#include "./sn_ndarray.h"

extern sn_ndarray* sn_ones(int *shapes, int dim, int sn_type);
extern sn_ndarray* sn_zeros(int *shapes, int dim, int sn_type);
extern sn_ndarray* sn_values_int8(int *shapes, int dim, sn_int8 value);
extern sn_ndarray* sn_values_int16(int *shapes, int dim, sn_int16 value);
extern sn_ndarray* sn_values_int32(int *shapes, int dim, sn_int32 value);
extern sn_ndarray* sn_values_int64(int *shapes, int dim, sn_int64 value);
extern sn_ndarray* sn_values_float8(int *shapes, int dim, sn_float8 value);
extern sn_ndarray* sn_values_float16(int *shapes, int dim, sn_float16 value);
extern sn_ndarray* sn_values_float32(int *shapes, int dim, sn_float32 value);
extern sn_ndarray* sn_values_float64(int *shapes, int dim, sn_float64 value);

#ifdef __cplusplus
} // extern "C"
#endif


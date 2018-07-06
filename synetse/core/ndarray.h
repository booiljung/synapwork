#pragma once

#ifdef __cplusplus
extern "C" {
#endif

typedef int 		sn_result;
#define sn_ok		1
#define sn_error	0

typedef char		sn_int8;
typedef short		sn_int16;
typedef int			sn_int32;
typedef long long	sn_int64;
typedef char		sn_float8;       // cpu does not support float8
typedef short		sn_float16;      // cpu does not support float16
typedef float		sn_float32;
typedef double		sn_float64;

#define sn_type_none		0
#define sn_type_int8		1
#define sn_type_int16		2
#define sn_type_int32		3
#define sn_type_int64		4
#define sn_type_float8		5
#define sn_type_float16		6
#define sn_type_float32		7
#define sn_type_float64		8
#define sn_type_max			9

#define sn_where_host		-1	// host cpu
#define sn_where_device		0	// devices

extern const char* sn_type_cstrs[];
extern const char* sn_type_to_cstr(int sn_type);

typedef struct sn_ndarray {
	int type;		// sn_type_*
	int where;		// sn_where_*
	void *host;		// array of sn_* in host memory
	void *device;	// array of sn_* in device memory
	int dim;		// available array dimension
	int shapes[64];	// array shapes
} sn_ndarray;

#ifdef __cplusplus
} // extern "C"
#endif

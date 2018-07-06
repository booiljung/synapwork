/*

	Synetse

	July. 7th. 2017

	MIT license

*/

#ifdef __cplusplus
extern "C" {
#endif

typedef struct sn_linkedlist {
	sn_linkedlist *prev;
	sn_linkedlist *next;
	long long len;
	char datas[];
} sn_linkedlist;

#ifdef __cplusplus
} // extern "C"
#endif

#include "time.h"
#include "fft_32fcr.h"
#include "nmpp.h"
#include <nmtype.h>
#include <malloc.h>
#include <stdio.h>

#define		SIZE 		2048

int main()
{
	int i, st;
	clock_t t1, t2;
	nm32fcr *src, *dst;
	// best config (cycles = 32043)
	src = (nm32fcr *)malloc(SIZE * sizeof(nm32fcr));
	dst = (nm32fcr *)malloc(SIZE * sizeof(nm32fcr));
	for(i = 0; i < SIZE; i++) {
		src[i].im = 0;
		src[i].re = i;
		dst[i].im = 0;
		dst[i].re = 0;
	}
	NmppsFFTSpec_32fcr *rat, *irat;
	st = nmppsFFT2048FwdInitAlloc_32fcr(&rat);
	if(st) {
		return 123;
	}
	st = nmppsFFT2048InvInitAlloc_32fcr(&irat);
	if(st) {
		return 124;
	}
	t1 = clock();
	nmppsFFT2048Fwd_32fcr(src, dst, rat);
	t2 = clock();
	//nmppsFFT2048Inv_32fcr(dst, dst, irat);
	st = nmppsFFTFree_32fcr(rat);
	if(st) {
		return 125;
	}
	st = nmppsFFTFree_32fcr(irat);
	if(st) {
		return 126;
	}
	float norm;
	nmppsNormDiff_L2_32fcr(src, dst, SIZE, &norm);
	printf("%.7f\n", norm);
	for(i = 0; i < SIZE; i++){
	 	printf("[%d]  %.2f  %.2f\n", i, dst[i].re, dst[i].im);
	}
	return t2 - t1;
}
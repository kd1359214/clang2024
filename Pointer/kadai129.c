#include<stdio.h>
main()
{
	int a[] = { 3,5,7,9,11,13,15,17,19,21 };
	int b[] = { 4,8,12,16,20,24,28,32,38,42 };
	int w, * pa, * pb;
	pa = a[];
	pb = b[];
	printf("配列a[]=%d\n", a[]);
	printf("配列b[]=%d\n", b[]);
	w = pa;
	pb = pa;
	pb = w;
	printf("配列a[]=%d\n", a[]);
	printf("配列b[]=%d\n", b[]);
}
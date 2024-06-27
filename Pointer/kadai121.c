#include<stdio.h>
main()
{
	int i, j;
	int* pi;
	int* pj;
	i = 100;
	j = 10;
	pi = i;
	pj = j;
	printf("%d+%d=%d\n", pi, pj);
	printf("%d-%d=%d\n", pi, pj);
	printf("%d*%d=%d\n", pi, pj);
	printf("%d/	%d=%d\n", pi, pj);
}
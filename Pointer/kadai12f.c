#include<stdio.h>
main()
{
	int a[5][5] = { {1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15},{16,17,18,19,20},{21,22,23,24,25} };
	int b[5][5] = { {3,6,9,12,15},{18,21,24,27,30},{33,36,39,42,45},{48,51,54,57,60},{63,66,69,72,75} };
	int c[5][5], * p_a, * p_b, * p_c, i, j, k, h;
	p_a = a[][];
	p_b = b[][];
	p_c = c[][];
	p_c += p_a + p_b;
	for (i = 0; i <25; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%4d\n", *p_a++);
		}
		printf("\n")
	}
	for (k = 0; k < 25; k++)
	{
		for (h = 0; h < 5; h++)
		{
			printf("%4d\n", *p_b++);
		}
		printf("\n")
	}
}
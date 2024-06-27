#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;
	p_a = a;
	p_b = b;
	printf("実数値１？:");
	scanf("%d", &a);
	printf("実数値２？:");
	scanf("%d", &b);
	if (*p_a < *p_b)
	{
		printf("大きいほう=%d\n", *p_a);
	}
	else
	{
		printf("小さい方=%d\n", *p_b);
	}
}
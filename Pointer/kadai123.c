#include<stdio.h>
main()
{
	double a, b;
	double* p_a, * p_b;
	p_a = a;
	p_b = b;
	printf("�����l�P�H:");
	scanf("%d", &a);
	printf("�����l�Q�H:");
	scanf("%d", &b);
	if (*p_a < *p_b)
	{
		printf("�傫���ق�=%d\n", *p_a);
	}
	else
	{
		printf("��������=%d\n", *p_b);
	}
}
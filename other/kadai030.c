#include<stdio.h>
main()
{
	float i, j;
	printf("����1:");
	scanf("%f", &i);
	printf("����2:");
	scanf("%f", &j);
	if (i < j)
	{
		printf("�傫���ق���%f\n", j);
	}
	else
	{
		printf("�傫���ق���%f\n", i);
	}
}
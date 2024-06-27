#include<stdio.h>
main()
{
	int a[10];
	int c[10];
	int i;
	for (i = 0;i<10; i++)
	{
		a[i] = (i + 1) * 10;
		printf("%4d ", a[i]);
	}
	printf("\n ");
	for (i = 0; i < 10; i++)
	{
		c[i] = a[i];
		printf("%4d ",c[i]);
	}
}
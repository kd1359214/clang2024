#include<stdio.h>
main()
{
	int i;
	printf("整数？:");
	scanf("%d", &i);
	if (i / 2 == 1)
	{
		printf("その数は偶数です\n");
	}
	else
	{
		printf("その数は奇数です\n");
	}
}
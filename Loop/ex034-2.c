#include<stdio.h>
main()
{
	int i, j;
	printf("数は？:");
	scanf("%d", &i);
	do//iのい回数分ループする
	{
		j = 0;
		do//5回文ループする
		{
			printf("*");
			j++;
		} while (j < 5);
		printf("\n");
		i--;
	} while (i > 0);
}
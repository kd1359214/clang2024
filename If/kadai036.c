#include<stdio.h>
main()
{
	int i, j;
	printf("整数1:");
	scanf("%d", &i);
	printf("整数2:");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%dのほうが%dより%d小さい\n", i, j, (j - i));
	}
	else
	{
		if (i = j)
		{
			printf("%dと%dは等しいです\n", i, j);
		}
		printf("%dのほうが%dよりも%d大きい\n", i, j, (i - j));
	}
}
#include<stdio.h>
main()
{
	int i;
	printf("整数？:");
	scanf("%d", &i);
	if (i < 0)
	{
		printf("入力値はマイナスです\n");
	}
	else
	{
		printf("入力値はプラスです\n");
	}
}
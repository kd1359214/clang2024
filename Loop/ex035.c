#include<stdio.h>
main()
{
	int num, i;
	printf("数を入れて？:");
	scanf("%d", &num);
	i = 0;
	i += num;
	while (num == -999)
	{
		break;
	}
	printf("合計=%d\n", i);
}
#include<stdio.h>
main()
{
	int i;
	printf("整数？:");
	scanf("%d", &i);
	if (i <= 30)
	{
		printf("その数値の判定結果は2です\n");
		if (i <= 50)
		{
			printf("その数値の判定結果は3です\n");
			if (i <= 80)
			{
				printf("その数値の判定結果は4です\n");
				if (i <= 90)
				{
					printf("その数値の判定結果は5です\n");
				}
			}
		}
	}
	else
	{
		printf("その数値の判定結果は上記以外です\n");
	}
}
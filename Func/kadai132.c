#include<stdio.h>
main()
{
	int num, sum, cnt;
	sum = 0;
	cnt = ;
	printf("®”H:");
	while (scanf("%d", &num) != EOF)
	{
		sum += num;
		cnt++;
		printf("®”H:");
	}
	printf("‡Œv=%d\t•½‹Ï=%.2d\n", sum, (float)sum / cnt);
}
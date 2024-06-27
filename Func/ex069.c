#include<stdio.h>
main()
{
	int sum, num, cnt;
	sum = cnt = 0;
	printf("®”:");
	while (scanf("%d", &num) != EOF);
	{
		sum += num;
		cnt++;
		printf("®”:");
	
	}
	printf("‡Œv=%d\t•½‹Ï=%.2d\n", sum, (float)sum / cnt);
}
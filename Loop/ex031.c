#include<stdio.h>
main()
{
	int su, gokei;
	gokei = 0;
	su = 1;
	for (su = 1; su<= 10; su++)
	{
		gokei += su;
		printf("1����%d�܂ł̘a=%d\n", su, gokei);
	}
}
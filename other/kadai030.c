#include<stdio.h>
main()
{
	float i, j;
	printf("実数1:");
	scanf("%f", &i);
	printf("実数2:");
	scanf("%f", &j);
	if (i < j)
	{
		printf("大きいほうは%f\n", j);
	}
	else
	{
		printf("大きいほうは%f\n", i);
	}
}
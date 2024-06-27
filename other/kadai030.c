#include<stdio.h>
main()
{
	float i, j;
	printf("À”1:");
	scanf("%f", &i);
	printf("À”2:");
	scanf("%f", &j);
	if (i < j)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f\n", j);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%f\n", i);
	}
}
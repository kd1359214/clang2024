#include<stdio.h>
main()
{
	char* p_ride[3] = { "car","bus","shinkansen" };
	int i, j;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < (i<3); j++)
		{
			printf("%c\n", p_ride[j]);
		}
	}
}
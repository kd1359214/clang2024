#include<stdio.h>
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前:");
	for (i = 0; i < 4; i++)
	{
		printf("%d", d[i]);
	}
	for (i = 0; i < 4; i++)
	{
		printf("%d", d[i]);
		for ((i + 1) = j; j < 5; j++)
		{
			if (d[i] > d[j])
			{
				w = d[i];
				d[i] = d[j];
				d[j] = w;
			}
		}
	}
	printf("ソート後:");
	for (i = 0; i < 4; i++)
	{
		printf("%d", d[i]);
	}
}
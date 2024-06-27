#include<stdio.h>
#define N 5
main()
{
	int d[N] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前：");
	for (i = 0; i < 5; i++)
	{
		printf("%d", d[i]);
	}
	for (i = 1; i < N; i++)
	{
		for (j = i; j >= 0; j--)
		{
			if (d[j + 1] >= d[j])
			{
				break;
			}
			w = d[j];
			d[j] = d[j + 1];
			d[j + 1] = w;
		}
	}
}
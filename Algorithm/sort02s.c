#include<stdio.h>
#define N 5
main()
{
	int d[5] = { 30,7,25,16,10 };
	int i, j, w;
	printf("ソート前:");
	for (i = 0; i <  N; i++)
	{
		printf("%3d", d[i]);
	}
	printf("\n");
	for (i =N-1; i > 0; i--)
	{
		printf("%d", d[i]);
		for (j=0; j < i; j++)
		{
			//printf("d[%d]とd[%d]の比較\n", j, d[j + 1]);
			if (d[j] > d[j+1])
			{
				w = d[j];
				d[j] = d[j+1];
				d[j+1] = w;
			}
			for (j>w; j > i; j++)
			{

			}
		}
	}
	printf("ソート後:");
	for (i = 0; i < N; i++)
	{
		printf("%3d", d[i]);
	}
}
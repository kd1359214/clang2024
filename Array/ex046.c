#include<stdio.h>
main()
{
	int a[][3] = { { 10, 20, 30 },{ 1, 2, 3 } };
	int i, j, gokei;
	for (i = 0; i <= 1; i++)
	{
		for (gokei = 0, j = 0; j <= 2; j++)
		{
			printf("a[%d][%d]=%d\n", i, j, a[i][j]);
			gokei += a[i][j];
		}
		printf("%ds–Ú‚Ì‡Œv=%d\n\n", i, gokei);
	}
}
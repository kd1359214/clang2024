#include<stdio.h>
main()
{
	float x[3][2], ave;
	int i, j;
	for (i = 0; i <= 2; i++)
	{
		ave = 0;
		for (j = 0; j <= 1; j++)
		{
			printf("x[%d][%d]=", i, j);
			scanf("%f", &x[i][j]);
			ave += x[i][j];
		}
		printf("%ds–Ú‚Ì•½‹Ï=%.2f\n\n",i,ave/2);
	}
}
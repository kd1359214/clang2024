#include<stdio.h>
main()
{
	int i, cnt, j;
	printf("����-999�ŏI��:");
	scanf("%d", &i);
	j = 0;
	do
	{
		j += i;
		printf("���v=%d", j);
	}
	while (i != -999)
	{
		printf("\n����=%f", j / cnt);
	}
}
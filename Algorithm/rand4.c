#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;
	srand(time(0));
	rand();
	i = rand() % 5 + 1;
	printf("今日のあなたの運勢は, ");
	for (j = 0; j < i; j++)
	{
		printf("☆");
	}
	printf("です。\n");	
}
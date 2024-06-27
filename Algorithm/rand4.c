#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;
	srand(time(0));
	rand();
	i = rand() % 5 + 1;
	printf("¡“ú‚Ì‚ ‚È‚½‚Ì‰^¨‚Í, ");
	for (j = 0; j < i; j++)
	{
		printf("™");
	}
	printf("‚Å‚·B\n");	
}
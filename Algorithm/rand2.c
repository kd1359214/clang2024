#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int dice;
	srand(time(0));
	rand();
	dice = rand() % 300 - 100;
	printf("サイコロは%dです\n",dice);
}
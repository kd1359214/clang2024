#include<stdio.h>
main()
{
	int ia;
	printf("10進数を入力:");
	scanf("%d", &ia);
	printf("8進数は%o\t16進数は%x\n", ia, ia);
}
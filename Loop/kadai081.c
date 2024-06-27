#include<stdio.h>
main()
{
	int i;
	char j;
	printf("10進数の整数:");
	scanf("%d", &i);
	printf("アルファベット(o or h or d):");
	scanf("%*c%c", &j);
	
	switch (j)
	{
		case'o':
			printf("%o\n", j);
			break;
		case'h':
			printf("%x\n", j);
			break;
		case'd':
			printf("%d\n", j);
			break;
		default:
			printf("error");
	}
}
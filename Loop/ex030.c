#include<stdio.h>
main()
{
	int i, su;
	printf("数を入れて:");
	scanf("%d", &su);
	i=0;
	while (i<=10)
	{
		printf("%d+%d=%d\n",su,i,su+i);
		i++;
	}
}
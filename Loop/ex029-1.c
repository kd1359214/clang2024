#include<stdio.h>
main()
{
	int su, i;
	printf("数を入れて:");
	scanf("%d", &su);
	i = su;
	while(i>0)
	{
		printf("*");
		i--;//i=i+1 i+=1 i++はい1の時限定
	}
}
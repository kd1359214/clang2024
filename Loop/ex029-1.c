#include<stdio.h>
main()
{
	int su, i;
	printf("”‚ð“ü‚ê‚Ä:");
	scanf("%d", &su);
	i = su;
	while(i>0)
	{
		printf("*");
		i--;//i=i+1 i+=1 i++‚Í‚¢1‚ÌŽžŒÀ’è
	}
}
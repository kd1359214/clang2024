#include<stdio.h>
main()
{
	int i, j;
	printf("®”1:");
	scanf("%d", &i);
	printf("®”2:");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è%d¬‚³‚¢\n", i, j, (j - i));
	}
	else
	{
		if (i = j)
		{
			printf("%d‚Æ%d‚Í“™‚µ‚¢‚Å‚·\n", i, j);
		}
		printf("%d‚Ì‚Ù‚¤‚ª%d‚æ‚è‚à%d‘å‚«‚¢\n", i, j, (i - j));
	}
}
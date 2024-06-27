#include<stdio.h>
main()
{
	int m1;
	printf("Œ‚ğ“ü—Í:");
	scanf("%d",&m1);
	if (m1 == 2)
	{
		printf("ÅI“ú‚Í28‚Å‚·\n");
	}
	else
	{
		if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
		{
			printf("ÅI“ú‚Í30‚Å‚·\n");
		}
		else
		{
			if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
			{
				printf("ÅI“ú‚Í31‚Å‚·\n");
			}
		}
	}
}
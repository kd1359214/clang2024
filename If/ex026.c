#include<stdio.h>
main()
{
	int m1;
	printf("�������:");
	scanf("%d",&m1);
	if (m1 == 2)
	{
		printf("�ŏI����28�ł�\n");
	}
	else
	{
		if (m1 == 4 || m1 == 6 || m1 == 9 || m1 == 11)
		{
			printf("�ŏI����30�ł�\n");
		}
		else
		{
			if (m1 == 1 || m1 == 3 || m1 == 5 || m1 == 7 || m1 == 8 || m1 == 10 || m1 == 12)
			{
				printf("�ŏI����31�ł�\n");
			}
		}
	}
}
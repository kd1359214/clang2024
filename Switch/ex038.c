#include<stdio.h>
main()
{
	int i;
	printf("���������:");
	scanf("%d", &i);
	if (i >= 10 && i <= 49)
	{
		switch(i/10)
		{
		case 1:
			printf("10�_��ł�\n");
			break;
		case 2:
			printf("20�_��ł�\n");
			break;
		case 3:
			printf("30�_��ł�\n");
			break;
		case 4:
			printf("40�_��ł�\n");
			break;
		}
	}
	else
	{
		printf("�G���[\n");
	}
}
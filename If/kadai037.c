#include<stdio.h>
main()
{
	int i;
	printf("�����H:");
	scanf("%d", &i);
	if (i <= 30)
	{
		printf("���̐��l�̔��茋�ʂ�2�ł�\n");
		if (i <= 50)
		{
			printf("���̐��l�̔��茋�ʂ�3�ł�\n");
			if (i <= 80)
			{
				printf("���̐��l�̔��茋�ʂ�4�ł�\n");
				if (i <= 90)
				{
					printf("���̐��l�̔��茋�ʂ�5�ł�\n");
				}
			}
		}
	}
	else
	{
		printf("���̐��l�̔��茋�ʂ͏�L�ȊO�ł�\n");
	}
}
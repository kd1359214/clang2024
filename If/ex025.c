#include<stdio.h>
main()
{
	char d1;
	printf("���������:");
	scanf("%c", &d1);
	if ((d1 >= 'A' && d1 <= 'Z') || (d1 >= 'a' && d1 <= 'z'))
	{
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else
	{
		if (d1 >= '0' && d1 <= '100')
		{
			printf("�����ł�\n" );
		}
		else
		{
			printf("���̑��̕����ł�\n");
		}
	}
}
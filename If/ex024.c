#include<stdio.h>
main()
{
	char d1;
	printf("���������:");
	scanf("%c", &d1);
	if (d1 >='A' && d1 <= 'Z')//&&�́Z�Z���Z�Z�Ƃ������ɂȂ�
	{
		printf("�啶���ł�\n");
	}
	else
	{
		printf("���̑��̕����ł�\n");
	}
}
#include<stdio.h>
main()
{
	char i;
	printf("1��������:");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z')
	{
		printf("�ϊ����ʂ�%c\n", (i - 0x20));
	}
	else
	{
		printf("�ϊ����ʂ�%c\n", (i + 0x20));
	}
}
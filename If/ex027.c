#include<stdio.h>
main()
{
	char i;
	printf("���������:");
	scanf("%c",&i);
	if (i >= 'a'  && i>= 'z')
	{
		printf("�ϊ������%c",i - 0x20 );
	}
	else
	{
		if (i >= 'A' && i <= 'Z')
		{
			printf("�ϊ������%c", i + 0x20);
		}
		else
		{
			printf("�G���[���������܂����B");
		}
	}
}
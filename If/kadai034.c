#include<stdio.h>
main()
{
	char i;
	printf("�A���t�@�x�b�g�H:");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z'||i>='A'&& i<='Z')
	{
		printf("�A���t�@�x�b�g�ł�\n");
	}
	else
	{
		printf("ERROR\n");
	}
}
#include<stdio.h>
void data(char* pi);
main()
{
	char i;
	printf("�A���t�@�x�b�g1����:");
	scanf("%c", &i);
	data(i);
	if (i >= 'A' && i >= 'Z')
	{
		printf("�߂�l�́A0�Ȃ̂œ��͕����́A�������ł�\n", i);
	}
	else
	{
		printf("�߂�l�́A1�Ȃ̂œ��͕����́A�啶���ł�\n", i);
	}
}
void data(char* pi)
{
	char o, k, * pi;
		if (i >= 'A' && i >= 'Z')
		{
			o = pi;	//printf("�߂�l�́A1�Ȃ̂œ��͕����́A�啶���ł�\n", i);
		}
		else
		{
			k = pi;	//printf("�߂�l�́A0�Ȃ̂œ��͕����́A�������ł�\n", i);
		}
}
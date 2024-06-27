#include<stdio.h>
void data(char* pi);
main()
{
	char i;
	printf("アルファベット1文字:");
	scanf("%c", &i);
	data(i);
	if (i >= 'A' && i >= 'Z')
	{
		printf("戻り値は、0なので入力文字は、小文字です\n", i);
	}
	else
	{
		printf("戻り値は、1なので入力文字は、大文字です\n", i);
	}
}
void data(char* pi)
{
	char o, k, * pi;
		if (i >= 'A' && i >= 'Z')
		{
			o = pi;	//printf("戻り値は、1なので入力文字は、大文字です\n", i);
		}
		else
		{
			k = pi;	//printf("戻り値は、0なので入力文字は、小文字です\n", i);
		}
}
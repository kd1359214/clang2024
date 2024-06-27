#include<stdio.h>
main()
{
	char d1;
	printf("文字を入力:");
	scanf("%c", &d1);
	if ((d1 >= 'A' && d1 <= 'Z') || (d1 >= 'a' && d1 <= 'z'))
	{
		printf("アルファベットです\n");
	}
	else
	{
		if (d1 >= '0' && d1 <= '100')
		{
			printf("数字です\n" );
		}
		else
		{
			printf("その他の文字です\n");
		}
	}
}
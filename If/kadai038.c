#include<stdio.h>
main()
{
	char i;
	printf("1文字入力:");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z')
	{
		printf("変換結果は%c\n", (i - 0x20));
	}
	else
	{
		printf("変換結果は%c\n", (i + 0x20));
	}
}
#include<stdio.h>
main()
{
	char d1;
	printf("文字を入力:");
	scanf("%c", &d1);
	if (d1 >='A' && d1 <= 'Z')//&&は〇〇かつ〇〇という文になる
	{
		printf("大文字です\n");
	}
	else
	{
		printf("その他の文字です\n");
	}
}
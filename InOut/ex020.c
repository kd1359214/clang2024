#include<stdio.h>
main()
{
	char a1;
	printf("小文字を入力:");
	scanf("%c", &a1);
	printf("大文字に変換して%c\n", a1 - 0x20);
}
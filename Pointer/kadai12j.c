#include<stdio.h>
main()
{
	char i = "mikan";
	char* pi;
	pi = i;
	printf("コピー先の文字列=%s\n", *pi);
}
#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？:");
		scanf("%c", &i);
	if (i >= 'a' && i <= 'z')
	{
		printf("その文字は小文字です\n");
	}
	else
	{
		printf("その文字は大文字です\n");
	}
}
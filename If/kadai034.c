#include<stdio.h>
main()
{
	char i;
	printf("アルファベット？:");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z'||i>='A'&& i<='Z')
	{
		printf("アルファベットです\n");
	}
	else
	{
		printf("ERROR\n");
	}
}
#include<stdio.h>
main()
{
	char str[256], i;
	printf("����(ctrl+z):");
	scanf("%c", &i);
	while (gets(str) != EOF)
	{
		puts(str);
	}
}
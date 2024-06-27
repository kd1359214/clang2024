#include<stdio.h>
main()
{
	char str[256], i;
	printf("•¶Žš(ctrl+z):");
	scanf("%c", &i);
	while (gets(str) != EOF)
	{
		puts(str);
	}
}
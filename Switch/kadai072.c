#include<stdio.h>
main()
{
	char i;
	printf("アルファベット:");
	scanf("%c", &i);
	switch (i)
	{
		case'a':
			printf("America\nAsustralia\n");
			break;
		case'e':
			printf("England\n");
			break;
		case'f':
			printf("France\n");
			break;
		case'j':
			printf("Japan\n");
			break;
		default:
			printf("ERROR\n");
	}
}
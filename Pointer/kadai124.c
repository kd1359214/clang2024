#include<stdio.h>
main()
{
	char c;
	char* p_c;
	printf("1��������:");
	scanf("%c", &c);
	p_c = c;
	printf("���̕�����%c\n", *++p_c);
}
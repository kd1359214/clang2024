#include<stdio.h>
void cr(char* c1, char* c2);
main()
{
	char a[256], b[256];
	printf("�z��a�F:");
	gets(a);
	printf("�z��b�F:");
	gets(b);
	cr(a, b);
	printf("�z��a�F%s\n",a);
}

void cr(char* c1, char* c2)
{
	int i, j;
	for (i = 0;*(c1 + i) != '\0'; i++);
	for (j = 0; *(c1 + i)=*(c2+j); i++, j++);
}
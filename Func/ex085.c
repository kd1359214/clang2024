#include<stdio.h>
void cr(char* c1, char* c2);
main()
{
	char a[256], b[256];
	printf("配列a：:");
	gets(a);
	printf("配列b：:");
	gets(b);
	cr(a, b);
	printf("配列a：%s\n",a);
}

void cr(char* c1, char* c2)
{
	int i, j;
	for (i = 0;*(c1 + i) != '\0'; i++);
	for (j = 0; *(c1 + i)=*(c2+j); i++, j++);
}
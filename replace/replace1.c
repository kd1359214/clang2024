#include<stdio.h>
main()
{
	int a, b, c;
	a = 5;
	b = 3;
	printf("a=5\n");
	printf("b=3\n");
	c = a;
	a = b;
	b = c;
	printf("a=%d\n",a);
	printf("b=%d\n",b);
}
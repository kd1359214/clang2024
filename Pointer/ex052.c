#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO:a=%d	b=%d\n", a, b);
	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
	printf("é¿çså„:a=%d	b=%d\n", a, b);
}
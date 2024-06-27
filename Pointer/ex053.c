#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("é¿çsëO:*p_a=%d	*p_b=%d\n", *p_a, *p_b);
	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
	printf("é¿çså„:*p_a=%d	*p_b=%d\n", *p_a, *p_b);
}
#include<stdio.h>
main()
{
	int a, b, c;
	int* p_a, * p_b;
	a = 100;
	b = 200;
	p_a = &a;
	p_b = &b;
	printf("���s�O:*p_a=%d	*p_b=%d\n", *p_a, *p_b);
	c = *p_a;
	*p_a = *p_b;
	*p_b = c;
	printf("���s��:*p_a=%d	*p_b=%d\n", *p_a, *p_b);
}
#include<stdio.h>
void kansuu(int* a, int* b);
main()
{
	int a, b;
	a = 10;
	b = 20;
	printf("�֐����s�O�̒l�F\n");
	printf("a=%d b=%d\n", a, b);

	kansuu(&a, &b);

	printf("�֐����s��̒l�F\n");
	printf("a=%d b=%d\n", a, b);
}
void kansuu(int* a, int* b)
{
	int w;
	w = *a;
	*a = *b;
	*b = w;
	return;
}
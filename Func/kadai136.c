#include<stdio.h>
void add(int a,int b);
main()
{
	int a, b, m;
	printf("2�̐����H:");
	scanf("%d%d", &a, &b);
	max(a, b);
	printf("max=%d\n", m);
}
void add(int a, int b)
{
	int ans;
	if (a>b)
	{
		printf("�傫���ق���%d\n", a);
	}
	else
	{
		printf("�傫���ق���%d\n", b);
	}
}
#include<stdio.h>
void add(int a,int b);
main()
{
	int a, b, m;
	printf("2つの整数？:");
	scanf("%d%d", &a, &b);
	max(a, b);
	printf("max=%d\n", m);
}
void add(int a, int b)
{
	int ans;
	if (a>b)
	{
		printf("大きいほうは%d\n", a);
	}
	else
	{
		printf("大きいほうは%d\n", b);
	}
}
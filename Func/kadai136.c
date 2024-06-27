#include<stdio.h>
void add(int a,int b);
main()
{
	int a, b, m;
	printf("2‚Â‚Ì®”H:");
	scanf("%d%d", &a, &b);
	max(a, b);
	printf("max=%d\n", m);
}
void add(int a, int b)
{
	int ans;
	if (a>b)
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%d\n", a);
	}
	else
	{
		printf("‘å‚«‚¢‚Ù‚¤‚Í%d\n", b);
	}
}
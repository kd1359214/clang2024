#include<stdio.h>
main()
{
	int a1, a2, a3, m;
	printf("整数を3個入力:");
	scanf("%d%d%d", &a1,&a2,&a3);//&を必ずつける
	m = a1 + a2 + a3;
	printf("合計=%d" ,m);
	printf("	平均=%.2f\n", m/ 3.0);
}
#include<stdio.h>
main()
{
	int a1, a2, a3, m;
	printf("������3����:");
	scanf("%d%d%d", &a1,&a2,&a3);//&��K������
	m = a1 + a2 + a3;
	printf("���v=%d" ,m);
	printf("	����=%.2f\n", m/ 3.0);
}
#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("��������");
	scanf("%d", &ia);//ia�͉L����������Ă����̂�ia=0;�Ƃ��Ȃ��Ă��悢
	while (ia != -999)	//���������Ƀ��[�v���Ă��܂�����ctrl+c�łʂ����
	{
		gokei += ia;
		printf("��������");
		scanf("%d", &ia);
	}
	printf("���v=%d\n", gokei);
}
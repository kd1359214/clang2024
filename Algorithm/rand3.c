#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int k, f;
	srand(time(0));
	rand();
	k = rand() % 100 + 1;
	if (k >= 30)
	{
		printf("�ʏ�U��\n");
	}
	else
	{
		printf("��S�̈ꌂ�I");
	}
}
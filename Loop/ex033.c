#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	printf("���́H:");
	scanf("%d",&data);
	for (;data!=-999;)//�����l�ƍď������l�͂Ȃ��Ă��悢��;�͂���
	{
		sum += data;//sum=data+sum �C�R�[���͑��
		cnt++;
		printf("����");
		scanf("%d", &data);
	}
	ave = (float)sum / cnt;
	printf("���v=%d\t����=%.2f", sum, ave);
}
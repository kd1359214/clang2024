#include<stdio.h>
main()
{
	int data, sum, cnt;
	float ave;
	sum = 0;
	cnt = 0;
	printf("数は？:");
	scanf("%d",&data);
	for (;data!=-999;)//初期値と再初期化値はなくてもよいが;はつける
	{
		sum += data;//sum=data+sum イコールは代入
		cnt++;
		printf("数は");
		scanf("%d", &data);
	}
	ave = (float)sum / cnt;
	printf("合計=%d\t平均=%.2f", sum, ave);
}
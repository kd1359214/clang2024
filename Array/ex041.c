#include<stdio.h>
main()
{
	float box[3], num = 0;
	int i;
	i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("実数を入力:");
		scanf("%f", &box[i]);
		num += box[i];//box[i]=box[i]+num
	}
	printf("合計=%.2fです\n",num);
	printf("平均は%.2fです\n", num / 3);
}
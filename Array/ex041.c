#include<stdio.h>
main()
{
	float box[3], num = 0;
	int i;
	i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("���������:");
		scanf("%f", &box[i]);
		num += box[i];//box[i]=box[i]+num
	}
	printf("���v=%.2f�ł�\n",num);
	printf("���ς�%.2f�ł�\n", num / 3);
}
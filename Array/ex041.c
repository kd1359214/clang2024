#include<stdio.h>
main()
{
	float box[3], num = 0;
	int i;
	i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("ŽÀ”‚ð“ü—Í:");
		scanf("%f", &box[i]);
		num += box[i];//box[i]=box[i]+num
	}
	printf("‡Œv=%.2f‚Å‚·\n",num);
	printf("•½‹Ï‚Í%.2f‚Å‚·\n", num / 3);
}
#include<stdio.h>
main()
{
	int i, j;
	printf("����1:");
	scanf("%d", &i);
	printf("����2:");
	scanf("%d", &j);
	if (i > j)
	{
		printf("%d�̂ق���%d���%d������\n", i, j, (j - i));
	}
	else
	{
		if (i = j)
		{
			printf("%d��%d�͓������ł�\n", i, j);
		}
		printf("%d�̂ق���%d����%d�傫��\n", i, j, (i - j));
	}
}
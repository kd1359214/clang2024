#include<stdio.h>
main()
{
	int i, j;
	printf("���́H:");
	scanf("%d", &i);
	do//i�̂��񐔕����[�v����
	{
		j = 0;
		do//5�񕶃��[�v����
		{
			printf("*");
			j++;
		} while (j < 5);
		printf("\n");
		i--;
	} while (i > 0);
}
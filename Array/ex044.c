#include<stdio.h>
main()
{
	char a[] = "banana", b[] = "peach";
	int i, j;
	i = 0;
	printf("������1�����:");
	scanf("%c",&a[i]);

	j = 0;

	printf("������2�����:");
	scanf("%c", &b[j]);

	while (a[i] != '\0')
	{
		i++;
	}
	while (b[j] != '\0')
	{
		j++;
	}
	printf("moji1=a[i]\t");
	printf("moji2=b[j]\n");
	printf("����ւ����\n");
	printf("moji1=b[j]\t");
	printf("moji=a[i]\n");
}
#include<stdio.h>
main()
{
	char a[] = "banana", b[] = "peach";
	int i, j;
	i = 0;
	printf("文字列1を入力:");
	scanf("%c",&a[i]);

	j = 0;

	printf("文字列2を入力:");
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
	printf("入れ替えると\n");
	printf("moji1=b[j]\t");
	printf("moji=a[i]\n");
}
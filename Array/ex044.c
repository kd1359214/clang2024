#include<stdio.h>
main()
{
	char a[] = "banana", b[] = "peach";
	int i, j;
	i = 0;
	printf("•¶Žš—ñ1‚ð“ü—Í:");
	scanf("%c",&a[i]);

	j = 0;

	printf("•¶Žš—ñ2‚ð“ü—Í:");
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
	printf("“ü‚ê‘Ö‚¦‚é‚Æ\n");
	printf("moji1=b[j]\t");
	printf("moji=a[i]\n");
}
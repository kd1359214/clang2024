#include<stdio.h>
main()
{
	int i;
	char s[50];
	printf("sを入力:");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]++;
		i++;
	}
	printf("暗号化文字列%sを表示\n", &s[0]);
}
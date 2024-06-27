#include<stdio.h>
main()
{
	int i;
	char s[50];
	printf("s‚ğ“ü—Í:");
	scanf("%s", &s[0]);
	i = 0;
	while (s[i] != '\0')
	{
		s[i]++;
		i++;
	}
	printf("ˆÃ†‰»•¶š—ñ%s‚ğ•\¦\n", &s[0]);
}
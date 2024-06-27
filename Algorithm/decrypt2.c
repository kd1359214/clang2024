#include<stdio.h>
main()
{
	char s[21];
	int k[20], i;
	printf("•¶š—ñ‚ğ“ü—Í‚µ‚Ä‚­‚¾‚³‚¢>:");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		printf("s[%d]‚ÌˆÃ†‰»ƒL[>", i);
		scanf("%d", &k[i]);
		s[i] = s[i] - k[i];
	}
	printf("•œ†‰»•¶š—ñ‚Í%s\n", &s[0]);
}
#include<stdio.h>
main()
{
	char i;
	printf("1•¶Žš“ü—Í:");
	scanf("%c", &i);
	if (i >= 'a' && i <= 'z')
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", (i - 0x20));
	}
	else
	{
		printf("•ÏŠ·Œ‹‰Ê‚Í%c\n", (i + 0x20));
	}
}
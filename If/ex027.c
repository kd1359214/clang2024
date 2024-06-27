#include<stdio.h>
main()
{
	char i;
	printf("•¶Žš‚ð“ü—Í:");
	scanf("%c",&i);
	if (i >= 'a'  && i>= 'z')
	{
		printf("•ÏŠ·‚·‚é‚Æ%c",i - 0x20 );
	}
	else
	{
		if (i >= 'A' && i <= 'Z')
		{
			printf("•ÏŠ·‚·‚é‚Æ%c", i + 0x20);
		}
		else
		{
			printf("ƒGƒ‰[‚ª”­¶‚µ‚Ü‚µ‚½B");
		}
	}
}
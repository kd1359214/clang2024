#include<stdio.h>
main()
{
	char c;
	char* p_c;
	printf("1•¶Žš“ü—Í:");
	scanf("%c", &c);
	p_c = c;
	printf("ŽŸ‚Ì•¶Žš‚Í%c\n", *++p_c);
}
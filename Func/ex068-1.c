#include<stdio.h>
main()
{
	int a, b,c, ret;
	printf("3‚Â‚Ì®”‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	ret = scanf("%d%d%d", &a, &b, &c);	//ret‚É‚Í‚R‚ª“ü‚é@ret‚Í“ü—ÍŒÂ”‚¾‚©‚ç‚R‚ª“ü‚é
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);
	printf("®”‚ğ“ü—Í(ctlr+z‚ÅI—¹)a: ");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("®”‚ğ“ü—Í(ctlr+z‚ÅI—¹)a: ");	//ctrl+z‚ğ3‰ñ“ü—Í
	}
}
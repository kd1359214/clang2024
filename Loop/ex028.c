#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("”‚ğ“ü‚ê‚Ä");
	scanf("%d", &ia);//ia‚Í‰L‚ ‚ª‚«‚³‚ê‚Ä‚¢‚­‚Ì‚Åia=0;‚Æ‚µ‚È‚­‚Ä‚à‚æ‚¢
	while (ia != -999)	//‚à‚µ–³ŒÀ‚Éƒ‹[ƒv‚µ‚Ä‚µ‚Ü‚Á‚½‚çctrl+c‚Å‚Ê‚¯‚ê‚é
	{
		gokei += ia;
		printf("”‚ğ“ü‚ê‚Ä");
		scanf("%d", &ia);
	}
	printf("‡Œv=%d\n", gokei);
}
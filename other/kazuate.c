#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int ans,cut,num;
	srand(time(0));
	rand();
	ans = rand() % 100 + 1;
	printf("”“–‚ÄƒQ[ƒ€\n");
	printf("1`100‚Ü‚Å‚Ì”‚ð‚ð­‚È‚¢‰ñ”‚Å“–‚Ä‚éƒQ[ƒ€\n\n");
		
	cut= 0;
	while (1)
	{
		printf("”1`100‚ð“ü—Í:");
		scanf("%d", &num);
		cut++;
		if (ans > num)
		{
			printf("%d‚æ‚è‘å‚«‚¢‚Å‚·\n\n", num);
		}
		else
		{
			if (ans < num)
			{
				printf("%d‚æ‚è¬‚³‚¢‚Å‚·\n\n", num);
			}
			else
			{
				printf("“–‚½‚èI%d‰ñ‚Å“–‚Ä‚Ü‚µ‚½\n\n",cut);
				break;
			}
		}
	}
}
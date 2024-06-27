#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, j;
	srand(time(0));
	rand(); 
	printf("何を出しますか?\n(1:グー 2:チョキ 3:パー)>");
	scanf("%d", &i);
	j = rand() % 3;
	switch (i)
	{
	case 1:
			printf("\nプレイヤーは,グーです。\n");
			break;
	case 2:
			printf("\nプレイヤーは,チョキです。\n");
			break;
	case 3:
			printf("\nプレイヤーは,パーです。\n");
			break;
	}
	switch (j)
	{
	case 0:
			printf("\nコンピュータは,グーです。\n");
			break;
	case 1:
			printf("\nコンピュータは,チョキです。\n");
			break;
	case 2:
			printf("\nコンピュータは,パーです。\n");
			break;
	}
	switch ( ((i-1)-j+3)%3)
	{
	case 0:
			printf("\nあいこですです。\n");
			break;
	case 1:
			printf("\nコンピュータの勝ちです。\n");
			break;
	case 2:
			printf("\nプレイヤーの勝ちです。\n");
			break;
	}
}
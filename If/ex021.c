#include<stdio.h>
main()
{
	int no;
	printf("整数入力:");
	scanf("%d", &no);
	if (no >= 0) {
		printf("入力値は0以上です\n");
	}
	else {
		printf("入力値は0以下です\n");
	}
}
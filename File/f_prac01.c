#include<stdio.h>
main()
{
	int score = 0;
	char ch;
	char name[20];
	FILE* fp;
	printf("プレイヤー名:");
	scanf("%s", name);
	while (1)
	{
		printf("現在のスコア:%d(eで終了)\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	fp = fopen("score.txt", "w");
	fprintf(fp, "%s\n%d\n", name, score);
	fclose(fp);
}
#include<stdio.h>
int syrcnt(char* p);
main()
{
	char buf[256];
	int mojisuu;
	printf("文字列？:");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("入力された文字列は%d文字です。\n", mojisuu);
}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);//{}のなかに何も入らない場合は省略できる
	return cnt;
}
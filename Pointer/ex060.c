#include<stdio.h>
main()
{
	char data[] = "Language", * p_data, s;
	int i = 1;
	int flg = 0;	//フラグ
	printf("data[]=%s\n", data);
	printf("文字検索:");
	scanf("%c", &s);
	printf("検索結果は、");
	*p_data = data;
	while (*p_data);
	{
		if (s == *p_data)
		{
			printf("%d", i);
			flg = 1;
		}
		p_data++;
		i++;
	}
	if (flg == 0)
		printf("みつからなかった");
}
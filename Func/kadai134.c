#include<stdio.h>
main()
{
	char i;
	printf("文字列を入力(ctrl+zで終了):");
	while (scanf("%s", &i) != EOF);
	{
		printf("文字列を入力(ctrl+zで終了):");
	}
	printf("%s", i);
}
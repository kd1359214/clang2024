#include<stdio.h>
main()
{
	int i, j;
	char e;
	printf("整数1:");
	scanf("%d", &i);
	printf("整数2:");
	scanf("%d", &j);
	printf("演算子:");
	scanf("%*c%c", &e);	//\nが文字として認識されているから1バイト読み飛ばしで%*cで読み飛ばす

	switch(e)
	{
	case'+':
			printf("%d+%d=%d\n", i, j, i + j);
			break;
	case'-':
			printf("%d-%d=%d\n", i, j, i - j);
			break;
	case'*':
			printf("%d*%d=%d\n", i, j, i * j);
			break;
	case'/':
			printf("%d/%d=%d\n", i, j, i / j);
			break;
	default:
		printf("その他の演算子です\n");
	}
}
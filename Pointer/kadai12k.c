#include<stdio.h>
main()
{
	char i = "mikan to ringo";
	char* pi;
	pi = i;
	printf("空白を取り除いた内容%*c\n", *pi);
}
#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;

	printf("data[]=%s\n", p_data);	//%sの時だけはアドレスを指定する（'\0'めでが表示される）

	while (*p_data2++ = *p_data++);	//文字列のコピー

	p_data2 = data2;
	printf("data2[]=%s\n", p_data2);	
	while (*p_data2)
	{
		putchar(*p_data2++);	//*p_data2++は*p_data2
	}							//p_data2++;	と同じ
	putchar('\n');
}
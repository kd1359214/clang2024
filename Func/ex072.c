#include<stdio.h>
void display(int a);	//戻り値がない場合はvoidと書く
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);
}
void display(int a)
{
	printf("入力データ=%d\n", a);
	return;			//戻り値がないので書かなくてもよい
}
#include<stdio.h>
main()
{
	int gokei, ia;
	gokei = 0;
	printf("数を入れて");
	scanf("%d", &ia);//iaは鵜あがきされていくのでia=0;としなくてもよい
	while (ia != -999)	//もし無限にループしてしまったらctrl+cでぬけれる
	{
		gokei += ia;
		printf("数を入れて");
		scanf("%d", &ia);
	}
	printf("合計=%d\n", gokei);
}
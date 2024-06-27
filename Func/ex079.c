#include<stdio.h>
int tbl_gokei3(int tbl[],int number);

//関数プロトタイプ宣言
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei3(a,5); //2番目の引数でデータ数を渡す
	printf("gokei=%d\n", gokei);
}

//関数定義
int tbl_gokei3(int tbl[],int number)
{
	int gokei = 0,i = 0;
	while (i<number)
	{
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}
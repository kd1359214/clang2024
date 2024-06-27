#include<stdio.h>
int rbl_gokei1(int* p);
int tbl_gokei2(int tbl[]);
int rbl_gokei1b(int* p);
//関数プロトタイプ宣言
main()
{
	int a[] = { 10,20,30,40,-999 }, gokei;
	gokei = tbl_gokei1(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei2(a);
	printf("gokei=%d\n", gokei);
	gokei = tbl_gokei1b(a);
	printf("gokei=%d\n", gokei);
}

//関数定義
int tbl_gokei1(int* p)
{
	int gokei = 0;
	while (*p != -999)
	{
		gokei += *p;
		p++;
	}
	return(gokei);
}


int tbl_gokei2(int tbl[])
{
	int gokei = 0,i = 0;
	while (tbl[i] != -999)
	{
		gokei += tbl[i];
		i++;
	}
	return(gokei);
}

//ポインタが受け取ったアドレスを固定して使ってみる
int rbl_gokei1b(int* p)
{
	int goke = 0, i;
	i = 0;
	while (*(p+i) != -999)
	{
		gokei += *(p+i);
		i++;
	}
	return(gokei);
}
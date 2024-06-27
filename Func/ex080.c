#include<stdio.h>
//マクロ
#define TBL_END 5
//関数プロトタイプ宣言
int tbl_gokei4(int* p);
main()
{
	int a[] = { 10,20,30,40,50 }, gokei;
	gokei = tbl_gokei4(a);
	printf("gokei=%d\n", gokei);
}

//関数定義
int tbl_gokei4(int* p)
{
	int gokei = 0, i;
	i = 0;
	while (i<TBL_END)
	{
		gokei += *p;
		p++;
		i++;
	}
	return(gokei);
}
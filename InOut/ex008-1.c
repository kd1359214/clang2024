#include<stdio.h>
main()
{
	int a = 5;	//宣言の時に初期化する
	float b ;
		printf("a/2 = %f \n",a/2 );
		b = a / 2;
		printf("a / 2 = %f \n", b );
		printf("f1 / 4 = %f \n",  a/2.0);//整数割る実数は実数に合わせる
}
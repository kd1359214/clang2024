#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000 通常
	Poison = 1 << 0,	//00000001 どく
	Sleep = 1 << 1,		//00000010 ねむり
	paralysis = 1 << 2, //00000100 まひ
	Burn = 1 << 3,		//00001000 やけど
	atkUp = 1 << 4,		//00010000 攻撃アップ
	atkDown = 1 << 5	//00100000 攻撃ダウン
};
typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlg(UINT* s);
void ClearFlg(UINT* s);
main()
{
	UINT MyState = Base;
	ChangeFlg(&MyState);
	//DisplayStatus(MyState);
	ClearFlg(&MyState);
	//DisplayStatus(MyState);
}
void DisplayStatus(UINT s)
{
	printf("****現在の状態****\n");
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("眠り\n");
	}
	if (s & paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & atkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & atkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)
	{
		printf("状態以上なし\n");
	}
	printf("***********************\n");
}
void ChangeFlg(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を付与しますか？\n");
		printf("１毒:２睡眠:３麻痺:４火傷:５攻撃力↑:６攻撃力↓:０終了＞");
		scanf("%d", &a);
		if (a== 0)
		{
			break;
		}
		switch (a)
		{
			case 1:
				*s |= Poison;
				break;
			case 2:
				*s |= Sleep;
				break;
			case 3:
				*s|= paralysis;
				break;
			case 4:
				*s |= Burn;
				break;
			case 5:
				*s |= atkUp;
				break;
			case 6:
				*s |= atkDown;
				break;
			default:	//1〜6以外の値のとき
				break;
		}
	}
}
void ClearFlg(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("どの状態を解除しますか？\n");
		printf("１毒:２睡眠:３麻痺:４火傷:５攻撃力↑:６攻撃力↓:７全解除:０終了＞");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
			case 1:
				*s &= ~Poison;
				break;
			case 2:
				*s &= ~Sleep;
				break;
			case 3:
				*s &= ~paralysis;
				break;
			case 4:
				*s &= ~Burn;
				break;
			case 5:
				*s &= ~atkUp;
				break;
			case 6:
				*s &= ~atkDown;
				break;
			case 7:
				*s = Base;
				break;
			default:
				break;
		}
	}
}

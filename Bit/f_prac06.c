#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000 ’Êí
	Poison = 1 << 0,	//00000001 ‚Ç‚­
	Sleep = 1 << 1,		//00000010 ‚Ë‚Ş‚è
	paralysis = 1 << 2, //00000100 ‚Ü‚Ğ
	Burn = 1 << 3,		//00001000 ‚â‚¯‚Ç
	atkUp = 1 << 4,		//00010000 UŒ‚ƒAƒbƒv
	atkDown = 1 << 5	//00100000 UŒ‚ƒ_ƒEƒ“
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
	printf("****Œ»İ‚Ìó‘Ô****\n");
	if (s & Poison)
	{
		printf("“Å\n");
	}
	if (s & Sleep)
	{
		printf("–°‚è\n");
	}
	if (s & paralysis)
	{
		printf("–ƒáƒ\n");
	}
	if (s & Burn)
	{
		printf("‰Î\n");
	}
	if (s & atkUp)
	{
		printf("UŒ‚—ÍƒAƒbƒv\n");
	}
	if (s & atkDown)
	{
		printf("UŒ‚—Íƒ_ƒEƒ“\n");
	}
	if (s == Base)
	{
		printf("ó‘ÔˆÈã‚È‚µ\n");
	}
	printf("***********************\n");
}
void ChangeFlg(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("‚Ç‚Ìó‘Ô‚ğ•t—^‚µ‚Ü‚·‚©H\n");
		printf("‚P“Å:‚Q‡–°:‚R–ƒáƒ:‚S‰Î:‚TUŒ‚—Íª:‚UUŒ‚—Í«:‚OI—¹„");
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
			default:	//1`6ˆÈŠO‚Ì’l‚Ì‚Æ‚«
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
		printf("‚Ç‚Ìó‘Ô‚ğ‰ğœ‚µ‚Ü‚·‚©H\n");
		printf("‚P“Å:‚Q‡–°:‚R–ƒáƒ:‚S‰Î:‚TUŒ‚—Íª:‚UUŒ‚—Í«:‚V‘S‰ğœ:‚OI—¹„");
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

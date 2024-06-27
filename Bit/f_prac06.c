#include<stdio.h>
enum BitState
{
	Base = 0,			//00000000 �ʏ�
	Poison = 1 << 0,	//00000001 �ǂ�
	Sleep = 1 << 1,		//00000010 �˂ނ�
	paralysis = 1 << 2, //00000100 �܂�
	Burn = 1 << 3,		//00001000 �₯��
	atkUp = 1 << 4,		//00010000 �U���A�b�v
	atkDown = 1 << 5	//00100000 �U���_�E��
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
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & atkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & atkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)
	{
		printf("��Ԉȏ�Ȃ�\n");
	}
	printf("***********************\n");
}
void ChangeFlg(UINT* s)
{
	int a;
	while (1)
	{
		DisplayStatus(*s);
		printf("�ǂ̏�Ԃ�t�^���܂����H\n");
		printf("�P��:�Q����:�R���:�S�Ώ�:�T�U���́�:�U�U���́�:�O�I����");
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
			default:	//1�`6�ȊO�̒l�̂Ƃ�
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
		printf("�ǂ̏�Ԃ��������܂����H\n");
		printf("�P��:�Q����:�R���:�S�Ώ�:�T�U���́�:�U�U���́�:�V�S����:�O�I����");
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

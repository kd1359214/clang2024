#include<stdio.h>
int saidai(int* p, int number);
int saisyou(int* p, int number);
main()
{
	int data[8] = { 6,10,8,2,9,5,1,7 };
	printf("�ő�l=%d\n", saidai(data, 8));
	printf("�ŏ��l=%d\n", saisyou(data, 8));
}

//�֐���`
int saidai(int* p, int number)
{
	int dai, i = 0;
	//���̍ő�l�����Ă���
	dai = *p;
	p++; //���̃f�[�^
	while (i<number-1)
	{
		if (dai < *p)
		{
			dai = *p;
		}
		p++;
		i++;
	}
	return dai;
}
int saisyou(int* p, int number)
{
	int syou, i = 0;
	p++;
	while (i<number-1)
	{
		if (syou>*p)
		{
			syou = *p;
		}
		p++;
		i++;
	}
	return syou;
}
#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data *syohin);	//������*

main()
{
	struct syohin_data syohin = { "�P�V�S��",50 };
	display3(&syohin);	//�A�h���X�n����&
}
void display3(struct syohin_data *syohin)
{
	printf("%s\t%d\n",syohin->name,syohin->tanka);	//�A�h���X�̎���->

	//printf("%s\t%d\n", *(syohin)->name, *(syohin).tanka);	�ł��ł���
}
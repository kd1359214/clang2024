#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
int main(void)
{
	struct syohin_data[3] = { {"�G���s�c",30,5},{"�P�V�S��",50,2},{"�t�f�o�R",500,3} };
	struct syohin_data* p;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++,p++)	//p�̓G���s�c�̐擪�A�h���X�Ȃ̂�p++���Ȃ��Ƃ����Ȃ�
	{
		printf("���i��:%s\t", p->name);
		printf("�P��:%4d\t", p->tanka);
		printf("��:%4d\t", p->kosuu);
		printf("���z:\%4d\t", p->tanka * p->kosuu);
	}
}
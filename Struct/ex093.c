#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
	int kosuu;
};
int main(void)
{
	struct syohin_data[3] = { {"エンピツ",30,5},{"ケシゴム",50,2},{"フデバコ",500,3} };
	struct syohin_data* p;
	p = syohin;
	int i;
	for (i = 0; i < 3; i++,p++)	//pはエンピツの先頭アドレスなのでp++しないといけない
	{
		printf("商品名:%s\t", p->name);
		printf("単価:%4d\t", p->tanka);
		printf("個数:%4d\t", p->kosuu);
		printf("金額:\%4d\t", p->tanka * p->kosuu);
	}
}
#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};

void display3(struct syohin_data *syohin);	//引数の*

main()
{
	struct syohin_data syohin = { "ケシゴム",50 };
	display3(&syohin);	//アドレス渡しの&
}
void display3(struct syohin_data *syohin)
{
	printf("%s\t%d\n",syohin->name,syohin->tanka);	//アドレスの時は->

	//printf("%s\t%d\n", *(syohin)->name, *(syohin).tanka);	でもできる
}
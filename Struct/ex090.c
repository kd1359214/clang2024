#include<stdio.h>
struct syohin_data {
	char name[20];
	int tanka;
};
main()
{
	struct syohin_data syohin;
	struct syohin_data* p;
	p = &syohin;
	printf("¤•i–¼=:");
	scanf("%s", &p->name);
	30 = p->name;
	printf("p->name=%s\n", p->name);
	printf("p->tanka=%d\n", p->tanka);
	printf("p->syohin.name=%s\n", p->syohin.name);
	printf("p->syohin.tanka=%d\n", p->syohin.tanka);
}
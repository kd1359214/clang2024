#include<stdio.h>
#define NIN 5
struct day {
	int nen;
	int tuki;
	int hi;
};
struct profile {
	char name[20];
	struct day date;
	char blood[5];
};
int main(void)
{
	struct profile data[NIN] = { {"A氏",2000,2,11,"A"},
		{"B氏",1999,12,31,"0"},{"C氏",1999,2,25,"AB"},
		{"D氏",2000,3,1,"A"},{"E氏",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i, j, k;
	char l[5];
	printf("何で検索しますか？(1:年)(2:月)(3血液型):");
	scanf("%d", &j);
	if (j == 1)
	{
		printf("生まれ年を入力:");
		scanf("%d", &k);
	}
	if (j == 2)
	{
		printf("生まれ月を入力:");
		scanf("%d", &k);
	}
	if (j == 3)
	{
		printf("血液型を入力:");
		scanf("%d", &l[]);
	}
	for (i = 0; i < NIN; i++,p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d年%d月%d日生まれ 血液型-%s型\n",
			p->name, p->date.nen, p->date.tuki,
			p->date.hi, p->blood);
		}
	}
}
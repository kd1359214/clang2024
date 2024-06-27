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
	struct profile data[NIN] = { {"A",2000,2,11,"A"},
		{"B",1999,12,31,"0"},{"C",1999,2,25,"AB"},
		{"D",2000,3,1,"A"},{"E",1999,5,10,"B"} };
	struct profile* p;
	p = data;
	int i, j, k;
	char l[5];
	printf("‰½‚ÅŒŸõ‚µ‚Ü‚·‚©H(1:”N)(2:Œ)(3ŒŒ‰tŒ^):");
	scanf("%d", &j);
	if (j == 1)
	{
		printf("¶‚Ü‚ê”N‚ğ“ü—Í:");
		scanf("%d", &k);
	}
	if (j == 2)
	{
		printf("¶‚Ü‚êŒ‚ğ“ü—Í:");
		scanf("%d", &k);
	}
	if (j == 3)
	{
		printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
		scanf("%d", &l[]);
	}
	for (i = 0; i < NIN; i++,p++)
	{
		if (p->date.tuki == 2)
		{
			printf("%s--%d”N%dŒ%d“ú¶‚Ü‚ê ŒŒ‰tŒ^-%sŒ^\n",
			p->name, p->date.nen, p->date.tuki,
			p->date.hi, p->blood);
		}
	}
}
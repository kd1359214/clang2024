#include<stdio.h>
#include<string.h>
#define NIN 5
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void)
{
	struct profile data[NIN];
	struct profile* p;
	int i;
	p = data;
	for (i = 0; i < NIN; i++)
	{
		printf("%dlÚ(¼O):",i+1);
		scanf("%s",p->name);
		printf("%dlÚ(¶Nú):",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%dlÚ(t^):",i+1);
		scanf("%s", p->blood);
	}
	for (i = 0; i < NIN; i++)
	{
		if (strcmp(p->blood,"A")==0)	//strcmpÍ¶ñÌär
		{
			printf("%s--%dN%d%dú¶Üê t^-%s^\n",
				p->name, p->birth[0], p->birth[1],
				p->birth[2], p->blood);
		}
	}
	return;
}
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
		printf("%d�l��(���O):",i+1);
		scanf("%s",p->name);
		printf("%d�l��(���N����):",i+1);
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("%d�l��(���t�^):",i+1);
		scanf("%s", p->blood);
	}
	for (i = 0; i < NIN; i++)
	{
		if (strcmp(p->blood,"A")==0)	//strcmp�͕�����̔�r
		{
			printf("%s--%d�N%d��%d�����܂� ���t�^-%s�^\n",
				p->name, p->birth[0], p->birth[1],
				p->birth[2], p->blood);
		}
	}
	return;
}
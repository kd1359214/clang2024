#include<stdio.h>
struct profile {
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void)
{
	struct profile name, birth, blood;
	struct profile* pname, * pbirth, * pblood;
	pname = name;
	pbirth = birth;
	pblood = blood;
	printf("���O�����:");
	gets(*pname);
	printf("���N�������󔒂ŋ�؂��ē���:");
	scanf("%d%d%d", &*pbirth[0], &*pbirth[1], &*pbirth[2]);
	printf("���t�^�����:");
	scanf("%s", &*pblood);
	printf("%s--%d�N%d��%d�������t�^-%s�^\n",
		pname, pbirth[0], birth[1], pbirth[2], pblood);
}

#include<stdio.h>
#include<string.h>
struct profile{
	char name[20];
	int birth[3];
	char blood[5];
};
int main(void)
{
	struct profile data;
	printf("���O����́F:");
	gets(data.name);	//�c���Ɛ����ǂ��������Ă悢�悤��gets   gets�͋󔒂���؂�Ȃ�
	printf("���N�������󔒂ŋ�؂��ē��́F:");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], data.birth[2]);
	printf("���t�^����́F:");
	scanf("%s",data.blood);
	printf("%s--%d�N%d��%d���� ���t�^-%s\n",
		data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);
	return;
}
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
	printf("名前を入力:");
	gets(*pname);
	printf("生年月日を空白で区切って入力:");
	scanf("%d%d%d", &*pbirth[0], &*pbirth[1], &*pbirth[2]);
	printf("血液型を入力:");
	scanf("%s", &*pblood);
	printf("%s--%d年%d月%d日生血液型-%s型\n",
		pname, pbirth[0], birth[1], pbirth[2], pblood);
}

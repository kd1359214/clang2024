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
	printf("–¼‘O‚ğ“ü—Í:");
	gets(*pname);
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—Í:");
	scanf("%d%d%d", &*pbirth[0], &*pbirth[1], &*pbirth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—Í:");
	scanf("%s", &*pblood);
	printf("%s--%d”N%dŒ%d“ú¶ŒŒ‰tŒ^-%sŒ^\n",
		pname, pbirth[0], birth[1], pbirth[2], pblood);
}

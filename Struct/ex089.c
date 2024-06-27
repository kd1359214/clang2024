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
	printf("–¼‘O‚ğ“ü—ÍF:");
	gets(data.name);	//•cš‚Æ«‚ğ‚Ç‚¿‚ç‚à“ü‚ê‚Ä‚æ‚¢‚æ‚¤‚Égets   gets‚Í‹ó”’‚ğ‹æØ‚ç‚È‚¢
	printf("¶”NŒ“ú‚ğ‹ó”’‚Å‹æØ‚Á‚Ä“ü—ÍF:");
	scanf("%d%d%d", &data.birth[0], &data.birth[1], data.birth[2]);
	printf("ŒŒ‰tŒ^‚ğ“ü—ÍF:");
	scanf("%s",data.blood);
	printf("%s--%d”N%dŒ%d“ú¶ ŒŒ‰tŒ^-%s\n",
		data.name, data.birth[0], data.birth[1], data.birth[2], data.blood);
	return;
}
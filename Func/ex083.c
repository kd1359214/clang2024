#include<stdio.h>
int syrcnt(char* p);
main()
{
	char buf[256];
	int mojisuu;
	printf("•¶š—ñH:");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("“ü—Í‚³‚ê‚½•¶š—ñ‚Í%d•¶š‚Å‚·B\n", mojisuu);
}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);//{}‚Ì‚È‚©‚É‰½‚à“ü‚ç‚È‚¢ê‡‚ÍÈ—ª‚Å‚«‚é
	return cnt;
}
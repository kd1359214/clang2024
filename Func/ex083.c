#include<stdio.h>
int syrcnt(char* p);
main()
{
	char buf[256];
	int mojisuu;
	printf("������H:");
	gets(buf);
	mojisuu = strcnt(buf);
	printf("���͂��ꂽ�������%d�����ł��B\n", mojisuu);
}
int strcnt(char* p)
{
	int cnt;
	for (cnt = 0; *p != '\0'; cnt++, p++);//{}�̂Ȃ��ɉ�������Ȃ��ꍇ�͏ȗ��ł���
	return cnt;
}
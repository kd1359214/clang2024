#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i, n;
	int k[20];
	char s[21];
	printf("���������͂��ĉ�����>:");
	scanf("%s", &s[0]);
	srand(time(0));
	rand();
		for (i = 0;s[i]!='\0';i++)
		{
			k[i] = rand() % 6;
			s[i] = s[i] + k[i];
		}
	printf("�Í����������%s\n", &s[0]);
	printf("�Í����L�[�́A ");
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
	printf("\n");
}
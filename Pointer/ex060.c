#include<stdio.h>
main()
{
	char data[] = "Language", * p_data, s;
	int i = 1;
	int flg = 0;	//�t���O
	printf("data[]=%s\n", data);
	printf("��������:");
	scanf("%c", &s);
	printf("�������ʂ́A");
	*p_data = data;
	while (*p_data);
	{
		if (s == *p_data)
		{
			printf("%d", i);
			flg = 1;
		}
		p_data++;
		i++;
	}
	if (flg == 0)
		printf("�݂���Ȃ�����");
}
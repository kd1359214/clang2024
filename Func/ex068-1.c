#include<stdio.h>
main()
{
	int a, b,c, ret;
	printf("3�̐������󔒂ŋ�؂��ē���:");
	ret = scanf("%d%d%d", &a, &b, &c);	//ret�ɂ͂R������@ret�͓��͌�������R������
	printf("ret=%d a=%d b=%d c=%d\n", ret, a, b, c);
	printf("���������(ctlr+z�ŏI��)a: ");
	while (scanf("%d", &a) != EOF)
	{
		printf("a=%d\n", a);
		printf("���������(ctlr+z�ŏI��)a: ");	//ctrl+z��3�����
	}
}
#include<stdio.h>
main()
{
	int i, j;
	char e;
	printf("����1:");
	scanf("%d", &i);
	printf("����2:");
	scanf("%d", &j);
	printf("���Z�q:");
	scanf("%*c%c", &e);	//\n�������Ƃ��ĔF������Ă��邩��1�o�C�g�ǂݔ�΂���%*c�œǂݔ�΂�

	switch(e)
	{
	case'+':
			printf("%d+%d=%d\n", i, j, i + j);
			break;
	case'-':
			printf("%d-%d=%d\n", i, j, i - j);
			break;
	case'*':
			printf("%d*%d=%d\n", i, j, i * j);
			break;
	case'/':
			printf("%d/%d=%d\n", i, j, i / j);
			break;
	default:
		printf("���̑��̉��Z�q�ł�\n");
	}
}
#include<stdio.h>
void display(int a);	//�߂�l���Ȃ��ꍇ��void�Ə���
main()
{
	int a;
	printf("data?:");
	scanf("%d", &a);
	display(a);
}
void display(int a)
{
	printf("���̓f�[�^=%d\n", a);
	return;			//�߂�l���Ȃ��̂ŏ����Ȃ��Ă��悢
}
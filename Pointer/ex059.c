#include<stdio.h>
main()
{
	char data[15] = "C Language";
	char data2[15];
	char* p_data, * p_data2;
	p_data = data;
	p_data2 = data2;

	printf("data[]=%s\n", p_data);	//%s�̎������̓A�h���X���w�肷��i'\0'�߂ł��\�������j

	while (*p_data2++ = *p_data++);	//������̃R�s�[

	p_data2 = data2;
	printf("data2[]=%s\n", p_data2);	
	while (*p_data2)
	{
		putchar(*p_data2++);	//*p_data2++��*p_data2
	}							//p_data2++;	�Ɠ���
	putchar('\n');
}
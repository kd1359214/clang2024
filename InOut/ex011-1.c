#include<stdio.h>
main()
{
	char a1, a2, a3, a4, a5, a6, a7, a8, a9, a10;
	a1 = 'A';
	a2 = 'B';
	a3 = 'C';
	a4 = 'a';
	a5 = 'b';
	a6 = 'c';
	a7 = '0';
	a8 = '1';
	a9 = '2';
	a10 = ' ';
	printf("%c: %d 0x%x %c: %d 0x%x \n", a1, a1, a1, a2, a2, a2);
	printf("%c: %d 0x%x %c: %d 0x%x \n", a3, a3, a3, a4, a4, a4);
	printf("%c: %d 0x%x %c: %d 0x%x \n", a5, a5, a5, a6, a6, a6);
	printf("%c: %d 0x%x %c: %d 0x%x \n", a7, a7, a7, a8, a8, a8);
	printf("%c: %d 0x%x %c: %d 0x%x \n", a9, a9, a9, a10, a10, a10);
}
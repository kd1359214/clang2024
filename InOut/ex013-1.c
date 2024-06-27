#include<stdio.h>
main()
{
	char s1, s2;
	s1 = '5';
	s2 = '6';
	printf("%c Å~ %c = %d\n", s1, s2, (s1 - '0') * (s2 - '0'));
}
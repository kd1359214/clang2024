#include<stdio.h>
void atai(int x, int y,int z,int *ma,int *mi);
main()
{
	int a, b, c, ma, mi;
	printf("®”‚ð3‚Â“ü—Í:");
	scanf("%d%d%d", &a, &b, &c);
	atai(a,b,c,&ma,&mi);
	printf("Å‘å’l=%d Å¬’l=%d\n",ma,mi );
}
void atai(int x, int y int z,int *ma,int *mi)
{
	*ma = x;
	if (y > *ma) { *ma = y; }
	if (z > *ma) { *ma = z; }
	*mi = x;
	if (y > *ma) { *ma = y; }
	if (z > *ma) { *ma = z; }
	return;

}
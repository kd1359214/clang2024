#include<stdio.h>
main()
{
	char data[] = "Language", * p_data, s;
	int i = 1;
	int flg = 0;	//ƒtƒ‰ƒO
	printf("data[]=%s\n", data);
	printf("•¶šŒŸõ:");
	scanf("%c", &s);
	printf("ŒŸõŒ‹‰Ê‚ÍA");
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
		printf("‚İ‚Â‚©‚ç‚È‚©‚Á‚½");
}
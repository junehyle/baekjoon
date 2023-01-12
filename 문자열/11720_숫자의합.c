#include <stdio.h>

int	main()
{
	int	i;
	int	a;
	int	cnt;
	char	b[100];

	i = 0;
	cnt = 0;
	scanf("%d", &a);
	scanf("%s", b);
	while (i < a)
		cnt += b[i++] - 48;
	printf("%d", cnt);
	return 0;
}

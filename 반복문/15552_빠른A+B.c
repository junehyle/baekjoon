#include <stdio.h>

int	main()
{
	int	cnt;
	int	a,b;

	scanf("%d", &cnt);
	while (0 < cnt)
	{
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
		cnt--;
	}
	return 0;
}

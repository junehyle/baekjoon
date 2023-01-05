#include <stdio.h>

int	main()
{
	int	cnt,i;
	int 	a,b;

	i = 1;
	scanf("%d", &cnt);
	while (cnt > 0)
	{
		scanf("%d %d", &a, &b);
		printf("Case #%d: %d + %d = %d\n", i, a, b, a + b);
		i++;
		cnt--;
	}
	return 0;
}

#include <stdio.h>

int	main()
{
	int	total;
	int	kind;
	int	price;
	int	cnt;
	int	result = 0;

	scanf("%d", &total);
	scanf("%d", &kind);
	while (0 < kind)
	{
		scanf("%d %d", &price, &cnt);
		result += price * cnt;
		kind--;
	}
	if (total == result)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}

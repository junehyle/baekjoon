#include <stdio.h>

int	main()
{
	int	build_cost;
	int	make_cost;
	int	price;
	int	earn;
	int	cnt = 1;

	scanf("%d %d %d", &build_cost, &make_cost, &price);
	earn = price - make_cost;
	if (earn <= 0)
	{
		printf("-1");
		return 0;
	}
	cnt += build_cost / earn;
	printf("%d", cnt);
	return 0;
}

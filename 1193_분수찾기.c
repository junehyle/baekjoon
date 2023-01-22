#include <stdio.h>

int	cycle_max(int n)
{
	int	i = 1;
	int	sum = 0;
	
	while (i < n)
		sum += i++;
	return (sum);
}

int	main()
{
	int	num;
	int	range = 1;
	int	cycle = 1;
	int	a = 1;

	scanf("%d", &num);
	while (num > range)
		range += (cycle++ + 1);
	int	b = cycle;
	if (cycle == 1)
	{
		printf("1/1");
		return 0;
	}
	if (cycle % 2 == 0)
	{
		while (num-- - cycle_max(cycle) != 1)
		{
			a += 1;
			b -= 1;
		}
		printf("%d/%d", a, b);
		return 0;
	}
	if (cycle % 2 == 1)
	{
		while (num-- - cycle_max(cycle) != 1)
		{
			a += 1;
			b -= 1;
		}
		printf("%d/%d", b, a);
		return 0;
	}
}

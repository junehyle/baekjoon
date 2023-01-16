#include <stdio.h>

int	main()
{
	int	num;
	int	range = 1;
	int	i = 1;

	scanf("%d", &num);
	while (range < num)
		range += 6 * i++;
	printf("%d", i);
	return 0;
}

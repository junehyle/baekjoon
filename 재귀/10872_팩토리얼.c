#include <stdio.h>

int	main()
{
	int	num;
	int	result = 1;

	scanf("%d", &num);
	if (num == 0)
	{
		printf("1\n");
		return 0;
	}
	while (num != 1)
		result *= num--;
	printf("%d\n", result);
	return 0;
}

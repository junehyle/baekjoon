#include <stdio.h>

int	fibonacci(int num)
{
	if (num == 0)
		return (0);
	if (num == 1)
		return (1);
	return (fibonacci(num - 2) + fibonacci(num - 1));
}

int	main()
{
	int	num;
	int	result;

	scanf("%d", &num);
	result = fibonacci(num);
	printf("%d\n", result);
	return 0;
}

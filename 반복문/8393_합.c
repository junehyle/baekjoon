#include <stdio.h>

int	main()
{
	int	n;
	int	result = 0;

	scanf("%d", &n);
	while (n > 0)
		result += n--;
	printf ("%d", result);
	return 0;
}

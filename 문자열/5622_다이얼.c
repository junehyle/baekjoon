#include <stdio.h>

int	main()
{
	int	moves[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
	char	str[16];
	int	i = 0;
	int	total = 0;

	scanf("%s", str);
	while (str[i] != 0)
	{
		total += moves[str[i] - 'A'];
		i++;
	}
	printf("%d", total);
	return 0;
}

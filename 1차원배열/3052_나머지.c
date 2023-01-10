#include <stdio.h>

int	main()
{
	int	i = 0;
	int	j = 0;
	int	arr[10];
	int	cnt = 0;
	int	type = 1;

	while (i < 10)
		scanf("%d", &arr[i++]);
	while (i > 0)
	{
		--i;
		arr[i] = arr[i] % 42;
	}
	while (i < 9)
	{
		j = i + 1;
		cnt = 0;
		while(j < 10)
		{
			if (arr[i] == arr[j])
				cnt++;
			j++;
		}
		if (cnt == 0)
			type++;
		i++;
	}
	printf("%d\n", type);
	return 0;
}

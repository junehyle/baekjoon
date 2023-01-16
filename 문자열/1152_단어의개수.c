#include <stdio.h>

int	main()
{
	char	s1[1000001];
	int	i = 0;
	int	word = 0;

	scanf("%[^\n]s", s1);
	if (s1[i] != ' ')
		word++;
	while (s1[i])
	{
		if (s1[i - 1] == ' ')
		{
			if (s1[i] != ' ')
				word++;
		}
		i++;
	}
	printf("%d\n", word);
	return 0;
}

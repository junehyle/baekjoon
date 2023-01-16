#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return(i);
}

int	main()
{
	char	str[1000000];
	int	alpha[26];
	int	i = 0;
	int	len;
	int	max = 0;
	char	ans;

	scanf("%s", str);
	len = ft_strlen(str);
	while (i < len)
	{
		if (str[i] >= 'a')
			alpha[str[i] - 'a'] += 1;
		else
			alpha[str[i] - 'A'] += 1;
		i++;
	}
	i = 0;
	while(i < 26)
	{
		if (alpha[i] == max)
			ans = '?';
		else
		{
			if (alpha[i] > max)
			{
				max = alpha[i];
				ans = 'A' + i;
			}
		}
		i++;
	}
	printf("%c", ans);
	return 0;
}

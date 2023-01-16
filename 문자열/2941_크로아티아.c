#include <stdio.h>

int	check_index_croatia(char *str, int i)
{
	int	cnt = 0;

	if (str[i] == 'c' && str[i + 1] == '=')
		cnt++;
	if (str[i] == 'c' && str[i + 1] == '-')
		cnt++;
	if (str[i] == 'd' && str[i + 1] == '-')
		cnt++;
	if (str[i] == 'l' && str[i + 1] == 'j')
		cnt++;
	if (str[i] == 'n' && str[i + 1] == 'j')
		cnt++;
	if (str[i] == 's' && str[i + 1] == '=')
		cnt++;
	if (str[i] == 'z' && str[i + 1] == '=')
		cnt++;
	return (cnt);
}

int	check_index_croatia2(char *str, int i)
{
	int	cnt = 0;

	if (str[i] == 'd' && str[i + 1] == 'z' && str[i + 2] == '=')
		cnt++;
	return (cnt);
}

int	main()
{
	char	str[104];
	int	i = 0;
	int	cnt = 0;

	scanf("%s", str);
	while (str[i])
	{
		if (check_index_croatia(str, i) == 1)
		{
			cnt++;
			i += 2;
		}
		else if (check_index_croatia2(str, i) == 1)
		{
			cnt++;
			i += 3;
		}
		else if (str[i] != '-' && str[i] != '=')
		{
			cnt++;
			i++;
		}
		else
			i++;
	}
	printf("%d", cnt);
	return 0;
}

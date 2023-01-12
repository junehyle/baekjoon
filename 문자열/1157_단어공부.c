#include <stdio.h>

int	make_small_alpha(char c)
{
	if (c >= 'A' && c <= 'Z')
		c -= 'a' - 'A';
	return (c);
}

int	maximum_repeat(char *str)
{
	int	i = 0;
	int	max = 0;

	while (str[i])
	{
		if (max < str[i])
			max = str[i];
	}
	return (max);
}

int	main()
{
	char	str[1000000];
	int	i = 0;
	int	alphabet = 'a';
	int	cnt;
	char	alpha[26];
	int	max_repeat;

	scanf("%s", str);
	while (str[i])
	{
		str[i] = make_small_alpha(str[i]);
		i++;
	}
	while (alphabet <= 'z')
	{
		i = 0;
		cnt = 0;
		while(str[i])
		{
			if (str[i] == alphabet)
				cnt++;
		}
		alpha[alphabet - 'a'] = cnt;
		alphabet++;
	}
	i = 0;
	cnt = 0;
	max_repeat = maximum_repeat(alpha);
	while (alpha[i])
	{
		if (alpha[i] == max_repeat)
			cnt++;
		i++;
	}
	if (cnt > 1)
		printf("?");
	i = 0;
	while (alpha[i])
	{
		if (alpha[i] == max_repeat)
			break ;
		i++;
	}
	printf("%c\n", 'A' + i);
	return (0);
}

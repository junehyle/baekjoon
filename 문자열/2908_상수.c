#include <stdio.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i = 0;

	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	main()
{
	char	s1[4];
	char	s2[4];
	char	tmp;
	char	tmp2;
	int	result;
	int	i = 0;

	scanf("%s %s", s1, s2);
	tmp = s1[2];
	s1[2] = s1[0];
	s1[0] = tmp;
	tmp2 = s2[2];
	s2[2] = s2[0];
	s2[0] = tmp2;
	result = ft_strcmp(s1, s2);
	if (result > 0)
		while (i <= 2)
			printf("%c", s1[i++]);
	else
		while (i <= 2)
			printf("%c", s2[i++]);
	return 0;
}

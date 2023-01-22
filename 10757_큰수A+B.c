#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while(str[i])
		i++;
	return (i);
}

int	main()
{
	char	a[10002];
	char	b[10002];
	char	c[10002];
	char	d[10002];
	int	a_len,b_len;
	char	e[10003];
	int	end;
	int	i;
	int	j;

	scanf("%s %s", a, b);
	a_len = ft_strlen(a);
	b_len = ft_strlen(b);
	if (a_len >= b_len)
		end = a_len;
	else
		end = b_len;
	i = end;
	j = a_len;
	while (j >= 0)
		c[i--] = a[j--];
	i = end;
	j = b_len;
	while (j >= 0)
		d[i--] = b[j--];
	i = end;
	while (i >= 0)
	{
		if (c[i] == 0 || d[i] == 0)
			e[i] = c[i] + d[i];
		else
			e[i] = c[i] + d[i] - 48;
		i--;
	}
	i = end;
	while (i >= 1)
	{
		if (e[i] >= 58)
		{
			if (e[i - 1] != 0)
				e[i - 1] += 1;
			else
				e[i - 1] = 49;
			e[i] -= 10;
		}
		i--;
	}
	j = 0;
	if (e[j] > '9')
	{
		printf("1");
		e[j] -= 10;
	}
	while (e[j])
		printf ("%c", e[j++]);
	return 0;
}

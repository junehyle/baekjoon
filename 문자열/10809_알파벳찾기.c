#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	return (i);
}

int	main()
{
	char	a[100];
	int	alpabet = 97;
	int	i;
	int	locate;
	int	len;

	scanf("%s", a);
	len = ft_strlen(a);
	while (alpabet != 123)
	{
		i = 0;
		locate = 0;
		while (alpabet != a[i] && i < len)
		{
			locate += 1;
			i++;
		}
		if (locate == len)
			locate = -1;
		printf("%d%c", locate, 32);
		alpabet++;
	}
}

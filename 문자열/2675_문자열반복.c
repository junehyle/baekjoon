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
	int	case_num;
	int	i = 0;
	int	i2;
	int	copy;
	int	repeat;
	char	str[20];
	int	len;

	scanf("%d", &case_num);
	while (i < case_num)
	{
		scanf("%d %s", &repeat, str);
		i2 = 0;
		len = ft_strlen(str);
		while (i2 < len)
		{
			copy = 0;
			while (copy < repeat)
			{
				printf("%c", str[i2]);
				copy++;
			}
			i2++;
		}
		printf("\n");
		i++;
	}
	return (0);
}

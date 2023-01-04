#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c, int i)
{
	write (i, &c, 1);
}

void	ft_putstr(char *s)
{
	int	i = 0;

	while (s[i])
		ft_putchar(s[i++], 1);
}
	

int	main ()
{
	char	*s = "Hello World!";

	ft_putstr(s);
	return (0);
}

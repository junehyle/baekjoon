#include <stdio.h>

int main()
{
	char	str[101];
	int	cases;
	int	i = 0;
	
	scanf("%d", &cases);
	int	cnt = cases; 
	while (i < cases)
	{
		char	first = '0';
		int	alpha[26] = {0, };
		int	j = 0;
		scanf("%s", str);
		while (str[j])
		{
			if (first != str[j]) 
			{
				first = str[j];
				alpha[str[j] - 'a'] += 1;
			}

			if (alpha[str[j] - 'a'] == 2)
			{
				cnt -= 1;
				break;
			}
			j++;
		}
		i++;
	}
	printf("%d", cnt);
	return 0;
}

#include <stdio.h>

int	pattern(unsigned int n)
{
	int	a,b,c;
	int	gap1,gap2;
	static int	cnt;

	a = n / 100;
	b = n / 10 - (a * 10);
	c = n % 10;
	gap1 = a - b;
	gap2 = b - c;
	if (gap1 == gap2)
		cnt++;
	if (n == 100)
		return (cnt);
	n--;
	return (pattern(n));
}

int	answer(unsigned int n)
{
	if (n < 100)
		return(n);
	else if (n < 1000)
		return(pattern(n) + 99);
	else
		return(answer(999));
}

int	main()
{
	unsigned int	a;
	int	result;

	scanf("%d", &a);
	result = answer(a);
	printf("%d\n", result);
	return 0;
}

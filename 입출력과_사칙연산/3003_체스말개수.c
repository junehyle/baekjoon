#include <stdio.h>

int	move(int x, int y, int z)
{
	while (x != z)
	{
		if (x > z)
		{
			x--;
			y--;
		}
		else
		{
			x++;
			y++;
		}
	}
	return (y);
}

int	main ()
{
	int a, b, c, d, e, f;
	int A = 0;

	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	printf("%d %d %d %d %d %d", move(a, A, 1), move(b, A, 1),
	move(c, A, 2), move(d, A, 2), move(e, A, 2), move(f, A, 8));
	return 0;
}

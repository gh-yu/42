#include <stdio.h>

extern	void	ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)
{
	int a;
	int b;
	int d;
	int m;

	a = 10;
	b = 2;
	ft_div_mod(a, b, &d, &m);
	printf("%d %d\n", d, m);
	return 0;
}

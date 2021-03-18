#include <stdio.h>

extern	void	ft_ultimate_div_mod(int *a, int *b);

int		main(void)
{
	int div;
	int mod;

	div = 7;
	mod = 2;

	ft_ultimate_div_mod(&div, &mod);
	printf("%d %d\n", div, mod);
	return 0;
}

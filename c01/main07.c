#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size);

int		main(void)
{
	int i;
	int tab[8] = {1, 2, 3, 4, 5, 6, 7, 8};

	ft_rev_int_tab(tab, 8);

	i = 0;
	while (i < 8)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	return 0;
}

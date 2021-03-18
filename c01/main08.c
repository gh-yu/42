#include <stdio.h>

void	ft_sort_int_tab(int *tab ,int size);

int	main(void)
{
	int i;
	int t[5] = {5, 4, 3, 2, 1};

	ft_sort_int_tab(t, 5);

	i = 0;
	while (i < 5)
	{
		printf("%d ", t[i]);
		i++;
	}
	return 0;
}

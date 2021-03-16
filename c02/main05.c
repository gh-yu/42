#include <stdio.h>

int		ft_str_is_uppercase(char *str);

int		main(void)
{
	char a[] = "\0 ";
	
	printf("%d\n", ft_str_is_uppercase(a));

	return 0;
}

#include <stdio.h>

char	*ft_strlowcase(char *str);

int		main(void)
{
	char a[] = "AZaz";
	char *s = a;
	
	s = ft_strlowcase(s);

	printf("%s\n", s);

	return 0;
}

#include <stdio.h>

char	*ft_strupcase(char *str);

int		main(void)
{
	char a[] = "";
	char *str = a;

	ft_strupcase(str);

	printf("%s\n", str);

	return 0;
}

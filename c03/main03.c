#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest,char *src, unsigned int nb);

int		main(void)
{
	char s1[10] = "4567";
	char s2[20] = "123";

	ft_strncat(s2, s1, 2);
	printf("%s\n", s2);
//	printf("%s\n", strncat(s2, s1, 2));
	return 0;
}

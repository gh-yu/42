#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2);

int		main(void)
{
	char *s1 = "yyy";
	char *s2 = "yyyt";

	int	cmp = ft_strcmp(s1, s2);

	printf("cmp = %d\n", cmp);
	printf("strcmp value = %d\n", strcmp(s1, s2));
	return (0);
}

#include <stdio.h>
#include <string.h>

int		ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	char s1[] = "";
	char s2[] = "";
	
	int cmp = ft_strncmp(s1, s2, 3);
	printf("cmp = %d\n", cmp);
	printf("strncmp = %d\n", strncmp(s1, s2, 3));
}

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char s1[] = "hi! gyu is my name";
	char s2[] = "gyu";

	char *p_gyu;

	p_gyu = ft_strstr(s1, s2);
	
	printf("my_strstr : %s\n", p_gyu);
	printf("ptr before : %c\n", *p_gyu);
	
//	strncpy(p_gyu, "ygh", 3);
//	printf("changed sentence : %s\n", s1);
//	printf("ptr after : %c\n", *p_gyu);
/*
	char *ptr = strstr(s1, s2);
	if (*ptr) //null check, if can't find s2[], this sentence isn't executed
	{
		printf("orgin_strstr : %s\n", ptr);						
		printf("ptr before : %c\n", *ptr);

		strncpy(ptr, "ygh", 3);
		printf("changed sentence : %s\n", s1);
		printf("ptr after : %c\n", *ptr);
	}
*/	
	return (0);
}

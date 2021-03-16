#include <stdio.h>

int		main(void)
{
	char c = '3';
	char *a = &c;
	
	printf("%c", *a);
	printf("%p", &c);
}

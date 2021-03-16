#include <unistd.h>
#include <stdio.h>

int		main(void)
{
	char c;
	
	c = 9;
	//while (c <= 11)
	//{
		write(1, &c, 1);
		//printf("%c", c);
		//c++;
	//}
	return 0;
}

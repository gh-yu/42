#include <unistd.h>

int		main(void)
{
	char n[] = {'1', '2', '3'};
	char *ptr = &n[1];

	write(1, ptr - 1, 2);
	return 0;
}

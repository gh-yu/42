//void	ft_putchar(char c);
//void	ft_change_base(int nbr);
//int		validate_base(char *base);
void	ft_putnbr_base(int nbr, char *base);

int		main(void)
{
	char base[] = "0123456789";

	ft_putnbr_base(-2147483648, base);
	return 0;
}

#include <unistd.h>
void	Print(char c)
{
	write(1, &c, 1);
}
void	ft_putnbr(int nb)
{
	if(nb == 0)	Print('0');
	long	ConvertToLong;

	ConvertToLong = nb;
	if (ConvertToLong < 0)
	{
		write(1, "-", 1);
		ConvertToLong *= -1;
	}
	if(ConvertToLong >= 10)
	{
		ft_putnbr(ConvertToLong / 10);
	}
	Print( (ConvertToLong % 10) + '0');
	
}

void main()
{
	// ft_putnbr(-12345);
	// ft_putnbr(86);
	ft_putnbr(-340);
}



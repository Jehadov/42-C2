#include <unistd.h>

void	ft_putnbr(int nb)
{
	if(nb < 0)
	{
		write(1, "-", 1);
		nb = -1 * nb;
	}

	char    Convert;
	int	digit;
	while(nb > 0)
	{
		digit = nb % 10;
		nb = nb/10;
		Convert = '0' + digit;
		write(1, &Convert, 1);
	}
}



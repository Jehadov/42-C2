#include <unistd.h>

void ft_print_comb(void)
{
	int	nb;
	int     i;
	char    Convert[3];
	int     digit;
	i = 0;
	
	while(i < 790)
	{
		nb = i;
		int j = 0;
	    while(nb > 0)
		{
			digit = nb % 10;
			nb = nb/10;
			Convert[j++] = '0' + digit;
		}
		i++;
		write(1, &Convert[2], 1);
		if(nb < 9)write(1, &Convert[1], 1);
		if(nb < 99)write(1, &Convert[0], 1);
		write(1, ", ", 2);
	}
}


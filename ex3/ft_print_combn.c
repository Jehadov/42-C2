#include <unistd.h>

void print(char digit)
{
	write(1, &digit, 1);
}

void digits(int nb)
{
	if(nb >= 10)
		digits(nb/10);
	print( (nb % 10) + '0' );
}
void ft_print_combn(int n)
{
	int	i;
	int	m10;
	int	number;

	number = 0;
	m10 = (n > 0)? 1: 0;
	i = 0;

	while(i < n)
	{
		m10 *= 10;
		i++;
	}

	while (number < m10)
	{
		digits(number);
		number++;
		if(number < m10 )
			write(1, ", ", 2);
	}
	write(1, "\n", 1);
}

void main()
{
	ft_print_combn(3);
}

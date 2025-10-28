#include <unistd.h>

void ft_print_comb2(void)
{
	int	index;

	char digit1;
	char digit2;
	char digit3;
	char digit4;
	index = 0;
	while(index < 10000)
	{		
		digit1 = (((index / 10) / 10) / 10) + '0';
		digit2 = (((index / 10) / 10) % 10) + '0';
		digit3 = ((index / 10) %10) + '0';
		digit4 = index % 10 + '0';
		write(1, &digit1, 1);
		write(1, &digit2, 1);
		write(1, " ", 1);
		write(1, &digit3, 1);
		write(1, &digit4, 1);
		if (index != 9999)
			write(1, ", ", 2);
		else
			write(1, "\n", 1);
		index++;
	}
}

void	main()
{
	ft_print_comb2();
}

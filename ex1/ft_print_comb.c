#include <unistd.h>

void  print(char digit)
{
	write(1, &digit, 1);
}

void repeat(int nb)
{
	if (nb == 0)
		print('0');
	
	if(nb >= 10) repeat(nb / 10);
	print( (nb % 10) + '0');
}
void ft_print_comb(void)
{
	int	i;
	
	i = 0;
	while(i < 790)
	{
		repeat(i);
		if (i != 789)	
			write(1 , ", ", 2);
		else write(1 , "\n", 2);
		i++;
	}
}


void main()
{
	ft_print_comb();
}


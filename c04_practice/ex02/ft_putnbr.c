#include <unistd.h>

void	recursive(int nb)
{
	char c;

	if (!nb)
		return ;
	recursive(nb / 10);
	c = nb % 10 + '0';
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb *= -1;
		}
		recursive(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

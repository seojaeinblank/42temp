#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	rec(int nb)
{
	char ch;

	if (nb == 0)
		return ;
	rec(nb / 10);
	ch = '0' + nb % 10;
	write(1, &ch, 1);
}

void	ft_putnbr(int nb)
{
	char ch;

	if (nb < 0)
	{
		write(1, "-", 1);
		rec(-(nb / 10));
		ch = '0' - nb % 10;
	}
	else
	{
		rec(nb / 10);
		ch = '0' + nb % 10;
	}
	write(1, &ch, 1);
}

int		ft_atoi(char *str)
{
	int ret;
	int sign;

	ret = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		++str;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while ('0' <= *str && *str <= '9')
	{
		ret *= 10;
		ret += (sign * (*(str++) - '0'));
	}
	return (ret);
}

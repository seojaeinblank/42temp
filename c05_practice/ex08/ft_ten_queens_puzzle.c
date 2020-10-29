#include <unistd.h>

void	q_print(int *str)
{
	int	i;
	char	c;

	i = 0;
	while(i < 10)
	{
		c = str[i] + '0';
		write(1, &c, 1);
		i++;
	}
}

int	ft_rule(int *q_point, int n, int upper)
{
	int i;
	int j;

	i = upper;
	while (i < 10)
	{
		q_point[n] = i;
		j = 1;
		while (n - j >= 0)
		{
			if (q_point[n - j] == q_point[n])
				break;
			else if (q_point[n] - j == q_point[n - j]
				|| q_point[n] + j == q_point[n - j])
				break ;
			if (j == n)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

void	ft_make_place(int *q_point, int n, int upper, int count)
{
	if (n == 10)
	{
		q_point[10] = '\0';
		q_print(q_point);
		write(1, "\n", 1);
		count ++;
	}
	if (upper == 10)
	{
		if (n - 1 != 0)
			ft_make_place(q_point, n - 1, q_point[n - 1] + 1, count);
		else
			return ;
	}
	if (ft_rule(q_point, n, upper))
		ft_make_place(q_point, n + 1, 0, count);
	else
		ft_make_place(q_point, n - 1, q_point[n - 1] + 1, count);
}

int	ft_ten_queens_puzzle(void)
{
	int q_point[11];
	int i;
	int count;

	i = 0;
	count = 0;
	while (i < 10)
	{
		q_point[0] = i;
		ft_make_place(q_point, 1, 0, count);
		i++;
	}
	return (count);
}
	

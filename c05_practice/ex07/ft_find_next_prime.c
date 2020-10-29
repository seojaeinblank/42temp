int	ft_is_prime(int nb)
{
	int i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = 1;
	while (nb + i < nb + i + 1)
	{
		if (ft_is_prime(nb + i))
			return (nb + i);
		i++;
	}
	return (0);
}

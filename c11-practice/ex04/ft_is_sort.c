int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int k;
	int tmp;

	k = 0;
	while (length-- > 1)
	{
		tmp = f(tab[length], tab[length - 1]);
		if (tmp == 0)
			continue;
		if (k == 0)
			k = tmp;
		else if ((k < 0 && tmp > 0) || (k > 0 && tmp < 0))
			return (0);
	}
	return (1);
}

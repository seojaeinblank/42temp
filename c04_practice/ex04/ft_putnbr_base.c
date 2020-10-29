#include <unistd.h>

int	check_base(char *base)
{
	int i;
	int j;
	
	i = 0;
	j = 0;

	if (base[i] == '\0' || base[i + 1] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		j = i;
		while (base[++j] != '\0')
			if (base[i] == base[j])
				return (0);
		if (base[i] == '+' || base[i] == '-')
			return (0);
		i++;
	}
	return (1); 
}

int	get_base_length(char *base)
{
	int length; 

	length = 0;
	while (base[length] != '\0')
		length++;
	return (length);
}


void	recursive_base(char *base, int nbr, int length)
{
	if (nbr > length)
		recursive_base(base, nbr / length, length);
	write(1, &(base[nbr % length]), 1);
}


void	ft_putnbr_base(int nbr, char *base)
{
	int len;
    	char minus_max;

	len = get_base_length(base);
	if (!check_base(base))
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
        minus_max = base[nbr % len * (-1)];
		recursive_base(base, nbr / len * (-1), len);
        write(1, &minus_max, 1);
	}
	else	recursive_base(base, nbr, len);
}

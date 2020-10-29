#include <unistd.h>
int     check_base(char *base)
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
		if (base[i] == '+' || base[j] == '-')
			return (0);
		i++;
	}
	return (1);
}

int     check_char(char c, char *base)
{
    int i;

    if (c == '\t' || c == '\n'
            || c == '\v' || c == '\f'
            || c == '\r' || c == ' ')
        return (1);
    if (c == '-')
        return (-1);
    if (c == '+')
        return (-2);
    i = 0;
    while (base[i] != '\0')
    {
        if (c == base[i++])
            return (2);
    }
    return (0);
}

int    get_int(char c, char *base)
{
    int i;

    i = 0;
    while (base[i] != c)
        i++;
    return (i);
}

int    get_length(char *base)
{
    int i;

    i = 0;
    while (base[i] != '\0')
        i++;
    return (i);
}

int    ft_atoi_base(char *str, char *base)
{
    int index;
    int count;
    int result;
    int length;

    if (!check_base(base))
        return (0);
    index = 0;
    while (check_char(str[index], base) == 1)
        index++;
    count = 0;
    while (check_char(str[index], base) < 0)
    {
        if (check_char(str[index], base) == -1)
            count++;
        index++;
    }
    if (check_char(str[index], base) != 2)
        return (0);
    result = get_int(str[index++], base);
    length = get_length(base);
    while (check_char(str[index], base) == 2)
        result = result * length + get_int(str[index++], base);
    return (count % 2 == 1 ? result * (-1) : result);
}

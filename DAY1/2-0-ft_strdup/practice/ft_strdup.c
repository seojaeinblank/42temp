#include <stdlib.h>
#include <stdio.h>

int		get_len(char *str)
{
	int l;

	l = 0;
	while (*str)
	{
		str++;
		l++;
	}

	return (l);
}


char	*ft_strdup(char *str)
{
	int		len;
	char	*result;

	len = get_len(str);
	if (!(result = (char *)malloc(sizeof(char) * len + 1)))
		return (NULL);
	str[len] = 0;
	while (len >= 0)
	{
		result[len] = str[len];
		len--;
	}	
	return (result);
}

int main()
{
	char test[10] = "testcopy";
	
	printf("%s\n", ft_strdup(test));
	return (0);
}

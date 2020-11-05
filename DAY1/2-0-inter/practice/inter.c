#include <unistd.h>

char	*double_check(char *str)
{
	int i;
	int j;
	char *ret;

	i = 0;
	*ret = 0;
	while(str[i])
	{	
		j = 0;
		while(j < i)
		{
			if (str[i] == str[j++])
				break;
		}
		if (str[j] == str[i])
			*ret++ = str[i];
		i++;	
	}
	ret[i] = 0;
	return (ret);
}
char 	*compare(char *str1, char *str2)
{
	int i;
	int j;
	char *ret;

	i = 0;
	j = 0;
	while(str1[i])
	{
		while(str2[j])
			if(str1[i] == str2[j++])
				*ret = str1[i];
		i++;
	}
	ret[i] = 0;
	return (ret);
}

void	inter(char *str1, char *str2)
{
	char * checked_str;
	char * compared_str;
	checked_str = double_check(str1);
	compared_str = compare(checked_str, str2);

	while (*compared_str)
	{
		write(1, &compared_str, 1);
		compared_str++;
	}
	return 0;
}

int	main(int argc, char **argv) {
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
}

#include <unistd.h>


int	sort_by_ascii(char *arr1, char *arr2)
{
	int i;

	i = 0;
	while (arr1[i] && arr2[i])
	{
		if (arr1[i] > arr2[i])
			return (1);
		else if (arr1[i] < arr2[i])
			return (-1);
		i++;
	}
	if (!arr1[i] && !arr2[i])
		return (0);
	else if (arr1[i])
		return (1);
	else return (-1);
}

int main(int argc, char *argv[])
{
	int i;
	int j;
	char *temp;
	 
	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (sort_by_ascii(argv[i], argv[j]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;	
	}
 	
	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}	

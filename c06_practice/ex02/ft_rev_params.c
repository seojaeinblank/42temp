#include <unistd.h>

int main(int argc, char  *argv[])
{
	int i;
	int j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[argc - j][i])
		{
			write(1, &argv[argc - j][i], 1);
			i++;
		}
		j++;
		write(1, "\n", 1);
	}
	return (0);
}

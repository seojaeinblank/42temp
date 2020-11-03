#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *ret;
	int *tmp;

	if (min >= max)
		return (0);
	ret = (int*)malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	tmp = ret;
	while (min < max)
		*(tmp++) = min++;
	return (ret);
}

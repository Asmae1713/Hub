#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*copy;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	copy = malloc(sizeof(int) * size);
	if (!copy)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		copy[i] = min;
		min++;
		i++;
	}
	*range = copy;
	return (i);
}

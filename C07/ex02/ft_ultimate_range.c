#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*array;

	i = 0;
	size = max - min;
	if (min >= max)
	{
		*range = (NULL);
		return (0);
	}
	array = malloc(sizeof(int) * size);
	if (!array)
	{
		*range = (NULL);
		return (-1);
	}
	while (i < size)
	{
		array[i] = min;
		min++;
		i++;
	}
	*range = array;
	return (i);
}

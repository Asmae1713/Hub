#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*copy;

	i = 0;
	size = max - min;
	if (min >= max)
		return (0);
	copy = malloc(sizeof(int) * size);
	if (!copy)
		return (0);
	while (i < size)
	{
		copy[i] = min;
		min++;
		i++;
	}
	return (copy);
}

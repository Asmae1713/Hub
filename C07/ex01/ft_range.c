#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*c;

	if (min >= max)
		return (0);
	i = 0;
	size = max - min;
	c = malloc(sizeof(int) * size);
	if (!c)
		return (0);
	while (i < size)
	{
		c[i] = min;
		i++;
		min++;
	}
	return (c);
}

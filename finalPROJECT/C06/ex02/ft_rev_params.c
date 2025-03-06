#include <unistd.h>

int main(int ac, char **av)
{
	int	i;
	int	j;

	i = 0;
	j = ac - 1;
	while (j > 0)
	{
		i = 0;
		while (av[j][i])
		{
			write (1, &av[j][i], 1);
			i++;
		}
		j--;
		write (1, "\n", 1);
	}
}

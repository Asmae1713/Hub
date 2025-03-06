#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write (1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	int	j;
	int	i;
	char*	s;

	i = 1;
	while (i < ac - 1)
	{
		j = 1;
		while (j < ac - 1)
		{
			if (ft_strcmp(av[j], av[j+1]) > 0)
			{
				s = av[j];
				av[j] = av[j+1];
				av[j+1] = s;
			}
			j++;
		}
		i++;
	}
	j = 1;
	while (j < ac)
	{
		ft_putstr(av[j]);
		write (1, "\n", 1);
		j++;
	}
	return 0;
}

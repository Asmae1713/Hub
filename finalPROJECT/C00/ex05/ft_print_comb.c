#include <unistd.h>

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	f;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			f = j + 1;
			while (f <= '9')
				{
					write (1, &i, 1);
					write (1, &j, 1);
					write (1, &f, 1);
					if (i != '7')
						write (1, ", ", 2);
					f++;
				}
				j++;
		}
		i++;
	}
}

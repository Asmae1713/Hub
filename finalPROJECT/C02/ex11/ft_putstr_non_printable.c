#include <unistd.h>

void	nonprint(char c)
{
	char	*hd;

	hd = "0123456789abcdef";
	write (1, "\\", 1);
	write (1, &hd[c / 16], 1);
	write (1, &hd[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	i = 0;
	while (str[i])
	{
		if (str[i] <= 126 && str[i] >= 32)
			write (1, &str[i], 1);
		else
			nonprint(str[i]);
		i++;
	}
}

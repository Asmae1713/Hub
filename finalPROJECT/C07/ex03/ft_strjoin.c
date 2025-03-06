#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	 *ft_len(int size, char **strs, char *sep)
{
	int	i;
	int	len;
	int	*c;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		i++;
	}
	len += ft_strlen(sep) * size - 1;
	if (size <= 0)
		len = 1;
	c = malloc(len);
	if (!c)
		return (NULL);
	return (c);
}
char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	f;
	char	*copy;
	i = 0;
	j = 0;
	f = 0;
	copy = ft_len(size, strs, sep);
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
			copy[f++] = strs[i][j++];
		j = 0;
		while (sep[j] && i != size - 1)
			copy[f++] = sep[j++];
		i++;
	}
	copy[f] = '\0';
	return (copy);
}


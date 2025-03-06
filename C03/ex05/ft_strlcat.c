unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	ld;
	unsigned int	ls;

	i = 0;
	ld = 0;
	ls = 0;
	while (dest[ld] && ld < size)
		ld++;
	while (src[ls])
		ls++;
	if (ld == size)
		return (ld + ls);
	if (ld < size - 1)
	{
		while (src[i] && (ld + i) < size - 1)
		{
			dest[ld + i] = src[i];
			i++;
		}
	}
	dest[ld + i] = '\0';
	return (ld + ls);
}


int	ft_is_prime(int nb)
{
	int	r;
	
	r = 2;
	if (nb <= 1)
		return (0);
	while ((nb / r) >= r)
	{
		if ((nb % r) == 0)
			return (0);
		r++;
	}
	return (1);
}

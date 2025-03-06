int	ft_fibonacci(int index)
{
	int	result;

	result = 0;
	if (index < 0)
		return (-1);
	if(index < 2)
		return (index);
	result = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (result);
}

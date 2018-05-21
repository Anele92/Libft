void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	const unsigned char	*tmp;
	unsigned char		find;

	if (s == NULL)
		return (NULL);
	find = c;
	tmp = s;
	i = 0;
	while (i < n)
	{
		if (tmp[i] == (unsigned char)c)
			return ((void *)tmp + i);
		i++;
	}
	return (NULL);
}

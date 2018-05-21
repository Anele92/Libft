#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int		i;
	unsigned char	*tmp;

	if (n > 0)
	{
		tmp = s;
		i = 0;
		while (i < n)
		{
			tmp[i] = 0;
			i++;
		}
	}
}

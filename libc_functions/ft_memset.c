
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t		i;
	unsigned char	*dest;

	if (b != NULL)
	{
		i = 0;
		dest = b;
		while (i < len)
		{
			dest[i] = (unsigned char)c;
			i++;
		}
		return (dest);
	}
	else
		return (b);
}

#include <stdio.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size);

int	main(void)
{
	size_t	res;
	res = ft_strlcat("Anele", "Noroita", 4);
	printf("%ld\n", res);
	return (0);
}

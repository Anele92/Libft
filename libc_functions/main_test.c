#include <stdio.h>
#include "libft.h"

int	main(void)
{
	unsigned	int	res;
	res = ft_strlcat("Anele", "Noroita", BUFF_SIZE);
	printf("%d\n", res);
	return (0);
}

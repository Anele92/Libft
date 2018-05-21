#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, size_t num)
{
	size_t	index;

	index = 0;
	while (src[index] != '\0' && index < num)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < num)
	{
		dest[index] = '\0';
	}
	return (dest);
}

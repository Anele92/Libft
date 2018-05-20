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
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	str1[] = "Face off";
	char	str2[10];

	ft_strncpy(str2, str1, 4);
	printf("Copied %s\n", str2);
	return (0);
}

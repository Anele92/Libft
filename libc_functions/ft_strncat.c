#include <string.h>
#include <stdio.h>

char	*ft_strncat(char *dest, char *src, size_t num)
{
	int	index;
	size_t	dest_len;

	index = 0;
	dest_len = ft_strlen(dest);
	while (src[index] != '\0' && index < num)
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[100] = "WeThink";
	char	s2[] = "Code_Africa";
	ft_strncat(s1, s2, 11);
	printf("%s\n", s1);
	return (0);
}

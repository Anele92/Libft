#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	int	index;
	size_t	dest_len;

	index = 0;
	dest_len = ft_strlen(dest);
	while (src[index] != '\0')
	{
		dest[dest_len + index] = src[index];
		index++;
	}
	dest[dest_len + index] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[15] = "WeThink";
	char	s2[] = "Code_";
	ft_strcat(s1, s2);
	printf("%s\n", s1);
	return (0);
}

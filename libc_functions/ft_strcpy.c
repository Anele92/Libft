#include <stdio.h>

char	*ft_strcpy(char *dest, char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		dest[index] = str[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

int	main(void)
{
	char	name[6] = "Anele";
	char	dest[6];

	ft_strcpy(dest, name);
	printf("copy of name is %s\n", dest);
	return (0);
}

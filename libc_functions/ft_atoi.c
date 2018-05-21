#include "libft.h"

int     ft_atoi(const char *str)
{
    int i;
    int nbr;
    int sign;

    nbr = 0;
    sign = 1;
    i = 0;
    while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
            (str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
        i++;
    if (str[i] == '-')
        sign = -1;
    while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
    {
        nbr *= 10;
        nbr += (int)str[i] - '0';
        i++;
    }
    return (nbr * sign)
}

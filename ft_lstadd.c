
#include "libft.h"

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (*alst != NULL)
		link->next = *alst;
	*alst = new;
}

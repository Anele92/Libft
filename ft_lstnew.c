
#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh_link;

	if ((fresh_link = ft_memalloc(sizeof(t_list))) == NULL)
		return (NULL);
	if (content == NULL)
	{
		fresh_link->content = NULL;
		fresh_link->content_size = 0;
	}
	else
	{
		if ((fresh_link->content = ft_memalloc(content_size)) == NULL)
		{
			free(fresh_link);
			return (NULL);
		}
		fresh_link->content = ft_memmove(fresh_link->content, (void*)content, content_size);
		fresh_link->content_size = content_size;
	}
	fresh_link->next = NULL;
	return (fresh_link);
}

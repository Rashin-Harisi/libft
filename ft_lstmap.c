#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
	t_list	*new_list;

	new_list = NULL;
	while (lst != NULL)
	{
		new_list = ft_lstnew(f(lst->content));
	}
}

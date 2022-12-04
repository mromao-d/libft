#include "libft.h"

void    ft_lstadd_front(t_list **lst, t_list *new)
{
	t_list	*temp;

	if (!lst || !new)
		return ;
	while (temp->next)
		*lst = new;
}
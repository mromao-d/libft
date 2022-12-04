#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*temp;

	if (!(temp = (t_list*)malloc(sizeof(*temp))))
		return (NULL);
	temp->content = content;
	temp->next = NULL;
	return (temp);
}

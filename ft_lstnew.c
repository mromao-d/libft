/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:53:49 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/08 14:32:06 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Allocates memory (using malloc(3)) and returns
// a new node. The ’content’ member variable is
// initialized with the given parameter ’content’.
// The variable ’next’ is initialized to NULL.
t_list	*ft_lstnew(void *content)
{
	t_list	*out;

	out = ft_calloc(sizeof(*out), 1);
	if (!out)
		return (NULL);
	out->content = content;
	out->next = NULL;
	return (out);
}

// int	main(void) {
// 	printf("oasdiuasb\n\n\n");
// 	return (0);
// }

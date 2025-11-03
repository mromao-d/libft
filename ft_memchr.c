/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:19:39 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 12:31:13 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
	{
		if (((unsigned char *)s)[0] == (unsigned char)c)
			return ((void *)s);
		s++;
	}
	return (NULL);
}

/* int	main(void) {
	char str[] = "bonjour";

	// printf("%s\n", ft_memchr(((const void *)str), 'o', 7));
	ft_memchr(((const void *)str), 'o', 7);
	return (0);
} */

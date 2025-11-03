/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:57:24 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 12:16:06 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// need to check if src <= to dest to avoid overlaping memory
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (((unsigned char *)dest) == NULL && ((unsigned char *)src) == NULL)
		return (NULL);
	if (src <= dest)
		while (n--)
			((unsigned char *)dest)[n] = ((unsigned char *)src)[n];
	else
	{
		i = -1;
		while (++i < n)
			((unsigned char *) dest)[i] = ((unsigned char *) src)[i];
	}
	return (dest);
}

/* int	main(void) {
	char src[10] = "This ";
	char dst[100] = "AAAAAAAAAAAAAAAAAAA";

	printf("dest here: %s\n", dst);
	memmove(dst, src, 3);
	printf("dest here: %s\n", dst);
	return (0);
} */

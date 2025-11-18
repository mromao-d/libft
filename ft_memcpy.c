/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 11:46:02 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/18 18:27:32 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// int	main(void) {
// 	char src[100] = "This is the source;";
// 	char dst[100] = "Dest here;";

// 	printf("dest here: %s\n", dst);
// 	ft_memcpy(NULL, NULL, 20);
// 	printf("dest here: %s\n", dst);
// 	return (0);
// }

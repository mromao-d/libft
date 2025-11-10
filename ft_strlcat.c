/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:37:09 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/04 23:55:47 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_out;

	size_out = size;
	if (size == 0)
		return (ft_strlen(src));
	else if (size <= ft_strlen(dst))
		size_out += ft_strlen(src);
	else
		size_out = ft_strlen(src) + ft_strlen(dst);
	i = ft_strlen(dst);
	j = 0;
	while (i + 1 < size && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (size_out);
}

// int	main(void) {
// 	char	str[] = "o meu nome e ";
// 	ft_strlcat(str, "katerina", 10);
// 	printf("%s\n", str);
// }

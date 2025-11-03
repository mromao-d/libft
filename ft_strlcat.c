/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:37:09 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/01 15:31:09 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_out;

	size_out = size;
	i = ft_strlen(dst);
	if (size == 0)
		return (ft_strlen(src));
	else if (size <= i)
		size_out += ft_strlen(src);
	else
		size_out = ft_strlen(src) + i;
	j = 0;
	while (i + 1 < size && src[j])
		dst[i++] = src[j++];
	dst[i] = '\0';
	return (size_out);
}

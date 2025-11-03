/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:57:05 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 14:09:28 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t one, size_t two)
{
	if (one > two)
		return (two);
	return (one);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	delta;
	char	*out;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		delta = 0;
	else
		delta = ft_strlen(s) - start;
	out = ft_calloc(sizeof(char), ft_min(len, (delta)) + 1);
	if (!out)
		return (NULL);
	i = -1;
	while (++i < ft_min(len, delta))
		out[i] = s[start + i];
	out[i] = '\0';
	return (out);
}

/* int	main(void) {
	char const *s = "iohsvfuhsvf";
	unsigned int start = 100;
	size_t	len = 1;

	printf("difference is: %lu\n", long (ft_strlen(s) - start));
	return (0);
} */

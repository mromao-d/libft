/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:15:56 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 13:37:02 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while ((i > 0) && (s[i] != c))
		i--;
	if (i == 0)
		return (NULL);
	while (i-- > 0)
		s++;
	return ((char *)s);
}

/* int	main(void) {
	printf("%s\n", strrchr("AABBCCDKHDJKFAA", 'M'));
	printf("%s\n", ft_strrchr("AABBCCDKHDJKFAA", 'M'));
	return (0);
} */

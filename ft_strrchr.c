/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 21:15:56 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/08 15:24:12 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

// int	main(void) {
// 	// char    str3[]= "bonjourno";
// 	// char *d1 = ft_strrchr(str3, '1');
// 	// char *d2 = strrchr(str3, '1');
// 	char    str3[]= "there is so \0ma\0ny \0 \\0 in t\0his stri\0ng !\0\0\0\0";
// 	char *d1 = ft_strrchr(str3, '\0');
// 	char *d2 = strrchr(str3, '\0');

// 	// printf("%s\n", strrchr("AABBCCDKHDJKFAA", 'M'));
// 	// printf("%s\n", ft_strrchr("AABBCCDKHDJKFAA", 'M'));
// 	printf("%s\n", d1);
// 	printf("%s\n", d2);
// 	return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 13:46:49 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/01 16:23:33 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
		return ((char *) big);
	if (len == 0)
		return (NULL);
	while (big[i])
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j < len) && len > 0)
		{
			if (little[j + 1] == '\0')
				return (&((char *) big)[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

/* int	main(void) {
	printf("%s\n", ft_strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
	printf("%s\n", strnstr("lorem ipsum dolor sit amet", "ipsum", 15));
} */

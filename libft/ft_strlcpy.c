/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 16:58:21 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 16:44:47 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (ft_strlen(dst) == 0)
		return (0);
	i = 0;
	while (dst[i] != '\0' && src[i] != '\0' && (i + 1) <= size)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	if (ft_strlen(dst) < ft_strlen(src))
		return (ft_strlen(dst));
	return (ft_strlen(src));
}
/* 
int	main(void)
{
    char dst[] = "dst";
    const char src[] = "srcasdasd";

    printf("The real result of strlcpy is: %lu dst value\
		is %s src value is %s\n", strlcpy(dst, src, 8), dst, src);
	printf("My real result of strlcpy is: %u dst value\
		is %s src value is %s\n", ft_strlcpy(dst, src, 8), dst, src);
    return (0);
} */
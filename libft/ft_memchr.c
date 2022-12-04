/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:22:52 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 14:02:58 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (void *)s;
	while ((str[i] != (char)c) && (i < n))
		i++;
	if (str[i] != (char)c)
		return (0);
	return (str);
}
/* 
int	main(void)
{
	printf("The real result is: %p\n", memchr("Manuel", 'n', 7));
	printf("The real result is: %p\n", memchr("Manuel", 'M', 7));
	printf("My result is: %p\n", ft_memchr("Manuel", 'e', -9));
} */
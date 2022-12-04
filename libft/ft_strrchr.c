/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 19:30:40 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 17:01:41 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (s[i] != c && i > 0)
		i--;
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/* 
int main(void)
{
	printf("%s\n", strrchr("asdzasdsszzggrd", 'z'));
	printf("%s\n", ft_strrchr("asdzasdsszzggrd", 'z'));
	return (0);
} */
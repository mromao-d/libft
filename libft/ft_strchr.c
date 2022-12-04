/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:45:56 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 17:01:47 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
	{
		i++;
	}
	if (s[i] == c)
		return ((char *)&s[i]);
	else
		return (NULL);
}
/* 
int	main(void)
{
    printf("%s\n", strchr("asdzasdsszzggrd", 'a'));
    printf("%s\n", ft_strchr("asdzasdsszzggrd", 'g'));
    return (0);
}
 */
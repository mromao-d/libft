/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:33:26 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 14:16:32 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*output;
	size_t	i;

	i = 0;
	output = malloc(sizeof(char) * (len + 1));
	if (!(output))
		return ('\0');
	while (s[(start + len)] != '\0' && (len > 0))
	{
		output[i] = s[start - 1];
		i++;
		start++;
		len--;
	}
	output[i] = '\0';
	return (output);
}
/* 
int	main(void)
{
	char const *s;

	s = "123456789";
	printf("%s, %s", ft_substr(s, 1, 3), s);
	return (0);
} */
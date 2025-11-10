/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:09:32 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/04 21:12:55 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	i = -1;
	out = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	while (s[++i])
		out[i] = f(i, s[i]);
	out[i] = 0;
	return (out);
}

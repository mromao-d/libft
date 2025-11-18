/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:09:32 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/12 12:02:37 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Applies the function f to each character of the
// string s, passing its index as the first argument
// and the character itself as the second. A new
// string is created (using malloc(3)) to store the
// results from the successive applications of f.
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	if (!s || !f)
		return (NULL);
	i = -1;
	out = ft_calloc(sizeof(char), ft_strlen(s) + 1);
	if (!out)
		return (NULL);
	while (s[++i])
		out[i] = f(i, s[i]);
	out[i] = 0;
	return (out);
}

// char func(unsigned int i, char c)
// {
// 	(void) i;
// 	return (ft_tolower(c));
// }

// int	main(void) {
// 	char	*s;

// 	s = ft_strmapi("ASDSADASD", &func);
// 	printf("%s", s);
// }

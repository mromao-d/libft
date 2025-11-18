/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 21:14:04 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/12 12:13:05 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	if (!s || !f)
		return ;
	i = -1;
	while (s[++i])
		f(i, &s[i]);
	return ;
}

// void func(unsigned int i, char *c)
// {
// 	(void) i;
// 	*c = ft_tolower(*c);
// }

// int	main(void) {
// 	char	*s = ft_strdup("ASDSADASD\n");

// 	printf("%s", s);
// 	ft_striteri(s, &func);
// 	printf("%s", s);
// 	return (0);
// }

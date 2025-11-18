/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:38:08 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/12 11:30:31 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;

	if (!s1 || !s2)
		return (NULL);
	out = ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!out)
		return (NULL);
	ft_strlcpy(out, s1, ft_strlen(s1) + 1);
	ft_strlcat(out, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	return (out);
}

// int	main(void) {
// 	char	*s;

// 	// s = ft_strjoin("fuck ", "you!");
// 	// s = ft_strjoin("fuck ", "");
// 	s = ft_strjoin(NULL, "you!");
// 	printf("%s\n", s);
// 	return (0);
// }

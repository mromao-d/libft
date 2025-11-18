/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:48:06 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/12 12:41:37 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_start(char const *s1, char const *set)
{
	int	i;
	int	start;

	i = -1;
	start = 0;
	while (set[++i])
	{
		if (set[i] == s1[start])
		{
			start++;
			i = -1;
		}
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

	if (!s1 || !set)
		return (NULL);
	start = set_start(s1, set);
	end = ft_strlen(s1);
	i = -1;
	while (set[++i])
	{
		if (set[i] == s1[end - 1])
		{
			end--;
			i = -1;
		}
	}
	return (ft_substr(s1, start, end - start));
}

// int	main(void) {
// 	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

// 	printf("%s\n", ft_strtrim(s1, NULL));
// 	return (0);
// }

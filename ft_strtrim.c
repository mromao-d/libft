/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 13:48:06 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 14:08:36 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	i;
	int	start;
	int	end;

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

/* int	main(void) {
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";

	printf("%s\n", ft_strtrim(s1, " "));
	return (0);
} */

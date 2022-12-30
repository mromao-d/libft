/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:38:31 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/30 18:33:45 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cw(char const *s, char c)
{
	size_t	cont_words;

	cont_words = 0;
	while (*s)
	{
		if (*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			cont_words++;
		s++;
	}
	return (cont_words);
}

static char	**str_malloc(char const *s, char c)
{
	char	**split;
	int		count_words;

	count_words = cw(s, c);
	split = malloc((count_words + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	split[count_words] = 0;
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		index;
	int		posi;

	if (!s)
		return (NULL);
	posi = 0;
	index = 0;
	split = str_malloc(s, c);
	if (!split)
		return (NULL);
	while (*s)
	{
		while (*s == c && *s)
			s++;
		while (s[index] != c && s[index])
			index++;
		if (*s)
			split[posi] = ft_substr(s, 0, index);
		posi++;
		s = s + index;
		index = 0;
	}
	return (split);
}

int	main(void)
{
	char	*s;
	char	**output;
	char	c;
	int		i;

	i = 0;
	c = 'n';
	s = "My name is Manuel";
	output = ft_split(s, c);
	while (i <= 9)
	{
		printf("string %d : %s\n", i, output[i]);
		i++;
	}
	return (0);
}

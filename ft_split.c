/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:38:31 by mromao-d          #+#    #+#             */
/*   Updated: 2023/01/03 11:32:27 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_count(char const *s, char c)
{
	size_t	i;

	if (!s || !c)
		return (0);
	i = 1;
	while (s[i++])
		if (s[i] == c)
			i += 1;
	return (i);
}

size_t	first_char(char const *s, char c)
{
	size_t	i;

	i = 0;
	while ((s[i] != c) && (s[i] != '\0'))
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	count;
	size_t	i;
	size_t	size;

	if (!s)
		return (NULL);
	size = strlen(s) + 1;
	count = char_count(s, c);
	output = (char **)malloc(sizeof(*output) * count + 1);
	if (!output)
		return (NULL);
	output [count] = 0;
	i = 0;
	while (*s)
	{
		output[i] = ft_substr(s, 0, first_char(s, c));
		s = ft_substr(s, first_char(s, c) + 1, size);
		i++;
	}
	if (i >= count)
		return (output);
	return (output);
}
/* 
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
	printf("%ld\n", first_char(s, c));
	printf("%s\n", ft_substr(s, 0, first_char(s, c)));
	while (i <= 9)
	{
		printf("string %d : %s\n", i, output[i]);
		i++;
	}
	return (0);
} */

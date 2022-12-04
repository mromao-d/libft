/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:38:31 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 15:02:58 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i++])
		if (s[i] == c)
			count += 1;
	return (count);
}

size_t	first_char(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 1;
	while (s[i] != c)
	{
		i++;
		count++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	count;
	size_t	i;
	size_t	size;

	count = char_count(s, c);
	i = 0;
	if (!s || !c)
		return ('\0');
	output = malloc(sizeof(char) * (count + 1));
	if (!output)
		return ('\0');
	size = ft_strlen(s) + 1;
	while (i < count)
	{
		output[i] = ft_substr(s, 1, first_char(s, c) + 1);
		s = ft_substr(s, first_char(s, c) + 1, size + 1);
		i++;
	}
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
	while (i < 5)
	{
		printf("string %d : %s\n", i, output[i]);
		i++;
	}
	return (0);
}
 */
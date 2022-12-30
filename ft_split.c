/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:38:31 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/28 18:54:54 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = (char*)malloc(sizeof(*s) * (len + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i])
	{
		if (i >= start && j < len)
		{
			str[j] = s[i];
			j++;
		}
		i++;
	}
	str[j] = 0;
	return (str);
}

int	char_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	if (!s || !c)
		return (0);
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
	/* if (s[i] != c)
		return (count - 1); */
	return (count - 1);
}

char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	count;
	size_t	i;
	size_t	size;

	if (!s || !c)
		return (NULL);
	size = strlen(s) + 1;
	count = char_count(s, c);
	output = malloc(sizeof(char) * count + 100);
	if (!output)
		return (NULL);
	i = 0;
	while (i < count)
	{
		output[i++] = ft_substr(s, 0, first_char(s, c));
		s = ft_substr(s, first_char(s, c) + 1, size);
	}
	return (output);
}

/* char	**ft_split(char const *s, char c)
{
	char	**output;
	size_t	count;
	size_t	i;
	size_t	size;

	i = 0;
	if (!s || !c)
		return ('\0');
	while (output[i])
	{
		if (ft_strlen(s) > 0)
			size = ft_strlen(s) + 1;
		else
			size = 0;
		count = char_count(s, c);
		output = malloc(sizeof(char) * (count + 1));
		if (!output)
			return ('\0');
		output[i] = ft_substr(s, 0, first_char(s, c));
		s = ft_substr(s, first_char(s, c) + 1, size + 1);
		i++;
		free (output);
	}
	return (output);
} */

/* int	main(void)
{
	const char		*s;
	unsigned int	start;
	size_t			len;

	s = "My name is Manuel";
	start = 0;
	len = 4;
	printf("%s\n", ft_substr(s, start, len));
	return (0);
} */

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
	/* printf("%s\n", ft_substr(s, 0, 4));
	printf("%s\n", ft_substr(s, 4, 9));
	printf("%s\n", ft_substr(s, 14, 11));
	printf("%s\n", s);
	printf("%s\n", ft_substr(ft_substr(s, 4, 9), 0, 10)); */
	while (i < 5)
	{
		printf("string %d : %s\n", i, output[i]);
		i++;
	}
	return (0);
}

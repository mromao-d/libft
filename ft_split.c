/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:10:33 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/03 20:57:18 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cnt_wrds(char const *s, char c)
{
	int	i;
	int	nb;

	i = 2;
	nb = 1;
	if (!s || !s[0])
		return (0);
	if (s[2] == c)
		nb = 0;
	if (!s[1])
		return (1);
	while (s[i])
	{
		if (s[i] != c && s[i - 1] == c)
			nb++;
		i++;
	}
	return (nb);
}

int	ft_len_c(char const *s, char c)
{
	int	i;

	i = 0;
	while ((char )s[i++] != c)
		;
	// printf("i is: %i\n", i);
	return (i - 1);
}

void	ft_free(char **splited, int n)
{
	int	i;

	i = -1;
	while (++i <= n)
		free(splited[i]);
	free(splited);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		wrds;
	int		len;

	wrds = ft_cnt_wrds(s, c);
	out = ft_calloc(sizeof(char *), wrds + 1);
	if (!out)
		return (NULL);
	i = -1;
	while (*s == c)
		s++;
	while (++i < wrds)
	{
		out[i] = ft_substr(s, 0, ft_len_c(s, c));
		if (!out[i])
			ft_free(out, i);
		// out	= ft_calloc
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	out[i] = NULL;
	return (out);
}

// int	main(void) {
// 	char **splited = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
// 	// printf("%i\n", ft_find_chr("aa", 'a'));
// 	for (int i = 0; i <= ft_cnt_wrds("^^^1^^2a,^^^^3^^^^--h^^^^", '^'); i++) {
// 		printf("%s\n", splited[i]);
// 	}
// 	printf("%i\n", ft_cnt_wrds("^^^1^^2a,^^^^3^^^^--h^^^^", '^'));
// 	return (0);
// }

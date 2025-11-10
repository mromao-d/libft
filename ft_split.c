/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 14:10:33 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/10 19:21:35 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_cnt_wrds(char const *s, char c)
{
	int	i;
	int	wrds;

	i = 0;
	wrds = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			wrds++;
			while (s[i] && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (wrds);
}

int	ft_len_c(char *s, char c)
{
	int	i;
	int	len;

	len = ft_strlen(s);
	while (*s == c)
		s++;
	i = -1;
	while (s[++i])
		if (s[i] == c)
			return (i);
	return (len);
}

void	*ft_free(char **splited)
{
	size_t	i;

	i = 0;
	if (*splited == NULL)
		return (NULL);
	while (splited[i] != NULL)
	{
		free(splited[i]);
		i++;
	}
	free(splited);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**out;
	int		i;
	int		wrds;

	while (*s && *s == c)
		s++;
	wrds = ft_cnt_wrds(s, c);
	out = ft_calloc(sizeof(char *), wrds + 1);
	if (!out)
		return (NULL);
	i = -1;
	while (++i < wrds)
	{
		out[i] = ft_substr(s, 0, ft_len_c((char *)s, c));
		if (!out[i])
			ft_free(out);
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	out[i] = NULL;
	return (out);
}

// int	main(void) {
// 	char	s[] = "Tripouille";
// 	char c = ' ';
// 	char **splited = ft_split(s, c);

// 	// printf("%i\n", ft_find_chr("aa", 'a'));
// 	// for (int i = 0; i <= ft_cnt_wrds(s, c); i++) {
// 	for (int i = 0; i <= 2; i++) {
// 		printf("%s\n", splited[i]);
// 	}
// 	printf("%i\n", ft_cnt_wrds(s, c));
// 	// printf("%i\n", ft_count_words(s, c));
// 	return (0);
// }

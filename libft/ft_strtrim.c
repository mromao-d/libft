/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:18:07 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 14:19:32 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	begin(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = 0;
	while (s1[i])
	{
		j = 0;
		aux = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				aux = 1;
			j++;
		}
		if (aux == 1)
			i++;
		else
			break ;
	}
	return (i);
}

int	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	aux;

	i = ft_strlen(s1) - 1;
	while (s1[i] && i > 0)
	{
		j = 0;
		aux = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				aux = 1;
			j++;
		}
		if (aux == 1)
			i--;
		else
			break ;
	}
	return (ft_strlen(s1) - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*output;
	size_t	size;

	size = ft_strlen(s1) - end(s1, set) - begin(s1, set) + 1;
	output = malloc(sizeof(char) * size);
	if (!(output))
		return ('\0');
	output = ft_substr(s1, begin(s1, set) + 1, size);
	return (output);
}
/* 
int main(void)
{
    char const *s1;
    char const *set;

    s1 = "aueleleaaaMMMManuelM My name isgaaaeleleleua";
    set = "auel";
	printf(" %s\n %s\n %s\n %ld\n %d", \
	ft_strtrim(s1, set), s1, set, strlen(s1), end(s1, set));
    return (0);
} */
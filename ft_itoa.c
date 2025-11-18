/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 21:37:32 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/10 19:30:39 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	cnt_nbrs(long input)
{
	int	nb;

	nb = 0;
	if (input == 0)
		return (1);
	if (input < 0)
	{
		nb++;
		input *= -1;
	}
	while (input > 0)
	{
		nb++;
		input /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*out;
	long	dup_n;

	dup_n = n;
	if (dup_n == 0)
		return (ft_strdup("0"));
	out = ft_calloc(sizeof(char), cnt_nbrs(dup_n) + 1);
	if (!out)
		return (NULL);
	i = cnt_nbrs(n);
	if (dup_n < 0)
	{
		dup_n *= -1;
		out[0] = '-';
	}
	while (dup_n > 0)
	{
		out[--i] = dup_n % 10 + 48;
		dup_n /= 10;
	}
	return (out);
}

// int	main(void) {
// 	for (int i = -10; i < 10; i++) {
// 		printf("%s\n", ft_itoa(i));
// 	}
// 	// printf("%s\n", ft_itoa(0));
// 	return (0);
// }

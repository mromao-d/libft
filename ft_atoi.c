/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/01 14:14:51 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/08 14:38:51 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign;
	int	out;

	i = 0;
	out = 0;
	sign = 1;
	while (nptr[i] == ' ' || nptr[i] == '\t' || nptr[i] == '\n' \
|| nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
		i++;
	if (nptr[i] == '-')
	{
		i++;
		sign *= -1;
	}
	else if (nptr[i] == '+')
		i++;
	while (ft_isdigit(nptr[i]))
		out = out * 10 + nptr[i++] - 48;
	return (out * sign);
}

/* int	main(void) {
	printf("%i\n", ft_atoi("921474836470"));
	return (0);
} */

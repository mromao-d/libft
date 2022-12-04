/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 17:54:17 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 14:17:13 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_nmbr(int nb)
{
	int	size;

	size = 0;
	if (nb < 0)
		nb *= -1;
	while (nb > 0)
	{
		nb = nb / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		i;
	char	*result;

	i = count_nmbr(n) + 1;
	if (n < 0)
		i += 1;
	result = (void *) malloc(sizeof(char) * i);
	if (!(result))
		return (NULL);
	result [--i] = '\0';
	if (n == 0)
		return (result = "0");
	if (n < 0)
	{
		result[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		result[--i] = (n % 10) + 48;
		n = n / 10;
	}
	return (result);
}
/* 
int main(void)
{
	printf("%d,%s", count_nmbr(-10), ft_itoa(10));
	return (0);
} */
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:29:49 by mromao-d          #+#    #+#             */
/*   Updated: 2022/11/02 12:31:14 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	unsigned char	d;

	d = (unsigned int) c;
	while ((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
		return (1);
	return (0);
}
/*
int main(void)
{
    printf("%d\n", isalpha('\n'));
    printf("%d\n", ft_isalpha('\n'));
    return (0);
}
*/

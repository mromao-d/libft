/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 11:49:38 by mromao-d          #+#    #+#             */
/*   Updated: 2022/11/02 11:52:42 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	unsigned char	d;

	d = (unsigned char) c;
	while (d >= 48 && d <= 57)
		return (1);
	return (0);
}
/* 
int main(void)
{
    printf("%d\n", isdigit(57));
    printf("%d\n", ft_isdigit(57));
    return (0);
} */

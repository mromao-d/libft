/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 12:44:29 by mromao-d          #+#    #+#             */
/*   Updated: 2022/11/11 13:35:49 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char	*str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		result = result * 10 + str[i] - 48;
		i++;
	}
	return (result);
}

/* int main(void)
{
	char str1[] = "-12.12";
	char str2[] = "5";

    atoi("s");
	printf("%s\n", str1);
    printf("%d\n", atoi(str1) + atoi(str2));
	printf("%d\n", ft_atoi(str1) + ft_atoi(str2));
    printf("%d\n", atoi_l(str, "s"));
	return (0);
} */
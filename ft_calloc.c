/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-s <mromao-s@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/02 12:43:43 by mromao-s          #+#    #+#             */
/*   Updated: 2025/11/02 12:47:00 by mromao-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*out;

	out = malloc(sizeof(char) * (nmemb * size));
	if (!out)
		return (NULL);
	ft_bzero(out, nmemb * size);
	return (out);
}

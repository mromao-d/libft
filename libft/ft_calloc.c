/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mromao-d <mromao-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:35:47 by mromao-d          #+#    #+#             */
/*   Updated: 2022/12/04 15:36:15 by mromao-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*output;

	output = (void *) malloc(sizeof(char) * (nmemb * size));
	if (!(output || nmemb || size))
		return ('\0');
	ft_bzero (output, nmemb);
	return (output);
}
/* 
int	main(void)
{
	char *teste;

	teste = malloc(5 * sizeof(char));	
	if (!teste)
		return (0);
	strcpy(teste, "asdd");
	printf("%s\n", teste);
	printf("%p\n", malloc(2 * sizeof(char)));
	printf("%s\n", teste);
	free (teste);
	return (0);
 */
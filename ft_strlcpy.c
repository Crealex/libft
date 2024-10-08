/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 09:35:53 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/08 11:54:47 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	int		result;

	i = 0;
	result = 0;
	while (src[result])
	{
		result++;
	}
	if (dstsize == 0)
	{
		return (result);
	}
	while (src[i] && i < (dstsize - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (result);
}

/*
#include <stdio.h>

int main()
{
	const char src[20] = "Je teste ma fonction";
	char dest[25];
	const char src2[20] = "Je teste ma fonction";
	char dest2[20];
	size_t nb = 0;
	printf("la valeur retournee par la fonction officiel est :
	 %lu\n", strlcpy(dest, src, nb));
	printf("La chaine copie est : %s\n", dest);
	printf("la valeur retournee par la fonction maison est :
	 %lu\n", ft_strlcpy(dest2, src2, nb));
	printf("La chaine copie est : %s\n", dest2);
}
 */

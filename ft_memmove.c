/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alexandre <alexandre@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:38:18 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/07 21:55:06 by alexandre        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*tempsrc;
	unsigned char		*tempdst;

	i = 0;
	tempdst = dst;
	tempsrc = src;
	if (tempsrc < tempdst && tempdst < tempsrc + n)
	{
		i = n;
		while (i--)
		{
			tempdst[i] = tempsrc[i];
		}
	}
	else if (tempdst != tempsrc && n > 0)
	{
		while (i < n)
		{
			tempdst[i] = tempsrc[i];
			i++;
		}
	}
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	unsigned char src[20] = "Je teste ma fonction";
	unsigned char dest[20];
	size_t nb = 6;

	printf("Resultat : %s\n", ft_memmove(dest, src, nb));
	printf("Resultat : %s\n", memmove(dest, src, nb));
}
 */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:38:18 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:57:38 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t				i;
	const unsigned char	*tempsrc;
	unsigned char		*tempdst;
	unsigned char		temp[n];

	i = 0;
	tempdst = dst;
	tempsrc = src;
	while (i < n)
	{
		temp[i] = tempsrc[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		tempdst[i] = temp[i];
		i++;
	}
	tempdst[i] = '\0';
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

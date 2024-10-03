/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 15:53:24 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/03 09:55:49 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*tempdest;
	const unsigned char	*tempsrc;

	i = 0;
	tempdest = dst;
	tempsrc = src;
	while (i < n)
	{
		tempdest[i] = tempsrc[i];
		i++;
	}
	tempdest[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>

int main()
{
	unsigned char dest[20];
	const unsigned char src[20] = "Je teste ma fonction";
	size_t nb = 6;
	unsigned int tabsrc[6] = {69, 70, 71, 72, 73, 74};
	unsigned int tabdst[6];

	printf("le resultat : %s\n", ft_memcpy(dest, src, nb));
	printf("le resultat : %s\n", memcpy(dest, src, nb));
	printf("le resultat : %s\n", ft_memcpy(tabdst, tabsrc, nb));
	printf("le resultat : %s\n", memcpy(tabdst, tabsrc, nb));
} */

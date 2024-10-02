/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atomasi <atomasi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 14:34:35 by atomasi           #+#    #+#             */
/*   Updated: 2024/10/02 15:38:03 by atomasi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	const unsigned char *temp;

	i = 0;
	temp = s;
	while (temp[i] && i < n)
	{
		if (temp[i] == c)
		{
			return ((void *)&temp[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	size_t nb;

	nb = 12;
	printf("La fonction officiel retoourne : %s\n", memchr("Test de la fonction", 'o', nb));
	printf("La fonction maison retoourne : %s\n", ft_memchr("Test de la fonction", 'o', nb));
}
 */
